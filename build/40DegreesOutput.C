
*************************************************************
 Geant4 version Name: geant4-10-01-patch-03    (5-February-2016)
                      Copyright : Geant4 Collaboration
                      Reference : NIM A 506 (2003), 250-303
                            WWW : http://cern.ch/geant4
*************************************************************

G4Material WARNING: duplicate name of material Aluminum
Checking overlaps for volume glassTube ... OK! 
Checking overlaps for volume pmtSphere ... OK! 
Checking overlaps for volume placeInnerCone ... OK! 
Checking overlaps for volume pmtInnerSphere ... OK! 
Checking overlaps for volume absorber ... OK! 
PMT SURFACE == 2
CATHODE PARAMETER == 1
Use KCsCb cathode optical parameters
Scoring volume:  logicabsorber
Checking overlaps for volume innerReflector ... OK! 
Process Name: Transportation
Process Name: OpAbsorption
Process Name: OpRayleigh
Process Name: OpMieHG
Process Name: OpBoundary
Visualization Manager instantiating with verbosity "warnings (3)"...
Visualization Manager initialising...
Registering graphics systems...

You have successfully registered the following graphics systems.
Current available graphics systems are:
  ASCIITree (ATree)
  DAWNFILE (DAWNFILE)
  G4HepRep (HepRepXML)
  G4HepRepFile (HepRepFile)
  OpenGLImmediateQt (OGLI, OGLIQt)
  OpenGLStoredQt (OGL, OGLS, OGLSQt)
  RayTracer (RayTracer)
  RayTracerX (RayTracerX)
  VRML1FILE (VRML1FILE)
  VRML2FILE (VRML2FILE)
  gMocrenFile (gMocrenFile)

Registering model factories...

You have successfully registered the following model factories.
Registered model factories:
  generic
  drawByCharge
  drawByParticleID
  drawByOriginVolume
  drawByAttribute

Registered filter factories:
  chargeFilter
  particleFilter
  originVolumeFilter
  attributeFilter

You have successfully registered the following user vis actions.
Run Duration User Vis Actions: none
End of Event User Vis Actions: none
End of Run User Vis Actions: none

Some /vis commands (optionally) take a string to specify colour.
Available colours:
  black, blue, brown, cyan, gray, green, grey, magenta, red, white, yellow

Setting water attenuation parameter 1.300000
Setting cathode reflectivity parameter 0.320000
Setting Rayleigh scattering parameter 0.750000
Setting blacksheet reflection parameter 2.500000
Setting Mie scattering parameter 0.000000
Setting Top Veto Off
Setting Top Veto PMT Spacing 100.000000
Setting PMT photocathode surface optical model as Model 2 (0 means default dielectric model)
Setting PMT photocathode surface parameters as Choice 1 (0 = SK, 1 = KCsRb, 2 = RbCsCb)

========= Table of registered couples ==============================

Index : 0     used in the geometry : Yes
 Material : Water
 Range cuts        :  gamma  0 fm     e-  0 fm     e+  0 fm  proton 0 fm 
 Energy thresholds :  gamma  600 keV    e-  600 keV    e+  600 keV proton 0 eV 
 Region(s) which use this couple : 
    DefaultRegionForTheWorld

Index : 1     used in the geometry : Yes
 Material : PMTGlass
 Range cuts        :  gamma  0 fm     e-  0 fm     e+  0 fm  proton 0 fm 
 Energy thresholds :  gamma  600 keV    e-  600 keV    e+  600 keV proton 0 eV 
 Region(s) which use this couple : 
    DefaultRegionForTheWorld

Index : 2     used in the geometry : Yes
 Material : Air
 Range cuts        :  gamma  0 fm     e-  0 fm     e+  0 fm  proton 0 fm 
 Energy thresholds :  gamma  600 keV    e-  600 keV    e+  600 keV proton 0 eV 
 Region(s) which use this couple : 
    DefaultRegionForTheWorld

Index : 3     used in the geometry : Yes
 Material : customAbsorber
 Range cuts        :  gamma  0 fm     e-  0 fm     e+  0 fm  proton 0 fm 
 Energy thresholds :  gamma  600 keV    e-  600 keV    e+  600 keV proton 0 eV 
 Region(s) which use this couple : 
    DefaultRegionForTheWorld

Index : 4     used in the geometry : Yes
 Material : Aluminum
 Range cuts        :  gamma  0 fm     e-  0 fm     e+  0 fm  proton 0 fm 
 Energy thresholds :  gamma  600 keV    e-  600 keV    e+  600 keV proton 0 eV 
 Region(s) which use this couple : 
    DefaultRegionForTheWorld

====================================================================

### Run 0 starts.
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.698132
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

-------- WWWW ------- G4Exception-START -------- WWWW -------
*** G4Exception : ZeroPolarization
      issued by : G4PrimaryTransformer::GenerateSingleTrack
Polarization of the optical photon is null. Random polarization is assumed.
*** This is just a warning message. ***
-------- WWWW -------- G4Exception-END --------- WWWW -------


*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     67.5     4.06      100  2.76e-06        0        0         0   physWorld initStep
    1     19.3     4.06     42.6  2.76e-06        0       75        75   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6578373221628775
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     18.1     4.04     40.9  2.76e-06        0     2.09      77.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 0
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 0
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 1
Photon Angle == 0.6578373221628775
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

-------- WWWW ------- G4Exception-START -------- WWWW -------
*** G4Exception : ZeroPolarization
      issued by : G4PrimaryTransformer::GenerateSingleTrack
Polarization of the optical photon is null. Random polarization is assumed.
*** This is just a warning message. ***
-------- WWWW -------- G4Exception-END --------- WWWW -------


*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      113    -9.49      100  2.76e-06        0        0         0   physWorld initStep
    1       39    -9.49     12.1  2.76e-06        0      115       115   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7402315045057621
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       37    -9.37     10.2  2.76e-06        0     2.75       118   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.9    -9.37     10.1  2.76e-06        0    0.161       118 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     36.9    -9.37     10.1  2.76e-06        0        0       118   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5       37    -9.42     9.98  2.76e-06        0    0.141       118   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       38    -9.92     8.71  2.76e-06        0      1.7       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      413     -214     -500  2.76e-06        0      664       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 1
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 1
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 2
Photon Angle == 0.7402315045057621
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

-------- WWWW ------- G4Exception-START -------- WWWW -------
*** G4Exception : ZeroPolarization
      issued by : G4PrimaryTransformer::GenerateSingleTrack
Polarization of the optical photon is null. Random polarization is assumed.
*** This is just a warning message. ***
-------- WWWW -------- G4Exception-END --------- WWWW -------


*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     78.5     3.94      100  2.76e-06        0        0         0   physWorld initStep
    1     27.1     3.94     38.8  2.76e-06        0     79.9      79.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6787222441399985
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.8     3.92     37.2  2.76e-06        0     2.02        82 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     17.2     4.27       28  2.76e-06        0     12.6      94.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -18.7     5.69      -10  2.76e-06 2.76e-06     52.3       147    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 2
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 1
No. of Photons Reflected == 1
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 3
Photon Angle == 0.6787222441399985
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

-------- WWWW ------- G4Exception-START -------- WWWW -------
*** G4Exception : ZeroPolarization
      issued by : G4PrimaryTransformer::GenerateSingleTrack
Polarization of the optical photon is null. Random polarization is assumed.
*** This is just a warning message. ***
-------- WWWW -------- G4Exception-END --------- WWWW -------


*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      102    -28.4      100  2.76e-06        0        0         0   physWorld initStep
    1     28.4    -28.4     11.9  2.76e-06        0      115       115   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.763361458235984
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       25    -27.7      8.8  2.76e-06        0     4.64       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3       25    -27.7      8.8  2.76e-06        0        0       120   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     17.6    -27.3   -0.896  2.76e-06        0     12.2       132   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     17.6    -27.3   -0.896  2.76e-06        0 1.72e-14       132   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     6.23    -23.4      -10  2.76e-06 2.76e-06     15.1       147    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 3
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 1
No. of Photons Reflected == 3
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 5
Photon Angle == 0.763361458235984
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

-------- WWWW ------- G4Exception-START -------- WWWW -------
*** G4Exception : ZeroPolarization
      issued by : G4PrimaryTransformer::GenerateSingleTrack
Polarization of the optical photon is null. Random polarization is assumed.
*** This is just a warning message. ***
-------- WWWW -------- G4Exception-END --------- WWWW -------


*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     78.6     11.4      100  2.76e-06        0        0         0   physWorld initStep
    1     26.5     11.4     37.9  2.76e-06        0     81.1      81.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6790120623547851
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.2     11.4     36.3  2.76e-06        0     2.06      83.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     17.4     12.3       28  2.76e-06        0     11.4      94.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -18     16.5    -9.41  2.76e-06        0     51.7       146 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5      -18     16.5    -9.41  2.76e-06        0        0       146 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     3.84    -35.9      7.2  2.76e-06        0     59.1       205 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7     3.84    -35.9      7.2  2.76e-06        0        0       205 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8      9.6    -34.2       28  2.76e-06        0     21.6       227 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     10.1    -34.1       30  2.76e-06        0     2.06       229   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     10.7    -34.6     32.1  2.76e-06        0     2.26       231   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      140     -116      500  2.76e-06        0      492       724  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 4
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 5
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 8
Photon Angle == 0.6790120623547851
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

-------- WWWW ------- G4Exception-START -------- WWWW -------
*** G4Exception : ZeroPolarization
      issued by : G4PrimaryTransformer::GenerateSingleTrack
Polarization of the optical photon is null. Random polarization is assumed.
*** This is just a warning message. ***
-------- WWWW -------- G4Exception-END --------- WWWW -------


*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       89    -12.7      100  2.76e-06        0        0         0   physWorld initStep
    1     32.8    -12.7       33  2.76e-06        0     87.4      87.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6978306101349743
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     31.5    -12.6     31.5  2.76e-06        0     2.05      89.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 5
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 5
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 9
Photon Angle == 0.6978306101349743
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

-------- WWWW ------- G4Exception-START -------- WWWW -------
*** G4Exception : ZeroPolarization
      issued by : G4PrimaryTransformer::GenerateSingleTrack
Polarization of the optical photon is null. Random polarization is assumed.
*** This is just a warning message. ***
-------- WWWW -------- G4Exception-END --------- WWWW -------


*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     95.3      -15      100  2.76e-06        0        0         0   physWorld initStep
    1       36      -15     29.3  2.76e-06        0     92.3      92.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7095734409365422
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.9    -14.9       28  2.76e-06        0     1.72        94 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    3     34.9    -14.9       28  2.76e-06        0        0        94   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     28.1    -14.6     35.9  2.76e-06        0     10.5       104   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     28.1    -14.6     35.9  2.76e-06        0        0       104   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6      3.2    -9.82     45.4  2.76e-06        0       27       131   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7      3.2    -9.82     45.4  2.76e-06        0        0       131   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -22.5    -2.52     41.3  2.76e-06        0       27       158   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9    -22.5    -2.52     41.3  2.76e-06        0        0       158   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -38.5      3.9       28  2.76e-06        0     21.8       180   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
   11    -39.9     4.46     26.9  2.76e-06        0     1.88       182   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   12     -500      228     -468  2.76e-06        0      711       894  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 6
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 9
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 13
Photon Angle == 0.7095734409365422
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

-------- WWWW ------- G4Exception-START -------- WWWW -------
*** G4Exception : ZeroPolarization
      issued by : G4PrimaryTransformer::GenerateSingleTrack
Polarization of the optical photon is null. Random polarization is assumed.
*** This is just a warning message. ***
-------- WWWW -------- G4Exception-END --------- WWWW -------


*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     68.8      -24      100  2.76e-06        0        0         0   physWorld initStep
    1     16.5      -24     37.7  2.76e-06        0     81.3      81.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6585404341976422
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     15.1    -23.8     35.9  2.76e-06        0     2.29      83.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     15.1    -23.8     35.9  2.76e-06        0        0      83.6   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     14.9    -25.5     37.4  2.76e-06        0     2.29      85.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -78.7     -500      414  2.76e-06        0      613       699  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 7
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 10
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 14
Photon Angle == 0.6585404341976422
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

-------- WWWW ------- G4Exception-START -------- WWWW -------
*** G4Exception : ZeroPolarization
      issued by : G4PrimaryTransformer::GenerateSingleTrack
Polarization of the optical photon is null. Random polarization is assumed.
*** This is just a warning message. ***
-------- WWWW -------- G4Exception-END --------- WWWW -------


*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      112      3.8      100  2.76e-06        0        0         0   physWorld initStep
    1       40      3.8     14.6  2.76e-06        0      112       112   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7387188247462211
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       38     3.75     12.7  2.76e-06        0     2.71       114   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.9     3.75     12.6  2.76e-06        0    0.156       114 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     37.9     3.75     12.6  2.76e-06        0        0       114   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5       38     3.77     12.5  2.76e-06        0    0.156       115   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     39.9     4.12     10.7  2.76e-06        0     2.71       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      460     88.2     -500  2.76e-06        0      667       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 8
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 11
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 15
Photon Angle == 0.7387188247462211
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

-------- WWWW ------- G4Exception-START -------- WWWW -------
*** G4Exception : ZeroPolarization
      issued by : G4PrimaryTransformer::GenerateSingleTrack
Polarization of the optical photon is null. Random polarization is assumed.
*** This is just a warning message. ***
-------- WWWW -------- G4Exception-END --------- WWWW -------


*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     90.5    -28.6      100  2.76e-06        0        0         0   physWorld initStep
    1     28.2    -28.6     25.7  2.76e-06        0     96.9      96.9   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8323535543859903
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.8    -28.1     23.5  2.76e-06        0     3.26       100   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     25.7    -28.1     23.4  2.76e-06        0    0.235       100 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     25.7    -28.1     23.4  2.76e-06        0        0       100   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     25.7    -28.2     23.2  2.76e-06        0    0.235       101   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       26    -30.6       21  2.76e-06        0     3.26       104   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -12.8     -466     -500  2.76e-06        0      680       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 9
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 12
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 16
Photon Angle == 0.8323535543859903
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     76.9     21.9      100  2.76e-06        0        0         0   physWorld initStep
    1       23     21.9     35.8  2.76e-06        0     83.8      83.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6757578013540102
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     21.7     21.8     34.1  2.76e-06        0     2.19        86 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     21.7     21.8     34.1  2.76e-06        0        0        86   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4       22     23.4     35.6  2.76e-06        0     2.19      88.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     91.1      500      443  2.76e-06        0      631       719  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 10
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 13
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 17
Photon Angle == 0.6757578013540102
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     65.6     29.8      100  2.76e-06        0        0         0   physWorld initStep
    1     11.6     29.8     35.7  2.76e-06        0       84        84   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6495752975320452
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     10.1     29.6     33.7  2.76e-06        0     2.48      86.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 11
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 13
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 18
Photon Angle == 0.6495752975320452
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     89.3    -2.19      100  2.76e-06        0        0         0   physWorld initStep
    1     33.9    -2.19     34.1  2.76e-06        0     86.1      86.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6978402268578461
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     32.6    -2.18     32.5  2.76e-06        0        2      88.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 12
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 13
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 19
Photon Angle == 0.6978402268578461
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     58.6      -21      100  2.76e-06        0        0         0   physWorld initStep
    1     9.22      -21     41.2  2.76e-06        0     76.8      76.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6349470375541748
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     7.82    -20.9     39.3  2.76e-06        0     2.37      79.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -7.59    -24.9       28  2.76e-06        0     19.5      98.7 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -24.3    -29.3     15.8  2.76e-06        0     21.2       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -24.4    -29.3     15.7  2.76e-06        0     0.12       120   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -26.2    -30.4     14.9  2.76e-06        0     2.29       122   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500     -276     -240  2.76e-06        0      591       714  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 13
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 13
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 20
Photon Angle == 0.6349470375541748
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     78.6    -27.4      100  2.76e-06        0        0         0   physWorld initStep
    1     22.3    -27.4     32.9  2.76e-06        0     87.6      87.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6793835957964571
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     20.9    -27.2     31.1  2.76e-06        0     2.28      89.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     17.8    -28.3       28  2.76e-06        0     4.52      94.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -2.79    -35.8     6.92  2.76e-06        0     30.4       125 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -2.79    -35.8     6.92  2.76e-06        0        0       125 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -36.5     9.44     9.45  2.76e-06        0     56.4       181 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -36.5     9.44     9.45  2.76e-06        0        0       181 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -27.2     23.1       28  2.76e-06        0     24.8       206 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9    -26.4     24.3     29.6  2.76e-06        0     2.18       208   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
   10    -26.4     24.3     29.6  2.76e-06        0        0       208 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11    -11.1       24       28  2.76e-06        0     15.4       224 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
   12     30.3       23     23.6  2.76e-06        0     41.6       265   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13     30.4     23.1     23.6  2.76e-06        0    0.113       265   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   14     32.5     23.6     23.4  2.76e-06        0     2.18       268   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   15      500      105    -14.1  2.76e-06        0      476       744  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 14
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 16
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 24
Photon Angle == 0.6793835957964571
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     61.2     25.9      100  2.76e-06        0        0         0   physWorld initStep
    1     9.73     25.9     38.6  2.76e-06        0     80.1      80.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6399563820110576
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     8.29     25.7     36.7  2.76e-06        0     2.43      82.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 15
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 16
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 25
Photon Angle == 0.6399563820110576
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     83.8     27.7      100  2.76e-06        0        0         0   physWorld initStep
    1     25.6     27.7     30.6  2.76e-06        0     90.6      90.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6899622333484547
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     24.2     27.5     28.9  2.76e-06        0     2.27      92.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 16
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 16
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 26
Photon Angle == 0.6899622333484547
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     64.5     2.67      100  2.76e-06        0        0         0   physWorld initStep
    1     17.1     2.67     43.5  2.76e-06        0     73.8      73.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6515897310491705
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     15.8     2.66     41.8  2.76e-06        0     2.12      75.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 17
Energy Deposited == 0
No. of Photons Absorbed == 7
No. of Photons Reflected == 16
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 27
Photon Angle == 0.6515897310491705
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     77.6    -14.1      100  2.76e-06        0        0         0   physWorld initStep
    1     25.4    -14.1     37.7  2.76e-06        0     81.3      81.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6771412260731395
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.1      -14     36.1  2.76e-06        0     2.09      83.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     16.3    -15.2       28  2.76e-06        0     11.3      94.7 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -17    -20.1    -6.67  2.76e-06        0     48.3       143 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5      -17    -20.1    -6.67  2.76e-06        0        0       143 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     -5.2     36.4     8.12  2.76e-06        0     59.6       203 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7     -5.2     36.4     8.12  2.76e-06        0        0       203 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     1.93     35.8       28  2.76e-06        0     21.1       224 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     2.55     35.7     29.7  2.76e-06        0     1.82       226   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10      3.1     36.4     31.8  2.76e-06        0     2.28       228   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      136      144      500  2.76e-06        0      499       726  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 18
Energy Deposited == 0
No. of Photons Absorbed == 7
No. of Photons Reflected == 18
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 30
Photon Angle == 0.6771412260731395
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       80    -20.6      100  2.76e-06        0        0         0   physWorld initStep
    1     25.5    -20.6       35  2.76e-06        0     84.8      84.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6817542850567682
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     24.1    -20.5     33.4  2.76e-06        0     2.15      86.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 19
Energy Deposited == 0
No. of Photons Absorbed == 8
No. of Photons Reflected == 18
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 31
Photon Angle == 0.6817542850567682
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     67.4     32.3      100  2.76e-06        0        0         0   physWorld initStep
    1     11.8     32.3     33.7  2.76e-06        0     86.5      86.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6533341311863459
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     10.2     32.1     31.7  2.76e-06        0     2.54        89 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 20
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 18
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 32
Photon Angle == 0.6533341311863459
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     65.7    -13.2      100  2.76e-06        0        0         0   physWorld initStep
    1     16.9    -13.2     41.9  2.76e-06        0     75.9      75.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6533292419594652
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     15.6    -13.2     40.2  2.76e-06        0     2.16        78 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 21
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 18
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 33
Photon Angle == 0.6533292419594652
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     91.4     35.3      100  2.76e-06        0        0         0   physWorld initStep
    1     19.2     35.3       14  2.76e-06        0      112       112   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8323535543859899
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     16.6     34.4     11.5  2.76e-06        0     3.73       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     16.3     34.4     11.2  2.76e-06        0    0.411       116 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     16.3     34.4     11.2  2.76e-06        0        0       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     16.2     34.6     10.9  2.76e-06        0    0.411       117   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     15.5     36.4     9.11  2.76e-06        0     2.59       119   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -223      500     -458  2.76e-06        0      700       820  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 22
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 19
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 34
Photon Angle == 0.8323535543859899
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       64    -7.98      100  2.76e-06        0        0         0   physWorld initStep
    1     16.3    -7.98     43.2  2.76e-06        0     74.2      74.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6502937648869902
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       15    -7.94     41.5  2.76e-06        0     2.14      76.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 23
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 19
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 35
Photon Angle == 0.6502937648869902
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     72.2       29      100  2.76e-06        0        0         0   physWorld initStep
    1     17.1       29     34.4  2.76e-06        0     85.7      85.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6654564979365172
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     15.6     28.8     32.5  2.76e-06        0     2.37      88.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     10.7     30.8       28  2.76e-06        0     7.01      95.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -6.04     37.6     12.9  2.76e-06        0     23.5       119   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -6.12     37.7     12.9  2.76e-06        0    0.137       119   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -7.49     39.4     11.8  2.76e-06        0     2.48       121   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -432      500     -330  2.76e-06        0      713       834  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 24
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 19
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 36
Photon Angle == 0.6654564979365172
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     62.6     27.8      100  2.76e-06        0        0         0   physWorld initStep
    1       10     27.8     37.4  2.76e-06        0     81.8      81.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6426247103300402
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     8.55     27.6     35.4  2.76e-06        0     2.47      84.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -1.73     31.9       28  2.76e-06        0     13.3      97.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -12     36.1     20.6  2.76e-06        0     13.4       111   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -12.1     36.2     20.5  2.76e-06        0    0.128       111   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -13.7     37.7     19.7  2.76e-06        0     2.38       113   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500      457     -272  2.76e-06        0      705       818  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 25
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 19
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 37
Photon Angle == 0.6426247103300402
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     65.8    -24.9      100  2.76e-06        0        0         0   physWorld initStep
    1     13.8    -24.9     38.1  2.76e-06        0     80.8      80.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6515843310520291
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     12.4    -24.8     36.2  2.76e-06        0     2.34      83.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 26
Energy Deposited == 0
No. of Photons Absorbed == 12
No. of Photons Reflected == 19
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 38
Photon Angle == 0.6515843310520291
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     68.2     1.74      100  2.76e-06        0        0         0   physWorld initStep
    1       20     1.74     42.5  2.76e-06        0     75.1      75.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6593201031575426
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     18.7     1.73     40.8  2.76e-06        0     2.08      77.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 27
Energy Deposited == 0
No. of Photons Absorbed == 13
No. of Photons Reflected == 19
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 39
Photon Angle == 0.6593201031575426
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      102    -23.5      100  2.76e-06        0        0         0   physWorld initStep
    1     32.6    -23.5     16.8  2.76e-06        0      109       109   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.752683626898234
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.3    -23.1     14.7  2.76e-06        0     3.04       112   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.2    -23.1     14.6  2.76e-06        0    0.198       112 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     30.2    -23.1     14.6  2.76e-06        0        0       112   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     30.2    -23.3     14.4  2.76e-06        0    0.198       112   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     31.2    -25.3     12.4  2.76e-06        0     3.04       115   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      143     -440     -500  2.76e-06        0      669       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 28
Energy Deposited == 0
No. of Photons Absorbed == 13
No. of Photons Reflected == 20
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 40
Photon Angle == 0.752683626898234
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     74.1     22.4      100  2.76e-06        0        0         0   physWorld initStep
    1     20.9     22.4     36.6  2.76e-06        0     82.7      82.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6700919067531852
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     19.6     22.3     34.9  2.76e-06        0     2.21        85 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 29
Energy Deposited == 0
No. of Photons Absorbed == 14
No. of Photons Reflected == 20
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 41
Photon Angle == 0.6700919067531852
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     94.5     25.9      100  2.76e-06        0        0         0   physWorld initStep
    1     30.7     25.9     23.9  2.76e-06        0     99.3      99.3   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8323535543859903
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     28.4     25.5     21.8  2.76e-06        0     3.13       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     28.3     25.5     21.6  2.76e-06        0    0.212       103 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     28.3     25.5     21.6  2.76e-06        0        0       103   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     28.3     25.6     21.5  2.76e-06        0    0.212       103   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     28.9     27.8     19.3  2.76e-06        0     3.13       106   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     73.9      461     -500  2.76e-06        0      678       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 30
Energy Deposited == 0
No. of Photons Absorbed == 14
No. of Photons Reflected == 21
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 42
Photon Angle == 0.8323535543859903
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     73.2    -18.6      100  2.76e-06        0        0         0   physWorld initStep
    1     21.3    -18.6     38.2  2.76e-06        0     80.6      80.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6683458650181673
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       20    -18.5     36.5  2.76e-06        0     2.16      82.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     11.2    -20.3       28  2.76e-06        0     12.4      95.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -17.1    -26.1     0.32  2.76e-06        0     40.1       135 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -17.1    -26.1     0.32  2.76e-06        0        0       135 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -15.7     34.7     15.7  2.76e-06        0     62.7       198   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -15.7     34.8     15.8  2.76e-06        0    0.107       198   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8      -16     36.8     16.1  2.76e-06        0     2.11       200   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -63.7      500      103  2.76e-06        0      474       674  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 31
Energy Deposited == 0
No. of Photons Absorbed == 14
No. of Photons Reflected == 22
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 44
Photon Angle == 0.6683458650181673
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      109     21.2      100  2.76e-06        0        0         0   physWorld initStep
    1     34.1     21.2     10.3  2.76e-06        0      117       117   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.749301300814881
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.4     20.2     4.13  2.76e-06        0     9.21       126   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     27.4     20.2     4.13  2.76e-06        0        0       126   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     21.9     20.6    -4.34  2.76e-06        0     10.1       136   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     21.9     20.6    -4.34  2.76e-06        0        0       136   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     15.1     19.1      -10  2.76e-06 2.76e-06     8.97       145    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 32
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 14
No. of Photons Reflected == 24
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 46
Photon Angle == 0.749301300814881
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     84.6     20.5      100  2.76e-06        0        0         0   physWorld initStep
    1     28.5     20.5     33.1  2.76e-06        0     87.3      87.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6905221475380969
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.1     20.4     31.5  2.76e-06        0     2.14      89.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 33
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 24
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 47
Photon Angle == 0.6905221475380969
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     83.5    -36.3      100  2.76e-06        0        0         0   physWorld initStep
    1     17.2    -36.3       21  2.76e-06        0      103       103   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8323535543859903
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     14.5    -35.3     18.4  2.76e-06        0     3.83       107   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     14.2    -35.3       18  2.76e-06        0    0.511       107 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     14.2    -35.3       18  2.76e-06        0        0       107   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     13.9    -35.5     17.6  2.76e-06        0    0.511       108   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     12.7    -38.1     15.1  2.76e-06        0     3.83       112   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -299     -337     -500  2.76e-06        0      672       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 34
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 25
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 48
Photon Angle == 0.8323535543859903
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      112     9.85      100  2.76e-06        0        0         0   physWorld initStep
    1     38.9     9.85     12.8  2.76e-06        0      114       114   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7403751927305149
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.9     9.73       11  2.76e-06        0     2.76       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.8     9.73     10.9  2.76e-06        0    0.161       117 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     36.8     9.73     10.9  2.76e-06        0        0       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     36.9     9.78     10.7  2.76e-06        0    0.161       117   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     38.3     10.5     9.32  2.76e-06        0      2.1       119   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      500      255     -482  2.76e-06        0      717       836  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 35
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 26
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 49
Photon Angle == 0.7403751927305149
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     63.3    -19.5      100  2.76e-06        0        0         0   physWorld initStep
    1     13.6    -19.5     40.8  2.76e-06        0     77.3      77.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6469858745932342
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     12.2    -19.4       39  2.76e-06        0     2.27      79.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 36
Energy Deposited == 0
No. of Photons Absorbed == 16
No. of Photons Reflected == 26
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 50
Photon Angle == 0.6469858745932342
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     74.5    -13.1      100  2.76e-06        0        0         0   physWorld initStep
    1     23.4    -13.1     39.1  2.76e-06        0     79.5      79.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6711410923373733
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     22.1      -13     37.5  2.76e-06        0     2.09      81.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 37
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 26
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 51
Photon Angle == 0.6711410923373733
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     86.3     18.1      100  2.76e-06        0        0         0   physWorld initStep
    1     30.1     18.1     33.1  2.76e-06        0     87.4      87.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.693448066104708
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     28.8       18     31.4  2.76e-06        0      2.1      89.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 38
Energy Deposited == 0
No. of Photons Absorbed == 18
No. of Photons Reflected == 26
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 52
Photon Angle == 0.693448066104708
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       65     17.2      100  2.76e-06        0        0         0   physWorld initStep
    1     15.5     17.2     41.1  2.76e-06        0     76.9      76.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6512607485452584
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     14.2     17.1     39.3  2.76e-06        0     2.21      79.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     1.12     19.6       28  2.76e-06        0     17.5      96.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -24.8     24.5      5.5  2.76e-06        0     34.7       131 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -24.8     24.5      5.5  2.76e-06        0        0       131 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -7.49    -28.3       28  2.76e-06        0       60       191 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -5.47    -34.4     30.6  2.76e-06        0     6.97       198   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -5.15    -36.2     31.7  2.76e-06        0     2.14       200   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     94.7     -500      300  2.76e-06        0      545       745  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 39
Energy Deposited == 0
No. of Photons Absorbed == 18
No. of Photons Reflected == 27
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 54
Photon Angle == 0.6512607485452584
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     72.4    -20.7      100  2.76e-06        0        0         0   physWorld initStep
    1     20.2    -20.7     37.8  2.76e-06        0     81.2      81.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6666579459945989
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     18.9    -20.5     36.1  2.76e-06        0      2.2      83.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 40
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 27
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 55
Photon Angle == 0.6666579459945989
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     89.1    -26.6      100  2.76e-06        0        0         0   physWorld initStep
    1     29.2    -26.6     28.7  2.76e-06        0     93.1      93.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7002532349930197
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     28.7    -26.6       28  2.76e-06        0    0.897        94   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     27.5    -26.4     26.6  2.76e-06        0     1.82      95.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     27.3    -26.5     26.2  2.76e-06        0    0.495      96.3 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     27.3    -26.5     26.2  2.76e-06        0        0      96.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     27.2    -26.8     25.7  2.76e-06        0    0.495      96.8   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     27.5    -29.2     22.8  2.76e-06        0     3.87       101   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -57.2     -313     -500  2.76e-06        0      601       701  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 41
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 28
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 56
Photon Angle == 0.7002532349930197
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     61.7     16.7      100  2.76e-06        0        0         0   physWorld initStep
    1       13     16.7       42  2.76e-06        0     75.7      75.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6439100715364057
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     11.7     16.6     40.2  2.76e-06        0     2.25        78 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -3.21     19.4       28  2.76e-06        0     19.4      97.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -27.7       24     7.96  2.76e-06        0       32       129 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -27.7       24     7.96  2.76e-06        0        0       129 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -10.4    -15.7       28  2.76e-06        0     47.7       177 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -4.53    -29.3     34.9  2.76e-06        0     16.3       193   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     -4.1      -31     36.2  2.76e-06        0     2.18       196   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      138     -500      367  2.76e-06        0      591       787  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 42
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 29
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 58
Photon Angle == 0.6439100715364057
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      100     8.28      100  2.76e-06        0        0         0   physWorld initStep
    1     39.3     8.28     27.4  2.76e-06        0     94.7      94.7   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7397906999990078
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.3     8.18     25.6  2.76e-06        0     2.74      97.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.2     8.18     25.5  2.76e-06        0    0.159      97.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     37.2     8.18     25.5  2.76e-06        0        0      97.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     37.3     8.23     25.3  2.76e-06        0    0.159      97.8   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     39.1     8.98     23.5  2.76e-06        0     2.74       101   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      438      193     -500  2.76e-06        0      683       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 43
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 30
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 59
Photon Angle == 0.7397906999990078
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     77.6      -36      100  2.76e-06        0        0         0   physWorld initStep
    1     17.4      -36     28.2  2.76e-06        0     93.7      93.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6779677124952159
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     17.2      -36       28  2.76e-06        0    0.266        94   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     14.2    -35.4     24.1  2.76e-06        0     4.95      98.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     14.2    -35.4     24.1  2.76e-06        0        0      98.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5       12    -38.3     19.7  2.76e-06        0      5.7       105   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6       12    -38.3     19.7  2.76e-06        0        0       105   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     8.65    -37.2     15.3  2.76e-06        0      5.7       110   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8     8.65    -37.2     15.3  2.76e-06        0 9.01e-15       110   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     6.12    -39.7     10.8  2.76e-06        0      5.7       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   10     6.12    -39.7     10.8  2.76e-06        0        0       116   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11     4.39    -38.8     8.41  2.76e-06        0     3.11       119   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   12     4.39    -38.8     8.41  2.76e-06        0 1.47e-14       119   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   13    -5.03    -29.9     -1.1  2.76e-06        0       16       135   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   14    -5.03    -29.9     -1.1  2.76e-06        0        0       135   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   15      -13      -23    -9.48  2.76e-06        0     13.5       149   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   16      -13      -23    -9.48  2.76e-06        0        0       149   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   17    -13.6    -21.8      -10  2.76e-06 2.76e-06     1.46       150    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 44
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 19
No. of Photons Reflected == 37
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 66
Photon Angle == 0.6779677124952159
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     78.1    -23.4      100  2.76e-06        0        0         0   physWorld initStep
    1     23.4    -23.4     34.8  2.76e-06        0     85.1      85.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6780624704065481
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       22    -23.3     33.1  2.76e-06        0     2.21      87.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 45
Energy Deposited == 0
No. of Photons Absorbed == 20
No. of Photons Reflected == 37
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 67
Photon Angle == 0.6780624704065481
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      114      1.8      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1      1.8     12.4  2.76e-06        0      114       114   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7385046518616418
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1     1.78     10.6  2.76e-06        0     2.71       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38     1.78     10.5  2.76e-06        0    0.156       117 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4       38     1.78     10.5  2.76e-06        0        0       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     38.1     1.79     10.3  2.76e-06        0    0.156       117   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     39.5      1.9     9.09  2.76e-06        0     1.84       119   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      500     42.8     -427  2.76e-06        0      635       755  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 46
Energy Deposited == 0
No. of Photons Absorbed == 20
No. of Photons Reflected == 38
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 68
Photon Angle == 0.7385046518616418
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     52.2     15.2      100  2.76e-06        0        0         0   physWorld initStep
    1     5.12     15.2     43.9  2.76e-06        0     73.2      73.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6195275434532821
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     3.73     15.1       42  2.76e-06        0     2.39      75.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 47
Energy Deposited == 0
No. of Photons Absorbed == 21
No. of Photons Reflected == 38
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 69
Photon Angle == 0.6195275434532821
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      116    -19.6      100  2.76e-06        0        0         0   physWorld initStep
    1     -387    -19.6     -500  2.76e-06        0      783       783  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.8726646259971647
TRACK ID == 1
THE CURRENT EVENTID IS == 48
Energy Deposited == 0
No. of Photons Absorbed == 21
No. of Photons Reflected == 38
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 69
Photon Angle == 0.8726646259971647
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     59.1    0.969      100  2.76e-06        0        0         0   physWorld initStep
    1     12.8    0.969     44.8  2.76e-06        0       72        72   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.639625742470332
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     11.5    0.963     43.1  2.76e-06        0     2.18      74.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 49
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 38
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 70
Photon Angle == 0.639625742470332
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      105     8.13      100  2.76e-06        0        0         0   physWorld initStep
    1     39.3     8.13     21.7  2.76e-06        0      102       102   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7397395785179341
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.3     8.03     19.8  2.76e-06        0     2.74       105   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.2     8.03     19.7  2.76e-06        0    0.159       105 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     37.2     8.03     19.7  2.76e-06        0        0       105   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     37.3     8.07     19.6  2.76e-06        0    0.159       105   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     39.2     8.82     17.7  2.76e-06        0     2.74       108   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      435      188     -500  2.76e-06        0      676       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 50
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 39
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 71
Photon Angle == 0.7397395785179341
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     53.1    -3.68      100  2.76e-06        0        0         0   physWorld initStep
    1     7.53    -3.68     45.7  2.76e-06        0     70.8      70.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6246007555022905
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2      6.2    -3.65     43.9  2.76e-06        0     2.27      73.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 51
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 39
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 72
Photon Angle == 0.6246007555022905
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      104     31.5      100  2.76e-06        0        0         0   physWorld initStep
    1     -399     31.5     -500  2.76e-06        0      783       783  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.8726646259971647
TRACK ID == 1
THE CURRENT EVENTID IS == 52
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 39
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 72
Photon Angle == 0.8726646259971647
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     88.8     14.8      100  2.76e-06        0        0         0   physWorld initStep
    1     32.3     14.8     32.7  2.76e-06        0     87.8      87.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6976633681847688
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       31     14.7     31.1  2.76e-06        0     2.07      89.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 53
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 39
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 73
Photon Angle == 0.6976633681847688
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     93.6     33.4      100  2.76e-06        0        0         0   physWorld initStep
    1     22.3     33.4       15  2.76e-06        0      111       111   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8323535543859903
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     19.8     32.6     12.6  2.76e-06        0     3.56       114   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     19.6     32.6     12.4  2.76e-06        0    0.322       115 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     19.6     32.6     12.4  2.76e-06        0        0       115   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     19.5     32.8     12.1  2.76e-06        0    0.322       115   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       19     35.2     9.85  2.76e-06        0     3.38       119   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -131      500     -432  2.76e-06        0      658       777  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 54
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 40
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 74
Photon Angle == 0.8323535543859903
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     89.3    -12.6      100  2.76e-06        0        0         0   physWorld initStep
    1       33    -12.6     32.9  2.76e-06        0     87.6      87.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6984241679443612
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.7    -12.5     31.3  2.76e-06        0     2.05      89.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     28.9    -12.9       28  2.76e-06        0     4.38        94 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -3.03    -17.3      -10  2.76e-06 2.76e-06     49.8       144    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 55
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 24
No. of Photons Reflected == 40
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 75
Photon Angle == 0.6984241679443612
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     81.7    -33.8      100  2.76e-06        0        0         0   physWorld initStep
    1     21.4    -33.8     28.2  2.76e-06        0     93.7      93.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6867355258790715
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     21.3    -33.7       28  2.76e-06        0    0.251        94   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     18.6    -33.3     24.7  2.76e-06        0     4.28      98.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     18.6    -33.3     24.7  2.76e-06        0       -0      98.3   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     17.4    -36.2     20.9  2.76e-06        0     4.93       103   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     17.4    -36.2     20.9  2.76e-06        0        0       103   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     14.4    -35.3     17.1  2.76e-06        0     4.93       108   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8     14.4    -35.3     17.1  2.76e-06        0 7.64e-15       108   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     12.8    -38.1     13.2  2.76e-06        0     4.93       113   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   10     12.8    -38.1     13.2  2.76e-06        0        0       113   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11     4.85    -34.7     2.71  2.76e-06        0     13.6       127   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   12     4.85    -34.7     2.71  2.76e-06        0 2.98e-14       127   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   13    -4.31    -26.8    -5.62  2.76e-06        0     14.7       141   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   14    -4.31    -26.8    -5.62  2.76e-06        0        0       141   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   15    -8.94    -23.2      -10  2.76e-06 2.76e-06     7.34       149    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 56
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 24
No. of Photons Reflected == 46
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 81
Photon Angle == 0.6867355258790715
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     80.3     14.3      100  2.76e-06        0        0         0   physWorld initStep
    1     27.1     14.3     36.6  2.76e-06        0     82.7      82.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6821038419075065
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.8     14.3       35  2.76e-06        0     2.08      84.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     19.3     15.3       28  2.76e-06        0     9.63      94.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -14.6     20.5    -8.38  2.76e-06        0       50       144 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -14.6     20.5    -8.38  2.76e-06        0        0       144 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -9.79    -31.2     2.35  2.76e-06        0       53       197 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -9.79    -31.2     2.35  2.76e-06        0        0       197 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     1.26    -31.2       28  2.76e-06        0     27.9       225 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     3.64    -31.3     33.5  2.76e-06        0     6.02       231   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     4.28    -31.8     35.6  2.76e-06        0     2.21       234   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      162     -129      500  2.76e-06        0      500       734  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 57
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 48
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 84
Photon Angle == 0.6821038419075065
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     83.2    -21.3      100  2.76e-06        0        0         0   physWorld initStep
    1     27.4    -21.3     33.5  2.76e-06        0     86.8      86.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6880238067499063
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     26.1    -21.1     31.8  2.76e-06        0     2.15        89 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 58
Energy Deposited == 0
No. of Photons Absorbed == 25
No. of Photons Reflected == 48
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 85
Photon Angle == 0.6880238067499063
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     68.8     15.6      100  2.76e-06        0        0         0   physWorld initStep
    1     18.8     15.6     40.4  2.76e-06        0     77.8      77.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6597008907412554
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     17.5     15.5     38.7  2.76e-06        0     2.16      79.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 59
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 48
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 86
Photon Angle == 0.6597008907412554
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     97.9    -14.7      100  2.76e-06        0        0         0   physWorld initStep
    1     37.4    -14.7     27.9  2.76e-06        0     94.1      94.1   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8323535543859903
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.3    -14.5       26  2.76e-06        0     2.82        97   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     35.2    -14.5     25.9  2.76e-06        0    0.169      97.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     35.2    -14.5     25.9  2.76e-06        0        0      97.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     35.3    -14.6     25.7  2.76e-06        0    0.169      97.3   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     36.9    -15.9     23.8  2.76e-06        0     2.82       100   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      349     -326     -500  2.76e-06        0      684       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 60
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 49
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 87
Photon Angle == 0.8323535543859903
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       59     11.4      100  2.76e-06        0        0         0   physWorld initStep
    1     11.8     11.4     43.8  2.76e-06        0     73.4      73.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6385814880296543
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     10.5     11.3       42  2.76e-06        0     2.23      75.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -7.01     13.5       28  2.76e-06        0     22.5      98.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -32.4     16.6     7.68  2.76e-06        0     32.7       131 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -32.4     16.6     7.68  2.76e-06        0        0       131 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -6.26    -9.56       28  2.76e-06        0     42.2       173 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7     7.13    -22.9     38.4  2.76e-06        0     21.6       195   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     8.14    -24.2     39.8  2.76e-06        0     2.18       197   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      378     -463      500  2.76e-06        0      735       932  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 61
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 50
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 89
Photon Angle == 0.6385814880296543
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      109     17.3      100  2.76e-06        0        0         0   physWorld initStep
    1     36.3     17.3     13.1  2.76e-06        0      113       113   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.745033168546402
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.1       17     11.2  2.76e-06        0     2.87       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       34       17     11.1  2.76e-06        0    0.174       116 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4       34       17     11.1  2.76e-06        0        0       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     34.1     17.1     10.9  2.76e-06        0    0.174       117   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     35.2     18.3     9.41  2.76e-06        0     2.28       119   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      386      436     -500  2.76e-06        0      746       865  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 62
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 51
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 90
Photon Angle == 0.745033168546402
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      109     21.3      100  2.76e-06        0        0         0   physWorld initStep
    1     34.1     21.3       11  2.76e-06        0      116       116   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7494002711334469
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     29.3     20.6     6.64  2.76e-06        0     6.53       123   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     29.3     20.6     6.64  2.76e-06        0        0       123   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     24.1       21     -1.7  2.76e-06        0     9.83       133   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     24.1       21     -1.7  2.76e-06        0  1.6e-14       133   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     16.3     19.3    -8.29  2.76e-06        0     10.3       143   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     16.3     19.3    -8.29  2.76e-06        0        0       143   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8       15     19.4      -10  2.76e-06 2.76e-06     2.18       145    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 63
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 26
No. of Photons Reflected == 54
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 93
Photon Angle == 0.7494002711334469
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     90.7      -37      100  2.76e-06        0        0         0   physWorld initStep
    1     15.7      -37     10.6  2.76e-06        0      117       117   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8323535543859903
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     3.61      -32    -1.33  2.76e-06        0     17.7       134   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     3.61      -32    -1.33  2.76e-06        0        0       134   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4    -6.44    -25.7    -9.39  2.76e-06        0     14.3       149   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5    -6.44    -25.7    -9.39  2.76e-06        0        0       149   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -7.37    -24.9      -10  2.76e-06 2.76e-06     1.43       150    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 64
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 26
No. of Photons Reflected == 56
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 95
Photon Angle == 0.8323535543859903
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      102    -7.25      100  2.76e-06        0        0         0   physWorld initStep
    1     39.5    -7.25       26  2.76e-06        0     96.7      96.7   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7394672673882599
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.5    -7.16     24.1  2.76e-06        0     2.73      99.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.4    -7.16       24  2.76e-06        0    0.158      99.5 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     37.4    -7.16       24  2.76e-06        0        0      99.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     37.5     -7.2     23.9  2.76e-06        0    0.158      99.7   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     39.4    -7.86       22  2.76e-06        0     2.73       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      446     -170     -500  2.76e-06        0      681       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 65
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 57
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 96
Photon Angle == 0.7394672673882599
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     67.3     21.5      100  2.76e-06        0        0         0   physWorld initStep
    1     16.2     21.5       39  2.76e-06        0     79.6      79.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6557280346185639
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     14.8     21.4     37.3  2.76e-06        0     2.26      81.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     14.8     21.4     37.3  2.76e-06        0        0      81.8   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     14.6       23     38.9  2.76e-06        0     2.26      84.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -87.8      499      500  2.76e-06        0      671       755  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 66
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 58
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 97
Photon Angle == 0.6557280346185639
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     76.8    -28.2      100  2.76e-06        0        0         0   physWorld initStep
    1     20.7    -28.2     33.2  2.76e-06        0     87.2      87.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6755962782013576
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     19.3      -28     31.4  2.76e-06        0     2.32      89.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 67
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 58
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 98
Photon Angle == 0.6755962782013576
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       84     35.7      100  2.76e-06        0        0         0   physWorld initStep
    1     18.4     35.7     21.8  2.76e-06        0      102       102   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6981317007977315
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     18.4     35.7     21.8  2.76e-06        0        0       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -235      393     -500  2.76e-06        0      681       783  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 68
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 59
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 99
Photon Angle == 0.6981317007977315
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     94.2     19.5      100  2.76e-06        0        0         0   physWorld initStep
    1     34.4     19.5     28.7  2.76e-06        0       93        93   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7083427965318063
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.8     19.4       28  2.76e-06        0    0.957        94   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     32.9     19.4       27  2.76e-06        0     1.37      95.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     32.7     19.4     26.7  2.76e-06        0    0.262      95.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     32.7     19.4     26.7  2.76e-06        0        0      95.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     32.8     19.5     26.5  2.76e-06        0    0.262      95.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7       34     21.4     23.9  2.76e-06        0     3.41      99.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8      136      309     -500  2.76e-06        0      606       706  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 69
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 60
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 100
Photon Angle == 0.7083427965318063
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     62.8     26.9      100  2.76e-06        0        0         0   physWorld initStep
    1     10.6     26.9     37.8  2.76e-06        0     81.2      81.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6434802293969284
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     9.13     26.7     35.9  2.76e-06        0     2.44      83.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -1.47     30.8       28  2.76e-06        0     13.8      97.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -13.8     35.4     18.8  2.76e-06        0     16.1       113   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -13.9     35.5     18.8  2.76e-06        0    0.128       114   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -15.5       37     17.9  2.76e-06        0     2.37       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500      427     -274  2.76e-06        0      687       803  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 70
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 60
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 101
Photon Angle == 0.6434802293969284
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      108    -21.1      100  2.76e-06        0        0         0   physWorld initStep
    1     34.2    -21.1     12.2  2.76e-06        0      115       115   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7491612570761799
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       32    -20.8     10.2  2.76e-06        0     2.97       118   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     31.9    -20.8     10.1  2.76e-06        0    0.187       118 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     31.9    -20.8     10.1  2.76e-06        0        0       118   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     31.9    -20.9     9.96  2.76e-06        0    0.128       118   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     32.5    -21.9      8.6  2.76e-06        0      1.8       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      202     -413     -500  2.76e-06        0      664       783  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 71
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 61
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 102
Photon Angle == 0.7491612570761799
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     63.4     11.9      100  2.76e-06        0        0         0   physWorld initStep
    1     15.3     11.9     42.7  2.76e-06        0     74.8      74.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.648580203110988
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       14     11.8       41  2.76e-06        0     2.17      76.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 72
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 61
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 103
Photon Angle == 0.648580203110988
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     87.6     4.56      100  2.76e-06        0        0         0   physWorld initStep
    1     32.9     4.56     34.7  2.76e-06        0     85.2      85.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6950349057065224
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.6     4.54     33.2  2.76e-06        0     2.01      87.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     27.2     4.75       28  2.76e-06        0     6.82        94 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -5.34     6.31      -10  2.76e-06 2.76e-06       50       144    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 73
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 28
No. of Photons Reflected == 61
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 104
Photon Angle == 0.6950349057065224
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       53    -9.99      100  2.76e-06        0        0         0   physWorld initStep
    1     6.85    -9.99       45  2.76e-06        0     71.8      71.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6234814205758825
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2      5.5    -9.93     43.1  2.76e-06        0     2.31      74.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 74
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 61
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 105
Photon Angle == 0.6234814205758825
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     95.9     15.2      100  2.76e-06        0        0         0   physWorld initStep
    1     36.3     15.2     28.9  2.76e-06        0     92.8      92.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7107348287019661
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.5     15.2       28  2.76e-06        0     1.22        94   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3       35     15.1     27.5  2.76e-06        0    0.716      94.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     34.9     15.2     27.3  2.76e-06        0    0.229      94.9 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     34.9     15.2     27.3  2.76e-06        0        0      94.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6       35     15.2     27.1  2.76e-06        0    0.229      95.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     36.5     16.7     24.6  2.76e-06        0     3.26      98.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    8     36.5     16.7     24.6  2.76e-06        0        0      98.4   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     34.4     16.5     22.1  2.76e-06        0     3.26       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     34.3     16.5     21.9  2.76e-06        0    0.229       102 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11     34.3     16.5     21.9  2.76e-06        0        0       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     34.3     16.6     21.7  2.76e-06        0    0.229       102   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13     35.8     18.1     19.3  2.76e-06        0     3.26       105   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   14      208      270     -500  2.76e-06        0      602       707  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 75
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 64
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 108
Photon Angle == 0.7107348287019661
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     81.9    -26.8      100  2.76e-06        0        0         0   physWorld initStep
    1     24.7    -26.8     31.9  2.76e-06        0     88.9      88.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.685995981747479
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.3    -26.6     30.1  2.76e-06        0     2.26      91.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     21.3    -27.3       28  2.76e-06        0     2.99      94.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    0.187    -34.7     5.28  2.76e-06        0     31.9       126 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    0.187    -34.7     5.28  2.76e-06        0        0       126 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -33.7     2.97     3.97  2.76e-06        0     50.7       177 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -33.7     2.97     3.97  2.76e-06        0        0       177 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8      -22     26.2       28  2.76e-06        0     35.4       212 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9    -20.9     28.4     30.3  2.76e-06        0     3.37       216   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    -20.7     29.9       32  2.76e-06        0     2.23       218   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     51.3      453      500  2.76e-06        0      635       853  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 76
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 66
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 111
Photon Angle == 0.685995981747479
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     61.3     8.15      100  2.76e-06        0        0         0   physWorld initStep
    1     14.1     8.15     43.8  2.76e-06        0     73.3      73.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6442336068536196
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     12.8     8.11     42.1  2.76e-06        0     2.17      75.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 77
Energy Deposited == 0
No. of Photons Absorbed == 30
No. of Photons Reflected == 66
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 112
Photon Angle == 0.6442336068536196
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       85     37.7      100  2.76e-06        0        0         0   physWorld initStep
    1     13.7     37.7     15.1  2.76e-06        0      111       111   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8323535543859903
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       11     36.5     12.4  2.76e-06        0        4       115   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     10.3     36.6     11.5  2.76e-06        0     1.12       116 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     10.3     36.6     11.5  2.76e-06        0        0       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     9.67     36.9     10.7  2.76e-06        0     1.12       117   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    6     9.67     36.9     10.7  2.76e-06        0        0       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     9.01       37     9.87  2.76e-06        0     1.04       118   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     7.58     37.7     7.59  2.76e-06        0     2.79       121   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     -403     89.3     -500  2.76e-06        0      655       776  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 78
Energy Deposited == 0
No. of Photons Absorbed == 30
No. of Photons Reflected == 68
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 114
Photon Angle == 0.8323535543859903
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     60.8      2.5      100  2.76e-06        0        0         0   physWorld initStep
    1     14.1      2.5     44.4  2.76e-06        0     72.5      72.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6434875560324276
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     12.8     2.48     42.7  2.76e-06        0     2.16      74.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 79
Energy Deposited == 0
No. of Photons Absorbed == 31
No. of Photons Reflected == 68
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 115
Photon Angle == 0.6434875560324276
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      114    -9.78      100  2.76e-06        0        0         0   physWorld initStep
    1     38.9    -9.78     10.5  2.76e-06        0      117       117   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7403494357297191
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.1     -9.5     6.12  2.76e-06        0     6.52       123   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     34.1     -9.5     6.12  2.76e-06        0        0       123   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     30.8    -9.87    -1.07  2.76e-06        0     7.91       131   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     30.8    -9.87    -1.07  2.76e-06        0        0       131   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     24.9     -9.4    -6.36  2.76e-06        0     7.94       139   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     24.9     -9.4    -6.36  2.76e-06        0        0       139   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     23.2    -9.64      -10  2.76e-06 2.76e-06     4.04       143    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 80
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 31
No. of Photons Reflected == 71
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 118
Photon Angle == 0.7403494357297191
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     77.2    -4.15      100  2.76e-06        0        0         0   physWorld initStep
    1     26.2    -4.15     39.3  2.76e-06        0     79.3      79.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6763845117418206
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       25    -4.13     37.7  2.76e-06        0     2.03      81.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     15.7    -4.51       28  2.76e-06        0     13.4      94.7 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -20.6    -6.03      -10  2.76e-06 2.76e-06     52.6       147    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 81
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 31
No. of Photons Reflected == 71
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 119
Photon Angle == 0.6763845117418206
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     71.8    -18.1      100  2.76e-06        0        0         0   physWorld initStep
    1     20.5    -18.1     38.8  2.76e-06        0     79.9      79.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6656811380459415
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     19.2      -18     37.1  2.76e-06        0     2.16        82 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 82
Energy Deposited == 0
No. of Photons Absorbed == 32
No. of Photons Reflected == 71
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 120
Photon Angle == 0.6656811380459415
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     68.6     9.94      100  2.76e-06        0        0         0   physWorld initStep
    1     19.6     9.94     41.6  2.76e-06        0     76.2      76.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6596666477902766
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     18.3     9.89       40  2.76e-06        0     2.11      78.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     5.51     11.2       28  2.76e-06        0     17.6      95.9 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -26.2     14.4    -1.63  2.76e-06        0     43.5       139 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -26.2     14.4    -1.63  2.76e-06        0        0       139 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     18.2    -33.4     27.1  2.76e-06        0     71.3       211   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     18.3    -33.5     27.1  2.76e-06        0    0.106       211   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     19.5    -35.1     27.6  2.76e-06        0      2.1       213   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      392     -500      215  2.76e-06        0      624       837  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 83
Energy Deposited == 0
No. of Photons Absorbed == 32
No. of Photons Reflected == 72
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 122
Photon Angle == 0.6596666477902766
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      110     20.6      100  2.76e-06        0        0         0   physWorld initStep
    1     34.5     20.6     10.3  2.76e-06        0      117       117   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7484933580265829
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       28     19.7     4.35  2.76e-06        0     8.91       126   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3       28     19.7     4.35  2.76e-06        0        0       126   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     22.7     20.1       -4  2.76e-06        0     9.86       136   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     22.7     20.1       -4  2.76e-06        0 8.37e-15       136   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     15.6     18.6      -10  2.76e-06 2.76e-06     9.45       145    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 84
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 32
No. of Photons Reflected == 74
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 124
Photon Angle == 0.7484933580265829
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     73.2    -34.9      100  2.76e-06        0        0         0   physWorld initStep
    1     14.9    -34.9     30.4  2.76e-06        0     90.8      90.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6674438271684
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     13.3    -34.6     28.4  2.76e-06        0     2.56      93.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 85
Energy Deposited == 0
No. of Photons Absorbed == 33
No. of Photons Reflected == 74
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 125
Photon Angle == 0.6674438271684
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     61.7     12.7      100  2.76e-06        0        0         0   physWorld initStep
    1     13.9     12.7     42.9  2.76e-06        0     74.5      74.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6447212600180214
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     12.5     12.7     41.2  2.76e-06        0      2.2      76.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 86
Energy Deposited == 0
No. of Photons Absorbed == 34
No. of Photons Reflected == 74
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 126
Photon Angle == 0.6447212600180214
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     77.3    -4.97      100  2.76e-06        0        0         0   physWorld initStep
    1     26.2    -4.97     39.2  2.76e-06        0     79.4      79.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6764933460581983
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       25    -4.95     37.6  2.76e-06        0     2.03      81.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 87
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 74
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 127
Photon Angle == 0.6764933460581983
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     69.8     24.6      100  2.76e-06        0        0         0   physWorld initStep
    1       17     24.6     37.1  2.76e-06        0     82.1      82.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6607350308288842
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     15.6     24.4     35.3  2.76e-06        0     2.29      84.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 88
Energy Deposited == 0
No. of Photons Absorbed == 36
No. of Photons Reflected == 74
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 128
Photon Angle == 0.6607350308288842
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     94.2    -34.2      100  2.76e-06        0        0         0   physWorld initStep
    1     21.1    -34.2     12.9  2.76e-06        0      114       114   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8323535543859903
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     18.5    -33.3     10.5  2.76e-06        0     3.63       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     18.3    -33.3     10.2  2.76e-06        0    0.351       118 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     18.3    -33.3     10.2  2.76e-06        0        0       118   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     18.2    -33.5     9.97  2.76e-06        0    0.279       118   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     17.7    -34.7     8.33  2.76e-06        0     2.14       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -223     -383     -500  2.76e-06        0      662       782  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 89
Energy Deposited == 0
No. of Photons Absorbed == 36
No. of Photons Reflected == 75
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 129
Photon Angle == 0.8323535543859903
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     74.2    -24.6      100  2.76e-06        0        0         0   physWorld initStep
    1     20.3    -24.6     35.7  2.76e-06        0     83.9      83.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6701821098447613
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     18.9    -24.4       34  2.76e-06        0     2.25      86.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 90
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 75
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 130
Photon Angle == 0.6701821098447613
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     99.3     14.8      100  2.76e-06        0        0         0   physWorld initStep
    1     37.3     14.8     26.2  2.76e-06        0     96.4      96.4   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8323535543859903
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.3     14.6     24.3  2.76e-06        0     2.82      99.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     35.1     14.6     24.1  2.76e-06        0    0.169      99.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     35.1     14.6     24.1  2.76e-06        0        0      99.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     35.2     14.7       24  2.76e-06        0    0.169      99.5   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     36.8       16     22.1  2.76e-06        0     2.82       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      346      326     -500  2.76e-06        0      682       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 91
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 76
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 131
Photon Angle == 0.8323535543859903
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     47.3     8.57      100  2.76e-06        0        0         0   physWorld initStep
    1      1.7     8.57     45.7  2.76e-06        0     70.9      70.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6067130099614682
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    0.318     8.51     43.7  2.76e-06        0     2.42      73.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 92
Energy Deposited == 0
No. of Photons Absorbed == 38
No. of Photons Reflected == 76
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 132
Photon Angle == 0.6067130099614682
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      117    -9.55      100  2.76e-06        0        0         0   physWorld initStep
    1     24.3    -9.55    -10.8  2.76e-06 2.76e-06      145       145    absorber Transportation
THE INCIDENT ANGLE IS G 83:  0.8726646259971647
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 93
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 38
No. of Photons Reflected == 76
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 132
Photon Angle == 0.8726646259971647
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     88.7     20.7      100  2.76e-06        0        0         0   physWorld initStep
    1     30.9     20.7     31.1  2.76e-06        0     89.9      89.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6982936490642637
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     29.5     20.6     29.5  2.76e-06        0     2.14        92 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 94
Energy Deposited == 0
No. of Photons Absorbed == 39
No. of Photons Reflected == 76
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 133
Photon Angle == 0.6982936490642637
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       72      -14      100  2.76e-06        0        0         0   physWorld initStep
    1     21.5      -14     39.8  2.76e-06        0     78.6      78.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6663192374977016
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     20.2      -14     38.1  2.76e-06        0     2.12      80.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 95
Energy Deposited == 0
No. of Photons Absorbed == 40
No. of Photons Reflected == 76
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 134
Photon Angle == 0.6663192374977016
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     77.4    -5.36      100  2.76e-06        0        0         0   physWorld initStep
    1     26.3    -5.36     39.1  2.76e-06        0     79.5      79.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6767518864088058
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       25    -5.34     37.5  2.76e-06        0     2.03      81.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3       25    -5.34     37.5  2.76e-06        0        0      81.5   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     25.7    -5.73     39.4  2.76e-06        0     2.03      83.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      184     -108      500  2.76e-06        0      498       581  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 96
Energy Deposited == 0
No. of Photons Absorbed == 40
No. of Photons Reflected == 77
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 135
Photon Angle == 0.6767518864088058
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     75.2    -26.8      100  2.76e-06        0        0         0   physWorld initStep
    1     20.1    -26.8     34.4  2.76e-06        0     85.6      85.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6721110613645811
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     18.7    -26.7     32.6  2.76e-06        0     2.29      87.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 97
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 77
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 136
Photon Angle == 0.6721110613645811
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      112    -6.13      100  2.76e-06        0        0         0   physWorld initStep
    1     39.7    -6.13     13.2  2.76e-06        0      113       113   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7391712217100097
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.7    -6.06     11.4  2.76e-06        0     2.72       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.6    -6.06     11.3  2.76e-06        0    0.158       116 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     37.6    -6.06     11.3  2.76e-06        0        0       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     37.7    -6.09     11.2  2.76e-06        0    0.158       116   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     39.3    -6.58      9.6  2.76e-06        0     2.34       119   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      500     -150     -445  2.76e-06        0      663       781  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 98
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 78
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 137
Photon Angle == 0.7391712217100097
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.6981317007977318
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     76.9     17.4      100  2.76e-06        0        0         0   physWorld initStep
    1     24.2     17.4     37.2  2.76e-06        0     81.9      81.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.6756787769060169
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     22.9     17.3     35.6  2.76e-06        0     2.12      84.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 99
Energy Deposited == 0
No. of Photons Absorbed == 42
No. of Photons Reflected == 78
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 138
Photon Angle == 0.6756787769060169
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
 Run terminated.
Run Summary
  Number of events processed : 100
  User=0.23s Real=0.25s Sys=0.01s
FileName = run.mac
G4 kernel has come to Quit state.
================== Deleting memory pools ===================
Number of memory pools allocated: 9; of which, static: 0
Dynamic pools deleted: 9 / Total memory freed: 0.033 Mb
============================================================
RunManagerKernel is deleted. Good bye :)
Graphics systems deleted.
Visualization Manager deleting...
