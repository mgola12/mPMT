cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(WCTE_mPMT)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Geant4
find_package(Geant4 REQUIRED ui_all vis_all)
include(${Geant4_USE_FILE})

# Find ROOT
find_package(ROOT REQUIRED COMPONENTS Core RIO Hist Tree)
include(${ROOT_USE_FILE})

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  ${Geant4_INCLUDE_DIRS}
  ${ROOT_INCLUDE_DIRS}
)
include_directories(${CMAKE_BINARY_DIR}/include)


file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cc)
file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.hh)

set(DICT_HEADERS WCSimRootOptions.hh)
#set(DICT_HEADERS ${CMAKE_BINARY_DIR}/include/WCSimRootOptions.hh)
set(DICT_LINKDEF include/WCSimRootLinkDef.hh)

# Generate dictionary using ROOT's official macro
ROOT_GENERATE_DICTIONARY(WCSimRootDict
  ${DICT_HEADERS}
  LINKDEF ${DICT_LINKDEF}
)

add_library(WCSimRoot SHARED
  src/WCSimEnumerations.cc
  src/WCSimRootOptions.cc
  ${CMAKE_CURRENT_BINARY_DIR}/WCSimRootDict.cxx
)

target_include_directories(WCSimRoot PUBLIC
  ${ROOT_INCLUDE_DIRS}
  ${CMAKE_CURRENT_BINARY_DIR}
)

target_link_libraries(WCSimRoot ${ROOT_LIBRARIES})

add_executable(mPMT mPMT.cc ${sources} ${headers})

target_link_libraries(mPMT
  WCSimRoot
  ${Geant4_LIBRARIES}
  ${ROOT_LIBRARIES}
)

add_custom_target(WCTE_mPMT DEPENDS mPMT)
