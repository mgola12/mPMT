
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
THE VALUE OF ANGLE IN RADIANS == 0.174533
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
    0     1.25     4.06      100  2.76e-06        0        0         0   physWorld initStep
    1    -8.34     4.06     45.6  2.76e-06        0     55.3      55.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.133241188048649
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -8.62     4.04     43.5  2.76e-06        0      2.1      57.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 0
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 0
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 1
Photon Angle == 0.133241188048649
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
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
    0     46.5    -9.49      100  2.76e-06        0        0         0   physWorld initStep
    1     34.6    -9.49     32.4  2.76e-06        0     68.6      68.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2486004941973246
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       34    -9.43     30.2  2.76e-06        0     2.29      70.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3       34    -9.43     30.2  2.76e-06        0        0      70.9   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     36.1    -10.1     30.8  2.76e-06        0     2.29      73.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      500     -163      134  2.76e-06        0      499       572  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 1
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 1
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 2
Photon Angle == 0.2486004941973246
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
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
    0     7.81     16.6      100  2.76e-06        0        0         0   physWorld initStep
    1    -2.12     16.6     43.7  2.76e-06        0     57.2      57.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1535143715638783
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -2.44     16.6     41.6  2.76e-06        0     2.12      59.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -6.01     18.3       28  2.76e-06        0     14.2      73.5 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -14.8     22.8     -5.5  2.76e-06        0     34.9       108 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -14.8     22.8     -5.5  2.76e-06        0        0       108 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     4.77    -19.6      -10  2.76e-06 2.76e-06     46.9       155    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 2
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 1
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 4
Photon Angle == 0.1535143715638783
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
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
    0     21.6     23.6      100  2.76e-06        0        0         0   physWorld initStep
    1     10.9     23.6     39.6  2.76e-06        0     61.3      61.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1908295645231584
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     10.5     23.5     37.5  2.76e-06        0     2.18      63.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 3
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 5
Photon Angle == 0.1908295645231584
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
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
    0     22.7    -24.7      100  2.76e-06        0        0         0   physWorld initStep
    1     11.9    -24.7     38.8  2.76e-06        0     62.2      62.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1947571232820016
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     11.5    -24.6     36.6  2.76e-06        0     2.21      64.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 4
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 6
Photon Angle == 0.1947571232820016
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
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
    0   -0.411    -19.9      100  2.76e-06        0        0         0   physWorld initStep
    1    -10.8    -19.9     41.3  2.76e-06        0     59.6      59.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1353094728802793
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2      -11    -19.8     39.1  2.76e-06        0     2.26      61.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 5
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 7
Photon Angle == 0.1353094728802793
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
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
    0     27.9     14.2      100  2.76e-06        0        0         0   physWorld initStep
    1     17.6     14.2     41.4  2.76e-06        0     59.6      59.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1989709273372138
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     17.2     14.1     39.3  2.76e-06        0     2.09      61.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 6
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 8
Photon Angle == 0.1989709273372138
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
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
    0     50.4    -13.6      100  2.76e-06        0        0         0   physWorld initStep
    1     37.7    -13.6     28.1  2.76e-06        0       73        73   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2665507441260524
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.7    -13.6       28  2.76e-06        0   0.0923      73.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     35.7    -13.3     20.9  2.76e-06        0     7.36      80.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     35.7    -13.3     20.9  2.76e-06        0 1.16e-14      80.5   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     37.5    -14.4     13.4  2.76e-06        0     7.75      88.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     37.5    -14.4     13.4  2.76e-06        0        0      88.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7       36    -14.2      7.9  2.76e-06        0     5.72        94   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8       36    -14.2      7.9  2.76e-06        0        0        94   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     32.3      -13     5.18  2.76e-06        0     4.77      98.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   10     32.3      -13     5.18  2.76e-06        0        0      98.7   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11       31    -12.8    0.586  2.76e-06        0     4.77       103   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   12       31    -12.8    0.586  2.76e-06        0 8.07e-15       103   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   13     27.3    -11.6    -2.13  2.76e-06        0     4.77       108   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   14     27.3    -11.6    -2.13  2.76e-06        0        0       108   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   15       26    -11.4    -6.72  2.76e-06        0     4.77       113   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   16       26    -11.4    -6.72  2.76e-06        0 4.76e-15       113   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   17     22.3    -10.1    -9.43  2.76e-06        0     4.77       118   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   18     22.3    -10.1    -9.43  2.76e-06        0        0       118   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   19     22.1    -10.1      -10  2.76e-06 2.76e-06    0.593       118    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 7
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 5
No. of Photons Reflected == 10
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 16
Photon Angle == 0.2665507441260524
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
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
    0     2.48      -24      100  2.76e-06        0        0         0   physWorld initStep
    1    -8.11      -24       40  2.76e-06        0       61        61   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1462534352766136
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -8.41    -23.8     37.7  2.76e-06        0     2.29      63.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3    -8.41    -23.8     37.7  2.76e-06        0        0      63.3   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4    -9.36    -25.5     38.9  2.76e-06        0     2.29      65.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -283     -500      316  2.76e-06        0      614       679  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 8
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 11
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 17
Photon Angle == 0.1462534352766136
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
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
    0     45.4      3.8      100  2.76e-06        0        0         0   physWorld initStep
    1     33.8      3.8     34.1  2.76e-06        0     66.9      66.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2426070770622264
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     33.2     3.78     31.9  2.76e-06        0     2.24      69.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 9
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 11
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 18
Photon Angle == 0.2426070770622264
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -7.77     16.3      100  2.76e-06        0        0         0   physWorld initStep
    1    -18.3     16.3     40.4  2.76e-06        0     60.5      60.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1121657571856995
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -18.5     16.2     38.1  2.76e-06        0     2.34      62.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 10
Energy Deposited == 0
No. of Photons Absorbed == 7
No. of Photons Reflected == 11
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 19
Photon Angle == 0.1121657571856995
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     3.31      -10      100  2.76e-06        0        0         0   physWorld initStep
    1    -6.38      -10     45.1  2.76e-06        0     55.8      55.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1397456539446464
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -6.67    -9.97       43  2.76e-06        0      2.1      57.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 11
Energy Deposited == 0
No. of Photons Absorbed == 8
No. of Photons Reflected == 11
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 20
Photon Angle == 0.1397456539446464
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     29.7     35.1      100  2.76e-06        0        0         0   physWorld initStep
    1     17.2     35.1     29.2  2.76e-06        0     71.9      71.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2321292395462993
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       17     34.9       28  2.76e-06        0     1.25      73.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     16.2     34.5     24.4  2.76e-06        0     3.75      76.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     16.2     34.5     24.4  2.76e-06        0       -0      76.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     15.7       37     13.8  2.76e-06        0     10.8      87.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     15.7       37     13.8  2.76e-06        0        0      87.7   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     14.6     36.3     8.57  2.76e-06        0     5.41      93.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8     14.6     36.3     8.57  2.76e-06        0        0      93.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     12.8     33.3     6.54  2.76e-06        0     4.02      97.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   10     12.8     33.3     6.54  2.76e-06        0        0      97.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11       12     32.9     2.64  2.76e-06        0     4.02       101   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   12       12     32.9     2.64  2.76e-06        0        0       101   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   13     10.2     29.9    0.621  2.76e-06        0     4.02       105   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   14     10.2     29.9    0.621  2.76e-06        0        0       105   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   15     9.34     29.4    -3.27  2.76e-06        0     4.02       109   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   16     9.34     29.4    -3.27  2.76e-06        0        0       109   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   17     7.64     26.3    -5.27  2.76e-06        0     4.02       113   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   18     7.64     26.3    -5.27  2.76e-06        0        0       113   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   19     6.68     25.9    -9.14  2.76e-06        0     4.02       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   20     6.68     25.9    -9.14  2.76e-06        0        0       117   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   21     5.98     24.5      -10  2.76e-06 2.76e-06     1.74       119    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 12
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 8
No. of Photons Reflected == 20
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 29
Photon Angle == 0.2321292395462993
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     15.5     36.8      100  2.76e-06        0        0         0   physWorld initStep
    1     3.37     36.8     31.4  2.76e-06        0     69.7      69.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.198638485939826
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     2.95     36.5     28.9  2.76e-06        0     2.56      72.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 13
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 20
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 30
Photon Angle == 0.198638485939826
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -2.28     10.6      100  2.76e-06        0        0         0   physWorld initStep
    1    -12.2     10.6     43.9  2.76e-06        0       57        57   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.125188690870401
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -12.4     10.5     41.7  2.76e-06        0     2.18      59.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 14
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 20
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 31
Photon Angle == 0.125188690870401
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     29.5     7.21      100  2.76e-06        0        0         0   physWorld initStep
    1     19.3     7.21     42.2  2.76e-06        0     58.7      58.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2000641584702465
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     18.9     7.17     40.2  2.76e-06        0     2.05      60.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     17.7      7.8       28  2.76e-06        0     12.3        73 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     13.9     9.75      -10  2.76e-06 2.76e-06     38.2       111    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 15
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 10
No. of Photons Reflected == 20
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 32
Photon Angle == 0.2000641584702465
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      -18     4.97      100  2.76e-06        0        0         0   physWorld initStep
    1      -29     4.97     37.5  2.76e-06        0     63.5      63.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.06703284389718123
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -29.2     4.94     34.9  2.76e-06        0     2.55      66.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 16
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 20
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 33
Photon Angle == 0.06703284389718123
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     30.5     18.1      100  2.76e-06        0        0         0   physWorld initStep
    1     19.7     18.1     39.1  2.76e-06        0     61.8      61.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2078584941618868
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     19.3       18       37  2.76e-06        0     2.15        64 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     19.3       18       37  2.76e-06        0        0        64   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     20.4     19.3     38.3  2.76e-06        0     2.15      66.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      405      500      464  2.76e-06        0      749       815  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 17
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 21
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 34
Photon Angle == 0.2078584941618868
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     20.7    -6.43      100  2.76e-06        0        0         0   physWorld initStep
    1     10.9    -6.43     44.9  2.76e-06        0       56        56   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1793482737751906
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     10.6     -6.4     42.9  2.76e-06        0     2.01        58 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 18
Energy Deposited == 0
No. of Photons Absorbed == 12
No. of Photons Reflected == 21
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 35
Photon Angle == 0.1793482737751906
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -10.3    -5.64      100  2.76e-06        0        0         0   physWorld initStep
    1    -20.5    -5.64       42  2.76e-06        0     58.9      58.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.09912924852761273
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -20.7    -5.61     39.7  2.76e-06        0      2.3      61.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 19
Energy Deposited == 0
No. of Photons Absorbed == 13
No. of Photons Reflected == 21
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 36
Photon Angle == 0.09912924852761273
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     15.2     23.8      100  2.76e-06        0        0         0   physWorld initStep
    1     4.71     23.8     40.5  2.76e-06        0     60.4      60.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1760917721067066
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     4.35     23.7     38.4  2.76e-06        0     2.19      62.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 20
Energy Deposited == 0
No. of Photons Absorbed == 14
No. of Photons Reflected == 21
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 37
Photon Angle == 0.1760917721067066
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     31.9     23.8      100  2.76e-06        0        0         0   physWorld initStep
    1     20.6     23.8       36  2.76e-06        0       65        65   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2171246420820041
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     20.1     23.7     33.8  2.76e-06        0     2.25      67.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 21
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 21
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 38
Photon Angle == 0.2171246420820041
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     52.2    -9.38      100  2.76e-06        0        0         0   physWorld initStep
    1       39    -9.38     25.4  2.76e-06        0     75.7      75.7   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.1745329251994323
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2       39    -9.38     25.4  2.76e-06        0        0      75.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3      122    -51.5     -500  2.76e-06        0      534       609  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 22
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 22
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 39
Photon Angle == 0.1745329251994323
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -12.4    -11.7      100  2.76e-06        0        0         0   physWorld initStep
    1    -23.1    -11.7     39.7  2.76e-06        0     61.3      61.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.09382271170303635
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -23.3    -11.6     37.3  2.76e-06        0     2.41      63.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 23
Energy Deposited == 0
No. of Photons Absorbed == 16
No. of Photons Reflected == 22
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 40
Photon Angle == 0.09382271170303635
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     12.8    -21.1      100  2.76e-06        0        0         0   physWorld initStep
    1     2.58    -21.1     41.9  2.76e-06        0       59        59   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1682325044536759
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     2.24      -21     39.8  2.76e-06        0     2.15      61.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 24
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 22
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 41
Photon Angle == 0.1682325044536759
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      -10     10.1      100  2.76e-06        0        0         0   physWorld initStep
    1    -20.4     10.1     41.3  2.76e-06        0     59.6      59.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1014325219060672
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -20.6       10       39  2.76e-06        0     2.32      61.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -25.8     11.2       28  2.76e-06        0     12.2      74.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -34.9     13.2     8.95  2.76e-06        0     21.2      95.4 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -34.9     13.2     8.95  2.76e-06        0        0      95.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     33.6    -17.8     16.8  2.76e-06        0     75.6       171   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    7     33.6    -17.8     16.8  2.76e-06        0        0       171 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -31.2     21.8     24.7  2.76e-06        0     76.4       247   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -31.2     21.9     24.7  2.76e-06        0      0.1       247   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    -32.9       23     24.9  2.76e-06        0     2.01       249   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     -500      319     67.8  2.76e-06        0      555       804  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 25
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 24
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 44
Photon Angle == 0.1014325219060672
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     8.91    -13.2      100  2.76e-06        0        0         0   physWorld initStep
    1   -0.841    -13.2     44.7  2.76e-06        0     56.1      56.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1544772788040603
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -1.15    -13.2     42.7  2.76e-06        0     2.08      58.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 26
Energy Deposited == 0
No. of Photons Absorbed == 18
No. of Photons Reflected == 24
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 45
Photon Angle == 0.1544772788040603
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     38.8     2.54      100  2.76e-06        0        0         0   physWorld initStep
    1       28     2.54     38.4  2.76e-06        0     62.6      62.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2228536770574041
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.5     2.52     36.3  2.76e-06        0     2.12      64.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     27.5     2.52     36.3  2.76e-06        0        0      64.7   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     29.2     2.71     37.6  2.76e-06        0     2.12      66.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      500     55.1      362  2.76e-06        0      574       641  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 27
Energy Deposited == 0
No. of Photons Absorbed == 18
No. of Photons Reflected == 25
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 46
Photon Angle == 0.2228536770574041
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    0.191    -4.98      100  2.76e-06        0        0         0   physWorld initStep
    1    -9.45    -4.98     45.3  2.76e-06        0     55.5      55.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1305605763573854
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -9.72    -4.96     43.2  2.76e-06        0     2.11      57.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 28
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 25
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 47
Photon Angle == 0.1305605763573854
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -3.71     27.8      100  2.76e-06        0        0         0   physWorld initStep
    1      -15     27.8     35.9  2.76e-06        0     65.1      65.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1363430201229296
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -15.3     27.6     33.4  2.76e-06        0      2.5      67.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3      -18     29.8       28  2.76e-06        0     6.46        74 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -20.7     31.9     22.6  2.76e-06        0     6.36      80.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -20.7       32     22.6  2.76e-06        0     0.13      80.5   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -22.1     33.6     21.2  2.76e-06        0     2.42      82.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -445      500     -488  2.76e-06        0      810       893  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 29
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 25
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 48
Photon Angle == 0.1363430201229296
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0   -0.479    -24.9      100  2.76e-06        0        0         0   physWorld initStep
    1    -11.3    -24.9     38.8  2.76e-06        0     62.2      62.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1400677751254067
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -11.6    -24.8     36.4  2.76e-06        0     2.36      64.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 30
Energy Deposited == 0
No. of Photons Absorbed == 20
No. of Photons Reflected == 25
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 49
Photon Angle == 0.1400677751254067
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     1.97     1.74      100  2.76e-06        0        0         0   physWorld initStep
    1    -7.58     1.74     45.8  2.76e-06        0       55        55   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1349079225046514
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -7.86     1.73     43.8  2.76e-06        0     2.08      57.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 31
Energy Deposited == 0
No. of Photons Absorbed == 21
No. of Photons Reflected == 25
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 50
Photon Angle == 0.1349079225046514
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     36.1    -23.5      100  2.76e-06        0        0         0   physWorld initStep
    1     24.5    -23.5     34.1  2.76e-06        0     66.9      66.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2287690757838812
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       24    -23.4     31.9  2.76e-06        0      2.3      69.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 32
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 25
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 51
Photon Angle == 0.2287690757838812
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     48.1    -7.04      100  2.76e-06        0        0         0   physWorld initStep
    1       36    -7.04     31.6  2.76e-06        0     69.4      69.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2529852705019495
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.5       -7     29.4  2.76e-06        0     2.31      71.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     35.6    -7.09       28  2.76e-06        0     1.38      73.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     37.2    -8.15     11.9  2.76e-06        0     16.3      89.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    5     37.2    -8.15     11.9  2.76e-06        0        0      89.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     36.9    -8.19     9.66  2.76e-06        0     2.21      91.6 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7     36.9    -8.19     9.66  2.76e-06        0        0      91.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -2.83    -1.36      -10  2.76e-06 2.76e-06     44.9       136    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 33
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 22
No. of Photons Reflected == 27
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 54
Photon Angle == 0.2529852705019495
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     38.5   -0.285      100  2.76e-06        0        0         0   physWorld initStep
    1     27.7   -0.285     38.6  2.76e-06        0     62.4      62.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.221925396780847
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.2   -0.283     36.5  2.76e-06        0     2.12      64.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     27.2   -0.283     36.5  2.76e-06        0        0      64.5   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     28.9   -0.304     37.8  2.76e-06        0     2.12      66.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      500    -6.25      373  2.76e-06        0      578       645  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 34
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 28
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 55
Photon Angle == 0.221925396780847
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     11.6    -24.8      100  2.76e-06        0        0         0   physWorld initStep
    1     1.02    -24.8     40.2  2.76e-06        0     60.7      60.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1686447843848295
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    0.675    -24.7       38  2.76e-06        0     2.22      62.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 35
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 28
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 56
Photon Angle == 0.1686447843848295
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     36.6     25.4      100  2.76e-06        0        0         0   physWorld initStep
    1     24.8     25.4     32.8  2.76e-06        0     68.3      68.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2330247603923437
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     24.2     25.3     30.5  2.76e-06        0     2.34      70.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 36
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 28
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 57
Photon Angle == 0.2330247603923437
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -16.8     9.22      100  2.76e-06        0        0         0   physWorld initStep
    1    -27.8     9.22     37.6  2.76e-06        0     63.4      63.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.07508472801411292
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -27.9     9.15     35.1  2.76e-06        0     2.53      65.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -33.2     10.2       28  2.76e-06        0     8.87      74.8 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -36.5     10.8     23.5  2.76e-06        0     5.58      80.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -36.6     10.9     23.5  2.76e-06        0    0.125      80.5   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -38.5     11.3     22.2  2.76e-06        0     2.35      82.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500      123     -330  2.76e-06        0      591       674  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 37
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 28
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 58
Photon Angle == 0.07508472801411292
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -10.8     19.9      100  2.76e-06        0        0         0   physWorld initStep
    1    -21.8     19.9     37.4  2.76e-06        0     63.6      63.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.106258009060896
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -22.1     19.8     34.9  2.76e-06        0     2.49        66 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3    -22.1     19.8     34.9  2.76e-06        0        0        66   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4      -24     21.1     35.7  2.76e-06        0     2.49      68.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -500      355      154  2.76e-06        0      593       662  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 38
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 29
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 59
Photon Angle == 0.106258009060896
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     27.1     36.5      100  2.76e-06        0        0         0   physWorld initStep
    1     14.6     36.5       29  2.76e-06        0     72.1      72.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2282925330999688
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     14.4     36.4       28  2.76e-06        0     1.03      73.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     13.3     35.8     22.8  2.76e-06        0     5.36      78.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     13.3     35.8     22.8  2.76e-06        0        0      78.5   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     12.4     38.2     11.7  2.76e-06        0     11.4      89.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     12.4     38.2     11.7  2.76e-06        0        0      89.8   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7       12     37.9      9.4  2.76e-06        0     2.38      92.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8       12     37.9      9.4  2.76e-06        0 5.65e-15      92.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     10.4     34.8     7.43  2.76e-06        0     3.96      96.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   10     10.4     34.8     7.43  2.76e-06        0        0      96.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11     9.65     34.3     3.58  2.76e-06        0     3.96       100   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   12     9.65     34.3     3.58  2.76e-06        0        0       100   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   13     8.14     31.2     1.62  2.76e-06        0     3.96       104   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   14     8.14     31.2     1.62  2.76e-06        0        0       104   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   15      7.3     30.7    -2.21  2.76e-06        0     3.96       108   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   16      7.3     30.7    -2.21  2.76e-06        0        0       108   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   17     5.84     27.6    -4.16  2.76e-06        0     3.96       112   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   18     5.84     27.6    -4.16  2.76e-06        0        0       112   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   19     4.94     27.1    -7.97  2.76e-06        0     3.95       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   20     4.94     27.1    -7.97  2.76e-06        0        0       116   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   21     3.55     23.9     -9.9  2.76e-06        0     3.96       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   22     3.55     23.9     -9.9  2.76e-06        0        0       120   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   23     3.52     23.9      -10  2.76e-06 2.76e-06     0.11       120    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 39
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 24
No. of Photons Reflected == 39
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 69
Photon Angle == 0.2282925330999688
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -5.04    -24.3      100  2.76e-06        0        0         0   physWorld initStep
    1      -16    -24.3     37.7  2.76e-06        0     63.3      63.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1277380004605941
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -16.3    -24.1     35.3  2.76e-06        0     2.44      65.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 40
Energy Deposited == 0
No. of Photons Absorbed == 25
No. of Photons Reflected == 39
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 70
Photon Angle == 0.1277380004605941
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     50.6    -7.02      100  2.76e-06        0        0         0   physWorld initStep
    1     38.2    -7.02     29.5  2.76e-06        0     71.6      71.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2625136574791394
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.8    -6.99       28  2.76e-06        0     1.54      73.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     37.5    -6.97       27  2.76e-06        0     1.04      74.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     37.5    -6.97       27  2.76e-06        0 1.16e-14      74.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     39.4    -7.55     19.5  2.76e-06        0     7.75      81.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     39.4    -7.55     19.5  2.76e-06        0        0      81.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     37.4    -7.38       12  2.76e-06        0     7.75      89.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8     37.4    -7.38       12  2.76e-06        0        0      89.7   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     38.3    -7.66      8.5  2.76e-06        0     3.65      93.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10      105    -37.3     -500  2.76e-06        0      514       607  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 41
Energy Deposited == 0
No. of Photons Absorbed == 25
No. of Photons Reflected == 42
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 73
Photon Angle == 0.2625136574791394
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     36.1     25.4      100  2.76e-06        0        0         0   physWorld initStep
    1     24.3     25.4     33.1  2.76e-06        0     67.9      67.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2313284848688535
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     23.7     25.3     30.8  2.76e-06        0     2.34      70.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 42
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 42
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 74
Photon Angle == 0.2313284848688535
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     6.53    -18.3      100  2.76e-06        0        0         0   physWorld initStep
    1    -3.52    -18.3       43  2.76e-06        0     57.9      57.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1514323200717174
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -3.83    -18.2     40.9  2.76e-06        0     2.15        60 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 43
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 42
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 75
Photon Angle == 0.1514323200717174
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -8.28     7.12      100  2.76e-06        0        0         0   physWorld initStep
    1    -18.4     7.12     42.6  2.76e-06        0     58.3      58.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1062004275298309
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -18.6     7.08     40.3  2.76e-06        0     2.26      60.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3      -24     7.92       28  2.76e-06        0     13.5        74 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -33.7     9.43     5.66  2.76e-06        0     24.4      98.4 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -33.7     9.43     5.66  2.76e-06        0        0      98.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     35.6    -13.5     10.5  2.76e-06        0     73.1       172   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     35.7    -13.6     10.5  2.76e-06        0      0.1       172   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     37.5    -14.2     10.6  2.76e-06        0        2       174   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      500     -173     34.6  2.76e-06        0      490       663  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 44
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 43
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 77
Photon Angle == 0.1062004275298309
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     20.3     1.76      100  2.76e-06        0        0         0   physWorld initStep
    1     10.6     1.76     45.3  2.76e-06        0     55.6      55.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1779488529352928
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     10.3     1.75     43.3  2.76e-06        0        2      57.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     10.3     1.75     43.3  2.76e-06        0        0      57.6   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     10.7     1.88     45.3  2.76e-06        0        2      59.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      118     33.9      500  2.76e-06        0      468       528  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 45
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 44
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 78
Photon Angle == 0.1779488529352928
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     35.5     25.5      100  2.76e-06        0        0         0   physWorld initStep
    1     23.8     25.5     33.3  2.76e-06        0     67.7      67.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2298345544479101
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.3     25.3     31.1  2.76e-06        0     2.33        70 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     23.2     26.1       28  2.76e-06        0     3.16      73.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4       23     30.3     10.9  2.76e-06        0     17.6      90.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5       23     30.4     10.8  2.76e-06        0    0.147        91   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     23.8     31.8     9.45  2.76e-06        0     2.11      93.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      278      500     -439  2.76e-06        0      696       789  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 46
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 44
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 79
Photon Angle == 0.2298345544479101
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     5.29    -20.4      100  2.76e-06        0        0         0   physWorld initStep
    1    -4.92    -20.4     42.1  2.76e-06        0     58.8      58.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1499102230969456
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -5.23    -20.3     39.9  2.76e-06        0     2.19        61 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -8.71    -22.4       28  2.76e-06        0     12.6      73.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -16.6    -27.1     1.06  2.76e-06        0     28.5       102 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -16.6    -27.1     1.06  2.76e-06        0        0       102 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     6.97     28.7    -2.07  2.76e-06        0     60.7       163 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7     6.97     28.7    -2.07  2.76e-06        0        0       163 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     9.14     15.2       28  2.76e-06        0     33.1       196 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     10.2     8.59     42.6  2.76e-06        0     16.1       212   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     10.5     8.16     44.7  2.76e-06        0     2.15       214   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     61.7     -112      500  2.76e-06        0      474       688  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 47
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 46
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 82
Photon Angle == 0.1499102230969456
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     42.4     4.85      100  2.76e-06        0        0         0   physWorld initStep
    1     31.2     4.85       36  2.76e-06        0       65        65   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2336533667882454
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     30.7     4.82     33.9  2.76e-06        0     2.18      67.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 48
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 46
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 83
Photon Angle == 0.2336533667882454
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     34.4    -22.7      100  2.76e-06        0        0         0   physWorld initStep
    1       23    -22.7     35.4  2.76e-06        0     65.6      65.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2227690834748635
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.5    -22.6     33.2  2.76e-06        0     2.26      67.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     22.3    -23.6       28  2.76e-06        0     5.32      73.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     21.5      -28     6.11  2.76e-06        0     22.3      95.5 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     21.5      -28     6.11  2.76e-06        0        0      95.5 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -22.4     13.9    -6.68  2.76e-06        0       62       158 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -22.4     13.9    -6.68  2.76e-06        0        0       158 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    0.444     9.58       28  2.76e-06        0     41.7       199 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     10.2     7.74     42.8  2.76e-06        0     17.8       217   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     11.1     7.71     44.7  2.76e-06        0     2.09       219   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      248    -10.1      500  2.76e-06        0      514       733  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 49
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 48
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 86
Photon Angle == 0.2227690834748635
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -7.38    -21.7      100  2.76e-06        0        0         0   physWorld initStep
    1    -18.3    -21.7     38.2  2.76e-06        0     62.8      62.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1182138287383352
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -18.5    -21.5     35.8  2.76e-06        0     2.43      65.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -22.4    -23.6       28  2.76e-06        0     8.93      74.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -27.5    -26.3     17.9  2.76e-06        0     11.6      85.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -27.6    -26.4     17.8  2.76e-06        0    0.133      85.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -29.2    -27.6     16.4  2.76e-06        0     2.45      88.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500     -374     -482  2.76e-06        0      768       857  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 50
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 48
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 87
Photon Angle == 0.1182138287383352
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     29.6      -15      100  2.76e-06        0        0         0   physWorld initStep
    1     19.1      -15     40.5  2.76e-06        0     60.4      60.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2034953331059679
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     18.7    -14.9     38.4  2.76e-06        0      2.1      62.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     17.7    -16.1       28  2.76e-06        0     10.6      73.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     14.2    -20.3    -8.92  2.76e-06        0     37.3       110 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     14.2    -20.3    -8.92  2.76e-06        0        0       110 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     11.8    -17.8      -10  2.76e-06 2.76e-06     3.61       114    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 51
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 28
No. of Photons Reflected == 49
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 89
Photon Angle == 0.2034953331059679
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     4.98     25.5      100  2.76e-06        0        0         0   physWorld initStep
    1    -5.69     25.5     39.5  2.76e-06        0     61.4      61.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1538990930724351
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       -6     25.3     37.3  2.76e-06        0     2.29      63.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -8.88     27.6       28  2.76e-06        0     9.96      73.7 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -15.3     32.8     7.31  2.76e-06        0     22.3      95.9 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -15.3     32.8     7.31  2.76e-06        0        0      95.9 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     3.83    -35.8     7.04  2.76e-06        0     71.2       167 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7     3.83    -35.8     7.04  2.76e-06        0        0       167 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     6.72    -27.8       28  2.76e-06        0     22.6       190 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     8.05    -24.1     37.6  2.76e-06        0     10.4       200   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10      8.4      -24     39.9  2.76e-06        0     2.29       202   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     78.1       23      500  2.76e-06        0      468       670  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 52
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 51
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 92
Photon Angle == 0.1538990930724351
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     45.2     6.06      100  2.76e-06        0        0         0   physWorld initStep
    1     33.6     6.06       34  2.76e-06        0       67        67   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2426356704014569
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       33     6.03     31.8  2.76e-06        0     2.24      69.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     33.2     6.23       28  2.76e-06        0      3.8      73.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     34.3     7.38     5.82  2.76e-06        0     22.2      95.3 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     34.3     7.38     5.82  2.76e-06        0        0      95.3 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -18.7    -1.72      -10  2.76e-06 2.76e-06     56.1       151    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 53
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 28
No. of Photons Reflected == 52
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 94
Photon Angle == 0.2426356704014569
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     45.2     6.39      100  2.76e-06        0        0         0   physWorld initStep
    1     33.5     6.39       34  2.76e-06        0     67.1      67.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2426257431866179
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       33     6.35     31.8  2.76e-06        0     2.24      69.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     33.2     6.56       28  2.76e-06        0     3.79      73.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     34.3     7.77     5.88  2.76e-06        0     22.2      95.3 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     34.3     7.77     5.88  2.76e-06        0        0      95.3 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -19.1    -1.87      -10  2.76e-06 2.76e-06     56.5       152    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 54
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 28
No. of Photons Reflected == 53
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 96
Photon Angle == 0.2426257431866179
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     32.1     25.5      100  2.76e-06        0        0         0   physWorld initStep
    1     20.6     25.5       35  2.76e-06        0       66        66   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2198999979046534
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     20.2     25.3     32.8  2.76e-06        0     2.29      68.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     19.9     26.4       28  2.76e-06        0     4.96      73.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     18.8     31.2     7.72  2.76e-06        0     20.9      94.1 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     18.8     31.2     7.72  2.76e-06        0        0      94.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -22.8    -17.4    -3.38  2.76e-06        0     64.9       159 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -22.8    -17.4    -3.38  2.76e-06        0        0       159 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -3.82    -12.5       28  2.76e-06        0       37       196 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     5.31    -10.2     43.1  2.76e-06        0     17.8       214   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     6.11    -10.2     45.1  2.76e-06        0     2.12       216   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      211     9.45      500  2.76e-06        0      499       715  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 55
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 55
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 99
Photon Angle == 0.2198999979046534
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     39.1     6.48      100  2.76e-06        0        0         0   physWorld initStep
    1     28.1     6.48     37.9  2.76e-06        0     63.1      63.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2243621737445372
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.6     6.45     35.8  2.76e-06        0     2.14      65.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 56
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 55
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 100
Photon Angle == 0.2243621737445372
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     23.5    -35.7      100  2.76e-06        0        0         0   physWorld initStep
    1     11.3    -35.7     30.9  2.76e-06        0     70.1      70.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2157932413669141
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     10.8    -35.4     28.5  2.76e-06        0     2.52      72.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 57
Energy Deposited == 0
No. of Photons Absorbed == 30
No. of Photons Reflected == 55
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 101
Photon Angle == 0.2157932413669141
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     25.3     6.55      100  2.76e-06        0        0         0   physWorld initStep
    1     15.4     6.55     43.7  2.76e-06        0     57.2      57.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1899697758828656
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       15     6.52     41.7  2.76e-06        0     2.02      59.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 58
Energy Deposited == 0
No. of Photons Absorbed == 31
No. of Photons Reflected == 55
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 102
Photon Angle == 0.1899697758828656
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     13.1     22.7      100  2.76e-06        0        0         0   physWorld initStep
    1     2.73     22.7     41.2  2.76e-06        0     59.7      59.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1701653503311746
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     2.38     22.6     39.1  2.76e-06        0     2.18      61.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 59
Energy Deposited == 0
No. of Photons Absorbed == 32
No. of Photons Reflected == 55
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 103
Photon Angle == 0.1701653503311746
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       14     14.3      100  2.76e-06        0        0         0   physWorld initStep
    1     4.18     14.3     44.3  2.76e-06        0     56.6      56.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.166815869749033
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     3.84     14.3     42.2  2.76e-06        0     2.07      58.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    0.832     15.8       28  2.76e-06        0     14.6      73.3 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -7.22     19.8      -10  2.76e-06 2.76e-06     39.1       112    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 60
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 32
No. of Photons Reflected == 55
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 104
Photon Angle == 0.166815869749033
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     18.2    -33.6      100  2.76e-06        0        0         0   physWorld initStep
    1     6.59    -33.6     33.9  2.76e-06        0     67.2      67.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1975123193931654
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     6.17    -33.4     31.5  2.76e-06        0     2.43      69.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 61
Energy Deposited == 0
No. of Photons Absorbed == 33
No. of Photons Reflected == 55
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 105
Photon Angle == 0.1975123193931654
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       17    -21.3      100  2.76e-06        0        0         0   physWorld initStep
    1     6.65    -21.3     41.5  2.76e-06        0     59.4      59.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1779310781475871
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     6.28    -21.1     39.4  2.76e-06        0     2.14      61.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 62
Energy Deposited == 0
No. of Photons Absorbed == 34
No. of Photons Reflected == 55
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 106
Photon Angle == 0.1779310781475871
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     2.52     15.6      100  2.76e-06        0        0         0   physWorld initStep
    1    -7.44     15.6     43.5  2.76e-06        0     57.4      57.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1400295379871888
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -7.73     15.5     41.4  2.76e-06        0     2.16      59.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 63
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 55
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 107
Photon Angle == 0.1400295379871888
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     31.6    -14.7      100  2.76e-06        0        0         0   physWorld initStep
    1       21    -14.7     39.8  2.76e-06        0     61.1      61.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.208315742564452
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     20.6    -14.6     37.7  2.76e-06        0     2.12      63.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     20.6    -14.6     37.7  2.76e-06        0        0      63.2   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     21.7    -15.7     39.1  2.76e-06        0     2.12      65.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      444     -407      500  2.76e-06        0      738       803  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 64
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 56
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 108
Photon Angle == 0.208315742564452
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     6.78     25.5      100  2.76e-06        0        0         0   physWorld initStep
    1    -3.85     25.5     39.7  2.76e-06        0     61.3      61.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1582374610635648
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -4.18     25.4     37.4  2.76e-06        0     2.27      63.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -6.91     27.7       28  2.76e-06        0     10.1      73.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -13.2     32.9     6.33  2.76e-06        0     23.2      96.8 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -13.2     32.9     6.33  2.76e-06        0        0      96.8 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     1.32    -34.3     4.63  2.76e-06        0     68.7       166 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7     1.32    -34.3     4.63  2.76e-06        0        0       166 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     5.38      -25       28  2.76e-06        0     25.5       191 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     7.39    -20.4     39.5  2.76e-06        0     12.6       204   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     7.76    -20.3     41.8  2.76e-06        0     2.24       206   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     85.5     44.8      500  2.76e-06        0      469       675  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 65
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 58
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 111
Photon Angle == 0.1582374610635648
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     39.4     26.7      100  2.76e-06        0        0         0   physWorld initStep
    1     27.1     26.7     30.3  2.76e-06        0     70.8      70.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2442736741493898
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.5     26.6       28  2.76e-06        0     2.37      73.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     13.1     22.1    -7.53  2.76e-06        0     38.2       111 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     13.1     22.1    -7.53  2.76e-06        0        0       111 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     10.5     19.8      -10  2.76e-06 2.76e-06     4.28       116    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 66
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 35
No. of Photons Reflected == 59
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 112
Photon Angle == 0.2442736741493898
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     21.9    -21.1      100  2.76e-06        0        0         0   physWorld initStep
    1     11.4    -21.1     40.7  2.76e-06        0     60.3      60.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1892550168981106
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       11      -21     38.6  2.76e-06        0     2.14      62.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 67
Energy Deposited == 0
No. of Photons Absorbed == 36
No. of Photons Reflected == 59
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 113
Photon Angle == 0.1892550168981106
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      8.9     36.9      100  2.76e-06        0        0         0   physWorld initStep
    1    -3.21     36.9     31.3  2.76e-06        0     69.7      69.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1839396392173489
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -3.58     36.6     28.8  2.76e-06        0     2.62      72.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 68
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 59
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 114
Photon Angle == 0.1839396392173489
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    0.594     12.7      100  2.76e-06        0        0         0   physWorld initStep
    1    -9.28     12.7       44  2.76e-06        0     56.8      56.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1337143007662043
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -9.55     12.6     41.9  2.76e-06        0     2.15        59 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 69
Energy Deposited == 0
No. of Photons Absorbed == 38
No. of Photons Reflected == 59
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 115
Photon Angle == 0.1337143007662043
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     26.4     3.88      100  2.76e-06        0        0         0   physWorld initStep
    1     16.4     3.88     43.6  2.76e-06        0     57.2      57.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.19199801012978
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       16     3.86     41.7  2.76e-06        0     2.02      59.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     14.4     4.23       28  2.76e-06        0     13.8        73 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     9.65     5.25      -10  2.76e-06 2.76e-06     38.3       111    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 70
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 38
No. of Photons Reflected == 59
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 116
Photon Angle == 0.19199801012978
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -6.04    -23.2      100  2.76e-06        0        0         0   physWorld initStep
    1      -17    -23.2     37.9  2.76e-06        0     63.1      63.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1237391107658188
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -17.2    -23.1     35.5  2.76e-06        0     2.43      65.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 71
Energy Deposited == 0
No. of Photons Absorbed == 39
No. of Photons Reflected == 59
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 117
Photon Angle == 0.1237391107658188
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     40.1    -28.7      100  2.76e-06        0        0         0   physWorld initStep
    1     27.5    -28.7     28.4  2.76e-06        0     72.7      72.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2510663530967769
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.4    -28.7       28  2.76e-06        0    0.464      73.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     25.8    -28.1     21.4  2.76e-06        0      6.8      79.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     25.8    -28.1     21.4  2.76e-06        0 1.35e-14      79.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.4    -30.3     12.7  2.76e-06        0     9.02      88.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     26.4    -30.3     12.7  2.76e-06        0        0      88.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     25.4    -29.9      8.7  2.76e-06        0     4.11        93   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8     25.4    -29.9      8.7  2.76e-06        0 6.32e-15        93   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     22.7    -27.4     6.35  2.76e-06        0     4.37      97.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   10     22.7    -27.4     6.35  2.76e-06        0        0      97.4   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11     21.6      -27     2.13  2.76e-06        0     4.37       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   12     21.6      -27     2.13  2.76e-06        0        0       102   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   13     18.9    -24.5    -0.21  2.76e-06        0     4.37       106   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   14     18.9    -24.5    -0.21  2.76e-06        0        0       106   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   15     17.9    -24.1    -4.42  2.76e-06        0     4.37       111   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   16     17.9    -24.1    -4.42  2.76e-06        0 4.12e-15       111   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   17     15.2    -21.6    -6.75  2.76e-06        0     4.37       115   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   18     15.2    -21.6    -6.75  2.76e-06        0        0       115   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   19     14.3    -21.3      -10  2.76e-06 2.76e-06     3.38       118    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 72
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 39
No. of Photons Reflected == 67
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 125
Photon Angle == 0.2510663530967769
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     21.1      1.2      100  2.76e-06        0        0         0   physWorld initStep
    1     11.4      1.2     45.1  2.76e-06        0     55.7      55.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1797102328670097
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     11.1     1.19     43.2  2.76e-06        0        2      57.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 73
Energy Deposited == 0
No. of Photons Absorbed == 40
No. of Photons Reflected == 67
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 126
Photon Angle == 0.1797102328670097
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     37.6      6.3      100  2.76e-06        0        0         0   physWorld initStep
    1     26.8      6.3     38.7  2.76e-06        0     62.2      62.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2201905473411774
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     26.3     6.27     36.6  2.76e-06        0     2.12      64.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 74
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 67
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 127
Photon Angle == 0.2201905473411774
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     44.5     17.3      100  2.76e-06        0        0         0   physWorld initStep
    1     32.4     17.3     31.6  2.76e-06        0     69.5      69.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2479883204922468
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     31.9     17.2     29.3  2.76e-06        0     2.34      71.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 75
Energy Deposited == 0
No. of Photons Absorbed == 42
No. of Photons Reflected == 67
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 128
Photon Angle == 0.2479883204922468
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     15.5     26.6      100  2.76e-06        0        0         0   physWorld initStep
    1     4.77     26.6       39  2.76e-06        0     61.9      61.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1798050420467416
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2      4.4     26.4     36.8  2.76e-06        0     2.24      64.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 76
Energy Deposited == 0
No. of Photons Absorbed == 43
No. of Photons Reflected == 67
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 129
Photon Angle == 0.1798050420467416
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     15.2    -16.2      100  2.76e-06        0        0         0   physWorld initStep
    1     5.22    -16.2     43.6  2.76e-06        0     57.3      57.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1704026919571864
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     4.88    -16.1     41.5  2.76e-06        0     2.08      59.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 77
Energy Deposited == 0
No. of Photons Absorbed == 44
No. of Photons Reflected == 67
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 130
Photon Angle == 0.1704026919571864
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     35.7    -6.16      100  2.76e-06        0        0         0   physWorld initStep
    1     25.1    -6.16     39.7  2.76e-06        0     61.2      61.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2152072855957483
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     24.6    -6.13     37.6  2.76e-06        0      2.1      63.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 78
Energy Deposited == 0
No. of Photons Absorbed == 45
No. of Photons Reflected == 67
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 131
Photon Angle == 0.2152072855957483
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     41.3     6.42      100  2.76e-06        0        0         0   physWorld initStep
    1     30.1     6.42     36.5  2.76e-06        0     64.4      64.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2306744361283681
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     29.6     6.38     34.4  2.76e-06        0     2.17      66.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 79
Energy Deposited == 0
No. of Photons Absorbed == 46
No. of Photons Reflected == 67
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 132
Photon Angle == 0.2306744361283681
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     3.37    -0.11      100  2.76e-06        0        0         0   physWorld initStep
    1    -6.14    -0.11       46  2.76e-06        0     54.8      54.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1384467052235183
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -6.42    -0.11       44  2.76e-06        0     2.07      56.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3    -6.42    -0.11       44  2.76e-06        0        0      56.9   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4    -7.21   -0.118     45.9  2.76e-06        0     2.07      58.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -214    -2.17      500  2.76e-06        0      499       558  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 80
Energy Deposited == 0
No. of Photons Absorbed == 46
No. of Photons Reflected == 68
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 133
Photon Angle == 0.1384467052235183
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     20.8     1.75      100  2.76e-06        0        0         0   physWorld initStep
    1     11.1     1.75     45.2  2.76e-06        0     55.6      55.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1790323058226768
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     10.8     1.74     43.2  2.76e-06        0        2      57.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     10.8     1.74     43.2  2.76e-06        0        0      57.7   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     11.2     1.87     45.2  2.76e-06        0        2      59.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      128       34      500  2.76e-06        0      471       530  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 81
Energy Deposited == 0
No. of Photons Absorbed == 46
No. of Photons Reflected == 69
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 134
Photon Angle == 0.1790323058226768
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -17.5    -11.7      100  2.76e-06        0        0         0   physWorld initStep
    1    -28.8    -11.7     36.3  2.76e-06        0     64.6      64.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.0736782700829921
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -28.9    -11.6     33.8  2.76e-06        0     2.59      67.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3    -28.9    -11.6     33.8  2.76e-06        0        0      67.2   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4    -31.3    -12.4     34.3  2.76e-06        0     2.59      69.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -500     -166     80.1  2.76e-06        0      495       565  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 82
Energy Deposited == 0
No. of Photons Absorbed == 46
No. of Photons Reflected == 70
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 135
Photon Angle == 0.0736782700829921
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     18.2     34.7      100  2.76e-06        0        0         0   physWorld initStep
    1     6.38     34.7       33  2.76e-06        0     68.1      68.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1997929412700419
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     5.96     34.4     30.5  2.76e-06        0     2.47      70.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 83
Energy Deposited == 0
No. of Photons Absorbed == 47
No. of Photons Reflected == 70
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 136
Photon Angle == 0.1997929412700419
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     6.84     30.8      100  2.76e-06        0        0         0   physWorld initStep
    1    -4.39     30.8     36.3  2.76e-06        0     64.7      64.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1656988016432326
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -4.73     30.6     33.9  2.76e-06        0     2.41      67.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 84
Energy Deposited == 0
No. of Photons Absorbed == 48
No. of Photons Reflected == 70
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 137
Photon Angle == 0.1656988016432326
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     10.1     20.2      100  2.76e-06        0        0         0   physWorld initStep
    1  -0.0495     20.2     42.4  2.76e-06        0     58.5      58.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1611827295191466
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2   -0.378     20.1     40.3  2.76e-06        0     2.15      60.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -3.41     22.1       28  2.76e-06        0     12.8      73.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -11     27.1    -2.53  2.76e-06        0     31.8       105 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5      -11     27.1    -2.53  2.76e-06        0        0       105 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    0.866    -25.3    -8.14  2.76e-06        0       54       159 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    0.866    -25.3    -8.14  2.76e-06        0        0       159 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     7.85    -7.49       28  2.76e-06        0     40.9       200 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     10.8   0.0187     43.2  2.76e-06        0     17.2       217   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     11.2    0.614     45.2  2.76e-06        0     2.08       220   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      102      159      500  2.76e-06        0      490       710  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 85
Energy Deposited == 0
No. of Photons Absorbed == 48
No. of Photons Reflected == 72
No. of Photons Transmitted == 20
No. of Photons Detected == 0
Total no. of Photons == 140
Photon Angle == 0.1611827295191466
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     10.6     17.5      100  2.76e-06        0        0         0   physWorld initStep
    1    0.653     17.5     43.4  2.76e-06        0     57.4      57.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1606228758851511
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    0.327     17.4     41.3  2.76e-06        0     2.11      59.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -2.88     19.2       28  2.76e-06        0     13.8      73.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -11.2     23.9    -6.58  2.76e-06        0     35.9       109 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -11.2     23.9    -6.58  2.76e-06        0        0       109 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -3.48    -2.72      -10  2.76e-06 2.76e-06     27.9       137    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 86
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 48
No. of Photons Reflected == 73
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 142
Photon Angle == 0.1606228758851511
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0    -3.12     17.1      100  2.76e-06        0        0         0   physWorld initStep
    1    -13.4     17.1     41.8  2.76e-06        0     59.1      59.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1260851460815342
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -13.7       17     39.5  2.76e-06        0     2.26      61.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 87
Energy Deposited == 0
No. of Photons Absorbed == 49
No. of Photons Reflected == 73
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 143
Photon Angle == 0.1260851460815342
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     21.2     33.7      100  2.76e-06        0        0         0   physWorld initStep
    1      9.4     33.7     33.2  2.76e-06        0     67.8      67.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2051275225454581
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     8.96     33.5     30.8  2.76e-06        0     2.44      70.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 88
Energy Deposited == 0
No. of Photons Absorbed == 50
No. of Photons Reflected == 73
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 144
Photon Angle == 0.2051275225454581
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     27.7     14.7      100  2.76e-06        0        0         0   physWorld initStep
    1     17.4     14.7     41.3  2.76e-06        0     59.6      59.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1987774494535985
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       17     14.6     39.2  2.76e-06        0     2.09      61.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     15.7     15.8       28  2.76e-06        0     11.4      73.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     11.6       20      -10  2.76e-06 2.76e-06     38.5       112    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 89
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 50
No. of Photons Reflected == 73
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 145
Photon Angle == 0.1987774494535985
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     20.6    -26.9      100  2.76e-06        0        0         0   physWorld initStep
    1     9.69    -26.9       38  2.76e-06        0       63        63   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1923604182964871
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     9.29    -26.8     35.8  2.76e-06        0     2.25      65.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     9.29    -26.8     35.8  2.76e-06        0        0      65.2   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     9.61    -28.7     36.9  2.76e-06        0     2.25      67.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     81.4     -500      263  2.76e-06        0      528       595  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 90
Energy Deposited == 0
No. of Photons Absorbed == 50
No. of Photons Reflected == 74
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 146
Photon Angle == 0.1923604182964871
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     25.7     29.7      100  2.76e-06        0        0         0   physWorld initStep
    1     14.3     29.7     34.9  2.76e-06        0     66.1      66.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2091684437746433
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     13.8     29.5     32.6  2.76e-06        0     2.33      68.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     13.3     30.9       28  2.76e-06        0     4.87      73.3 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     11.4     36.2     9.88  2.76e-06        0       19      92.3 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     11.4     36.2     9.88  2.76e-06        0        0      92.3 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -21.3    -25.3     2.89  2.76e-06        0       70       162 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -21.3    -25.3     2.89  2.76e-06        0        0       162 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -8.96    -19.9       28  2.76e-06        0     28.5       191 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9    -2.36      -17     41.4  2.76e-06        0     15.2       206   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    -1.78      -17     43.6  2.76e-06        0     2.21       208   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      145  -0.0747      500  2.76e-06        0      480       688  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 91
Energy Deposited == 0
No. of Photons Absorbed == 50
No. of Photons Reflected == 76
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 149
Photon Angle == 0.2091684437746433
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     13.4    -16.9      100  2.76e-06        0        0         0   physWorld initStep
    1     3.39    -16.9     43.5  2.76e-06        0     57.4      57.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.16663897699455
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     3.05    -16.9     41.4  2.76e-06        0      2.1      59.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 92
Energy Deposited == 0
No. of Photons Absorbed == 51
No. of Photons Reflected == 76
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 150
Photon Angle == 0.16663897699455
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     43.4     20.6      100  2.76e-06        0        0         0   physWorld initStep
    1     31.3     20.6     30.9  2.76e-06        0     70.1      70.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.248371348993321
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     30.7     20.4     28.6  2.76e-06        0     2.37      72.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 93
Energy Deposited == 0
No. of Photons Absorbed == 52
No. of Photons Reflected == 76
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 151
Photon Angle == 0.248371348993321
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     22.8    -13.9      100  2.76e-06        0        0         0   physWorld initStep
    1     12.7    -13.9     42.9  2.76e-06        0       58        58   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1868089438259664
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     12.4    -13.9     40.9  2.76e-06        0     2.06        60 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 94
Energy Deposited == 0
No. of Photons Absorbed == 53
No. of Photons Reflected == 76
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 152
Photon Angle == 0.1868089438259664
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     18.5    -29.9      100  2.76e-06        0        0         0   physWorld initStep
    1     7.32    -29.9     36.5  2.76e-06        0     64.5      64.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1915154504537524
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     6.92    -29.8     34.2  2.76e-06        0     2.32      66.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 95
Energy Deposited == 0
No. of Photons Absorbed == 54
No. of Photons Reflected == 76
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 153
Photon Angle == 0.1915154504537524
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     19.6    -26.3      100  2.76e-06        0        0         0   physWorld initStep
    1     8.81    -26.3     38.6  2.76e-06        0     62.4      62.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1892608305250243
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     8.42    -26.2     36.4  2.76e-06        0     2.23      64.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 96
Energy Deposited == 0
No. of Photons Absorbed == 55
No. of Photons Reflected == 76
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 154
Photon Angle == 0.1892608305250243
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     33.2    -12.7      100  2.76e-06        0        0         0   physWorld initStep
    1     22.5    -12.7     39.6  2.76e-06        0     61.3      61.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2112472675717889
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.1    -12.7     37.6  2.76e-06        0     2.11      63.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     22.1    -12.7     37.6  2.76e-06        0        0      63.4   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     23.4    -13.6       39  2.76e-06        0     2.11      65.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      490     -355      500  2.76e-06        0      739       805  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 97
Energy Deposited == 0
No. of Photons Absorbed == 55
No. of Photons Reflected == 77
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 155
Photon Angle == 0.2112472675717889
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     27.9    -34.2      100  2.76e-06        0        0         0   physWorld initStep
    1     15.7    -34.2     30.8  2.76e-06        0     70.3      70.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2243621997359608
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     15.2    -33.9     28.3  2.76e-06        0     2.49      72.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 98
Energy Deposited == 0
No. of Photons Absorbed == 56
No. of Photons Reflected == 77
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 156
Photon Angle == 0.2243621997359608
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.1745329251994329
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     8.71     25.2      100  2.76e-06        0        0         0   physWorld initStep
    1    -1.88     25.2       40  2.76e-06        0       61        61   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.1624180696601703
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -2.21     25.1     37.7  2.76e-06        0     2.25      63.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 99
Energy Deposited == 0
No. of Photons Absorbed == 57
No. of Photons Reflected == 77
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 157
Photon Angle == 0.1624180696601703
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
  User=0.18s Real=0.2s Sys=0.01s
FileName = run.mac
G4 kernel has come to Quit state.
================== Deleting memory pools ===================
Number of memory pools allocated: 9; of which, static: 0
Dynamic pools deleted: 9 / Total memory freed: 0.033 Mb
============================================================
RunManagerKernel is deleted. Good bye :)
Graphics systems deleted.
Visualization Manager deleting...
