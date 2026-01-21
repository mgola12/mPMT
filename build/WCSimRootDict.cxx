// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME WCSimRootDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "WCSimRootOptions.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *WCSimEnumerations_Dictionary();
   static void WCSimEnumerations_TClassManip(TClass*);
   static void *new_WCSimEnumerations(void *p = nullptr);
   static void *newArray_WCSimEnumerations(Long_t size, void *p);
   static void delete_WCSimEnumerations(void *p);
   static void deleteArray_WCSimEnumerations(void *p);
   static void destruct_WCSimEnumerations(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimEnumerations*)
   {
      ::WCSimEnumerations *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::WCSimEnumerations));
      static ::ROOT::TGenericClassInfo 
         instance("WCSimEnumerations", "WCSimEnumerations.hh", 36,
                  typeid(::WCSimEnumerations), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &WCSimEnumerations_Dictionary, isa_proxy, 4,
                  sizeof(::WCSimEnumerations) );
      instance.SetNew(&new_WCSimEnumerations);
      instance.SetNewArray(&newArray_WCSimEnumerations);
      instance.SetDelete(&delete_WCSimEnumerations);
      instance.SetDeleteArray(&deleteArray_WCSimEnumerations);
      instance.SetDestructor(&destruct_WCSimEnumerations);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimEnumerations*)
   {
      return GenerateInitInstanceLocal(static_cast<::WCSimEnumerations*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::WCSimEnumerations*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *WCSimEnumerations_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::WCSimEnumerations*>(nullptr))->GetClass();
      WCSimEnumerations_TClassManip(theClass);
   return theClass;
   }

   static void WCSimEnumerations_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootOptions(void *p = nullptr);
   static void *newArray_WCSimRootOptions(Long_t size, void *p);
   static void delete_WCSimRootOptions(void *p);
   static void deleteArray_WCSimRootOptions(void *p);
   static void destruct_WCSimRootOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootOptions*)
   {
      ::WCSimRootOptions *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootOptions >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootOptions", ::WCSimRootOptions::Class_Version(), "WCSimRootOptions.hh", 27,
                  typeid(::WCSimRootOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootOptions::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootOptions) );
      instance.SetNew(&new_WCSimRootOptions);
      instance.SetNewArray(&newArray_WCSimRootOptions);
      instance.SetDelete(&delete_WCSimRootOptions);
      instance.SetDeleteArray(&deleteArray_WCSimRootOptions);
      instance.SetDestructor(&destruct_WCSimRootOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootOptions*)
   {
      return GenerateInitInstanceLocal(static_cast<::WCSimRootOptions*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::WCSimRootOptions*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootOptions::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootOptions::Class_Name()
{
   return "WCSimRootOptions";
}

//______________________________________________________________________________
const char *WCSimRootOptions::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootOptions*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootOptions::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootOptions*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootOptions::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootOptions*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootOptions::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootOptions*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimEnumerations(void *p) {
      return  p ? new(p) ::WCSimEnumerations : new ::WCSimEnumerations;
   }
   static void *newArray_WCSimEnumerations(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimEnumerations[nElements] : new ::WCSimEnumerations[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimEnumerations(void *p) {
      delete (static_cast<::WCSimEnumerations*>(p));
   }
   static void deleteArray_WCSimEnumerations(void *p) {
      delete [] (static_cast<::WCSimEnumerations*>(p));
   }
   static void destruct_WCSimEnumerations(void *p) {
      typedef ::WCSimEnumerations current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::WCSimEnumerations

//______________________________________________________________________________
void WCSimRootOptions::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootOptions.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootOptions::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootOptions::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootOptions(void *p) {
      return  p ? new(p) ::WCSimRootOptions : new ::WCSimRootOptions;
   }
   static void *newArray_WCSimRootOptions(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootOptions[nElements] : new ::WCSimRootOptions[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootOptions(void *p) {
      delete (static_cast<::WCSimRootOptions*>(p));
   }
   static void deleteArray_WCSimRootOptions(void *p) {
      delete [] (static_cast<::WCSimRootOptions*>(p));
   }
   static void destruct_WCSimRootOptions(void *p) {
      typedef ::WCSimRootOptions current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootOptions

namespace {
  void TriggerDictionaryInitialization_libWCSimRootDict_Impl() {
    static const char* headers[] = {
"WCSimRootOptions.hh",
nullptr
    };
    static const char* includePaths[] = {
"/home/mgola/Root/root-6-30-00-install/include/root",
"/home/mgola/WCTE_mPMT/include",
"/home/mgola/software/geant4/geant4-v11.2.1-install/include/Geant4",
"/home/mgola/WCTE_mPMT/build/include",
"/home/mgola/WCTE_mPMT",
"/home/mgola/Root/root-6-30-00-install/include/root",
"/home/mgola/WCTE_mPMT/build/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libWCSimRootDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$WCSimEnumerations.hh")))  __attribute__((annotate("$clingAutoload$WCSimRootOptions.hh")))  WCSimEnumerations;
class __attribute__((annotate("$clingAutoload$WCSimRootOptions.hh")))  WCSimRootOptions;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libWCSimRootDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "WCSimRootOptions.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"WCSimEnumerations", payloadCode, "@",
"WCSimRootOptions", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libWCSimRootDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libWCSimRootDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libWCSimRootDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libWCSimRootDict() {
  TriggerDictionaryInitialization_libWCSimRootDict_Impl();
}
