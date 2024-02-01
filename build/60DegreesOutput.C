
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
THE VALUE OF ANGLE IN RADIANS == 1.0472
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
    0      157     4.06      100  2.76e-06        0        0         0   physWorld initStep
    1     37.2     4.06     30.9  2.76e-06        0      138       138   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5565920236918109
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     35.4     4.04     29.8  2.76e-06        0     2.06       140 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 0
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 0
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 1
Photon Angle == 0.5565920236918109
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
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
    0      202    -9.49      100  2.76e-06        0        0         0   physWorld initStep
    1     33.8    -9.49     2.85  2.76e-06        0      194       194   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3092814253019238
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.2    -9.34     2.01  2.76e-06        0     2.78       197   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     31.1    -9.34     1.96  2.76e-06        0    0.113       197 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     31.1    -9.34     1.96  2.76e-06        0        0       197   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5       31    -9.36     1.85  2.76e-06        0    0.112       197   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       31    -9.98   -0.844  2.76e-06        0     2.77       200   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -98.7     -107     -500  2.76e-06        0      525       725  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 1
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 1
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 2
Photon Angle == 0.3092814253019238
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
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
    0      168     3.94      100  2.76e-06        0        0         0   physWorld initStep
    1       40     3.94     26.2  2.76e-06        0      148       148   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4551170058560783
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.9     3.91     25.2  2.76e-06        0     2.23       150   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.8     3.91     25.2  2.76e-06        0    0.116       150 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4    -1.02     6.23      -10  2.76e-06 2.76e-06     52.5       202    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 2
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 1
No. of Photons Reflected == 1
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 2
Photon Angle == 0.4551170058560783
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
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
    0      146     19.3      100  2.76e-06        0        0         0   physWorld initStep
    1     29.7     19.3     32.9  2.76e-06        0      134       134   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5762221578956281
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.8     19.2     31.6  2.76e-06        0     2.26       137 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 3
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 1
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 3
Photon Angle == 0.5762221578956281
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
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
    0      152      5.3      100  2.76e-06        0        0         0   physWorld initStep
    1     35.4      5.3     32.5  2.76e-06        0      135       135   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5623829728408452
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.7     5.27     31.3  2.76e-06        0     2.09       137 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     25.9      5.6       28  2.76e-06        0      8.5       146 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -32.2     8.06      3.1  2.76e-06        0     63.2       209 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -32.2     8.06      3.1  2.76e-06        0        0       209 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -10.9    -3.93       28  2.76e-06        0     34.9       244 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7     2.03    -11.2     43.1  2.76e-06        0     21.2       265   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     2.94    -11.9       45  2.76e-06        0     2.17       267   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      260     -189      500  2.76e-06        0      552       819  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 4
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 5
Photon Angle == 0.5623829728408452
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
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
    0      194     26.5      100  2.76e-06        0        0         0   physWorld initStep
    1     17.5     26.5    -2.03  2.76e-06        0      204       204   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6867676047282951
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     17.5     26.5    -2.03  2.76e-06        0        0       204   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -500      120     -416  2.76e-06        0      669       873  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 5
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 3
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 6
Photon Angle == 0.6867676047282951
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
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
    0      188     34.8      100  2.76e-06        0        0         0   physWorld initStep
    1     -500     34.8     -297  2.76e-06        0      794       794  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.5235987755982987
TRACK ID == 1
THE CURRENT EVENTID IS == 6
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 3
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 6
Photon Angle == 0.5235987755982987
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
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
    0      177    -10.6      100  2.76e-06        0        0         0   physWorld initStep
    1     38.7    -10.6     20.4  2.76e-06        0      159       159   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4566651312622638
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.7    -10.6     19.4  2.76e-06        0     2.29       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.6    -10.6     19.3  2.76e-06        0     0.12       162 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     4.57    -16.1      -10  2.76e-06 2.76e-06     43.7       205    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 7
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 2
No. of Photons Reflected == 3
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 6
Photon Angle == 0.4566651312622638
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
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
    0      145     2.48      100  2.76e-06        0        0         0   physWorld initStep
    1     32.7     2.48       35  2.76e-06        0      130       130   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5718217595098221
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.9     2.47     33.9  2.76e-06        0     2.12       132 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     15.9     2.77       28  2.76e-06        0     16.2       148 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -36.2     3.82     7.61  2.76e-06        0     55.9       204 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -36.2     3.82     7.61  2.76e-06        0        0       204 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -18.6   -0.201       28  2.76e-06        0     27.2       231 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -4.74    -3.37     44.1  2.76e-06        0     21.5       253   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -3.87    -3.66     46.1  2.76e-06        0     2.26       255   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      226    -71.2      500  2.76e-06        0      513       768  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 8
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 4
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 8
Photon Angle == 0.5718217595098221
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
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
    0      178    -3.04      100  2.76e-06        0        0         0   physWorld initStep
    1       40    -3.04     20.4  2.76e-06        0      159       159   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4550222190232898
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       38    -3.01     19.4  2.76e-06        0     2.23       161   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.9    -3.01     19.4  2.76e-06        0    0.116       162 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     5.44     -4.5      -10  2.76e-06 2.76e-06     43.8       205    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 9
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 2
No. of Photons Reflected == 4
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 8
Photon Angle == 0.4550222190232898
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      177    -21.7      100  2.76e-06        0        0         0   physWorld initStep
    1     33.8    -21.7     17.4  2.76e-06        0      165       165   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.464078070361071
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.5    -21.5     16.3  2.76e-06        0     2.52       168   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     31.4    -21.5     16.2  2.76e-06        0     0.14       168 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4       20    -27.7     4.48  2.76e-06        0     17.5       185 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5       20    -27.7     4.48  2.76e-06        0        0       185 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -8.73    -26.1    -5.05  2.76e-06        0     30.3       216 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -8.73    -26.1    -5.05  2.76e-06        0        0       216 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -28.5    -8.79    -1.66  2.76e-06        0     26.5       242 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    9    -28.5    -8.79    -1.66  2.76e-06        0        0       242 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -34.4     16.2     14.6  2.76e-06        0     30.4       273   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11    -34.5     16.3     14.7  2.76e-06        0    0.129       273   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   12    -35.8     18.1     15.5  2.76e-06        0     2.39       275   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13     -344      500      264  2.76e-06        0      624       899  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 10
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 7
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 11
Photon Angle == 0.464078070361071
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      170     30.2      100  2.76e-06        0        0         0   physWorld initStep
    1     26.5     30.2     17.2  2.76e-06        0      166       166   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4803856301398164
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.9     29.7     15.9  2.76e-06        0     2.94       169   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     23.7     29.7     15.8  2.76e-06        0    0.189       169 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     23.7     29.7     15.8  2.76e-06        0        0       169   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     23.7     29.9     15.7  2.76e-06        0    0.189       169   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     23.5     32.5     14.4  2.76e-06        0     2.94       172   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -83.1      500     -262  2.76e-06        0      554       726  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 11
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 8
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 12
Photon Angle == 0.4803856301398164
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      153    -29.4      100  2.76e-06        0        0         0   physWorld initStep
    1     27.4    -29.4     27.6  2.76e-06        0      145       145   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4779318561718378
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.8      -29     26.3  2.76e-06        0     2.88       148   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     24.7      -29     26.3  2.76e-06        0    0.181       148 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     24.7      -29     26.3  2.76e-06        0        0       148   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     24.6    -29.1     26.2  2.76e-06        0    0.181       148   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     24.6    -31.7     24.9  2.76e-06        0     2.88       151   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -50.8     -500     -249  2.76e-06        0      548       699  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 12
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 9
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 13
Photon Angle == 0.4779318561718378
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      181    -27.8      100  2.76e-06        0        0         0   physWorld initStep
    1     28.9    -27.8       12  2.76e-06        0      176       176   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.473999837793897
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.5    -27.5     10.8  2.76e-06        0     2.79       179   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     26.3    -27.5     10.7  2.76e-06        0    0.169       179 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     26.3    -27.5     10.7  2.76e-06        0        0       179   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.3    -27.6     10.6  2.76e-06        0    0.169       179   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     26.5    -29.7     9.56  2.76e-06        0     2.36       182   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     29.5     -500     -198  2.76e-06        0      514       695  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 13
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 10
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 14
Photon Angle == 0.473999837793897
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      176       23      100  2.76e-06        0        0         0   physWorld initStep
    1     32.9       23     17.7  2.76e-06        0      165       165   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4657026979163774
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.6     22.8     16.5  2.76e-06        0     2.57       167   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.5     22.8     16.5  2.76e-06        0    0.145       167 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4       22     28.6     7.18  2.76e-06        0     13.8       181 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5       22     28.6     7.18  2.76e-06        0        0       181 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -11.4     27.3    -2.04  2.76e-06        0     34.7       216 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -11.4     27.3    -2.04  2.76e-06        0        0       216 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -34.7     4.36     5.57  2.76e-06        0     33.6       249 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    9    -34.7     4.36     5.57  2.76e-06        0        0       249 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -36.7    -10.2     17.9  2.76e-06        0     19.2       269   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11    -36.7    -10.3       18  2.76e-06        0    0.142       269   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   12    -38.3    -11.9     19.1  2.76e-06        0     2.54       271   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13     -422     -500      359  2.76e-06        0      708       979  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 14
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 13
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 17
Photon Angle == 0.4657026979163774
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      177    0.695      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1    0.695     20.9  2.76e-06        0      158       158   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4548922066885268
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1    0.689     19.9  2.76e-06        0     2.23       160   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38    0.689     19.9  2.76e-06        0    0.115       160 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     4.94     1.03      -10  2.76e-06 2.76e-06     44.6       205    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 15
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 2
No. of Photons Reflected == 13
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 17
Photon Angle == 0.4548922066885268
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      148    -6.53      100  2.76e-06        0        0         0   physWorld initStep
    1     33.4    -6.53       34  2.76e-06        0      132       132   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5687951206893138
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.7     -6.5     32.9  2.76e-06        0     2.12       134 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     31.7     -6.5     32.9  2.76e-06        0        0       134   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     32.3    -6.97     34.8  2.76e-06        0     2.12       136   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      173     -125      500  2.76e-06        0      500       636  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 16
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 14
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 18
Photon Angle == 0.5687951206893138
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      183    -4.32      100  2.76e-06        0        0         0   physWorld initStep
    1     39.9    -4.32     17.2  2.76e-06        0      166       166   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4551639119150068
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.9    -4.28     16.2  2.76e-06        0     2.24       168   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.8    -4.28     16.1  2.76e-06        0    0.116       168 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     8.94    -6.18      -10  2.76e-06 2.76e-06       39       207    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 17
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 2
No. of Photons Reflected == 14
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 18
Photon Angle == 0.4551639119150068
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      192    -18.3      100  2.76e-06        0        0         0   physWorld initStep
    1     35.3    -18.3     9.45  2.76e-06        0      181       181   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3093563804302844
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.5      -18     8.61  2.76e-06        0     2.92       184   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     32.3      -18      8.5  2.76e-06        0    0.211       184 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     32.3      -18      8.5  2.76e-06        0        0       184   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     32.3    -18.1     8.32  2.76e-06        0    0.207       184   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     31.8    -19.1     5.63  2.76e-06        0     2.91       187   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -190     -172     -500  2.76e-06        0      573       760  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 18
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 15
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 19
Photon Angle == 0.3093563804302844
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      151     17.1      100  2.76e-06        0        0         0   physWorld initStep
    1     32.3     17.1     31.8  2.76e-06        0      136       136   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5683357950032857
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.5       17     30.6  2.76e-06        0     2.19       139 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3       24       18       28  2.76e-06        0     6.99       146 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -26     25.6     7.81  2.76e-06        0     54.5       200 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5      -26     25.6     7.81  2.76e-06        0        0       200 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -24.4    -2.54       28  2.76e-06        0     34.7       235 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -23.7    -14.1     36.3  2.76e-06        0     14.3       249   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8      -24    -15.6       38  2.76e-06        0     2.26       251   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     -101     -467      500  2.76e-06        0      650       902  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 19
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 16
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 21
Photon Angle == 0.5683357950032857
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      197    -17.1      100  2.76e-06        0        0         0   physWorld initStep
    1     32.7    -17.1      5.4  2.76e-06        0      189       189   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3093735004706102
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     29.9    -16.8     4.56  2.76e-06        0     2.93       192   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     29.8    -16.8     4.47  2.76e-06        0    0.166       192 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     29.8    -16.8     4.47  2.76e-06        0        0       192   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     29.7    -16.8     4.33  2.76e-06        0    0.164       192   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     29.3    -17.8     1.64  2.76e-06        0     2.91       195   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -193     -170     -500  2.76e-06        0      569       765  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 20
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 17
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 22
Photon Angle == 0.3093735004706102
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      163     22.5      100  2.76e-06        0        0         0   physWorld initStep
    1     33.2     22.5     25.2  2.76e-06        0      150       150   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4650756923215602
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       31     22.3       24  2.76e-06        0     2.55       152   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.8     22.3       24  2.76e-06        0    0.143       152 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     14.4     32.5      6.5  2.76e-06        0     26.1       178 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     14.4     32.5      6.5  2.76e-06        0        0       178 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -25.1     19.5     1.08  2.76e-06        0       42       220 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -25.1     19.5     1.08  2.76e-06        0        0       220 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -35.4    -13.9       20  2.76e-06        0     39.7       260   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -35.5      -14       20  2.76e-06        0    0.128       260   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10      -37    -15.7     20.8  2.76e-06        0     2.37       263   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     -385     -500      248  2.76e-06        0      638       901  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 21
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 19
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 24
Photon Angle == 0.4650756923215602
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      166     28.2      100  2.76e-06        0        0         0   physWorld initStep
    1     28.5     28.2     20.4  2.76e-06        0      159       159   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4749762310846974
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       26     27.9     19.2  2.76e-06        0     2.81       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     25.9     27.9     19.1  2.76e-06        0    0.172       162 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     25.9     27.9     19.1  2.76e-06        0        0       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     25.9       28       19  2.76e-06        0    0.172       162   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     26.1     30.5     17.8  2.76e-06        0     2.81       165   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -8.58      500     -254  2.76e-06        0      544       709  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 22
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 20
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 25
Photon Angle == 0.4749762310846974
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      181    -18.4      100  2.76e-06        0        0         0   physWorld initStep
    1     35.7    -18.4     16.3  2.76e-06        0      167       167   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4609831024863436
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.5    -18.3     15.2  2.76e-06        0     2.43       170   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     33.4    -18.3     15.1  2.76e-06        0    0.132       170 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     15.2    -25.1    -2.42  2.76e-06        0     26.2       196 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     15.2    -25.1    -2.42  2.76e-06        0        0       196 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -4.51    -22.5      -10  2.76e-06 2.76e-06     21.3       217    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 23
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 2
No. of Photons Reflected == 21
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 26
Photon Angle == 0.4609831024863436
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      201    -7.79      100  2.76e-06        0        0         0   physWorld initStep
    1     35.5    -7.79     4.61  2.76e-06        0      191       191   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.309452609469778
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.9    -7.67     3.78  2.76e-06        0     2.75       194   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     32.8    -7.67     3.71  2.76e-06        0    0.126       194 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     32.8    -7.67     3.71  2.76e-06        0        0       194   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     32.8    -7.69      3.6  2.76e-06        0    0.124       194   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     32.7    -8.19      0.9  2.76e-06        0     2.74       197   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -80.9    -86.8     -500  2.76e-06        0      520       716  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 24
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 22
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 27
Photon Angle == 0.309452609469778
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      162    -22.7      100  2.76e-06        0        0         0   physWorld initStep
    1     33.1    -22.7     25.5  2.76e-06        0      149       149   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4652562885323794
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.8    -22.4     24.4  2.76e-06        0     2.56       151   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.7    -22.4     24.3  2.76e-06        0    0.144       152 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4     30.7    -22.4     24.3  2.76e-06        0        0       152   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     30.8    -22.6     24.3  2.76e-06        0    0.144       152   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     31.7    -24.7     23.2  2.76e-06        0     2.56       154   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      183     -500     -265  2.76e-06        0      576       730  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 25
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 23
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 28
Photon Angle == 0.4652562885323794
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      160     15.2      100  2.76e-06        0        0         0   physWorld initStep
    1     36.4     15.2     28.8  2.76e-06        0      142       142   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5552603169435701
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       35     15.2       28  2.76e-06        0     1.58       144   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3       35     15.2       28  2.76e-06        0   0.0214       144   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     34.9     15.2     27.9  2.76e-06        0    0.138       144 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     15.2     25.5    -1.95  2.76e-06        0     37.2       181 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    6     15.2     25.5    -1.95  2.76e-06        0        0       181 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7    -8.49     16.6      -10  2.76e-06 2.76e-06     26.5       208    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 26
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 2
No. of Photons Reflected == 24
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 29
Photon Angle == 0.5552603169435701
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      162    -18.6      100  2.76e-06        0        0         0   physWorld initStep
    1     35.6    -18.6     26.8  2.76e-06        0      146       146   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4611012660921081
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.4    -18.4     25.7  2.76e-06        0     2.43       149   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     33.3    -18.4     25.6  2.76e-06        0    0.132       149 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     4.76    -29.3    -1.95  2.76e-06        0     41.2       190 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     4.76    -29.3    -1.95  2.76e-06        0        0       190 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6      -26     -8.6    -5.18  2.76e-06        0     37.2       227 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7      -26     -8.6    -5.18  2.76e-06        0        0       227 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -24.8     28.9     19.2  2.76e-06        0     44.7       272   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    9    -24.8     28.9     19.2  2.76e-06        0        0       272 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -11.3     27.2       28  2.76e-06        0     16.2       288 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
   11     3.11     25.5     37.4  2.76e-06        0     17.3       306   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   12     4.51       26     39.4  2.76e-06        0     2.43       308   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13      396      105      500  2.76e-06        0      609       917  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 27
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 27
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 32
Photon Angle == 0.4611012660921081
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      178    -9.18      100  2.76e-06        0        0         0   physWorld initStep
    1     39.1    -9.18     19.5  2.76e-06        0      161       161   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4561916399085106
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       37    -9.11     18.5  2.76e-06        0     2.27       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.9    -9.11     18.5  2.76e-06        0    0.119       163 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     5.74    -13.7      -10  2.76e-06 2.76e-06     42.5       206    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 28
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 2
No. of Photons Reflected == 27
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 32
Photon Angle == 0.4561916399085106
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      170     8.27      100  2.76e-06        0        0         0   physWorld initStep
    1     39.3     8.27     24.3  2.76e-06        0      151       151   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4559343213016285
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.3      8.2     23.3  2.76e-06        0     2.26       154   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.2      8.2     23.3  2.76e-06        0    0.118       154 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4    0.623       13      -10  2.76e-06 2.76e-06     49.6       203    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 29
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 2
No. of Photons Reflected == 27
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 32
Photon Angle == 0.4559343213016285
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      156     23.5      100  2.76e-06        0        0         0   physWorld initStep
    1       32     23.5     28.5  2.76e-06        0      143       143   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5644738180818161
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.2     23.5       28  2.76e-06        0    0.964       144   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     30.1     23.4     27.4  2.76e-06        0     1.22       145   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4       30     23.4     27.3  2.76e-06        0    0.169       145 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5       30     23.4     27.3  2.76e-06        0        0       145   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6       30     23.5     27.1  2.76e-06        0    0.169       145   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     30.8     25.8     25.7  2.76e-06        0      2.8       148   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8      119      500     -341  2.76e-06        0      606       754  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 30
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 28
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 33
Photon Angle == 0.5644738180818161
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      152     16.9      100  2.76e-06        0        0         0   physWorld initStep
    1     32.9     16.9     31.4  2.76e-06        0      137       137   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.566546993275594
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       31     16.8     30.2  2.76e-06        0     2.18       139 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 31
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 28
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 34
Photon Angle == 0.566546993275594
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      177     15.7      100  2.76e-06        0        0         0   physWorld initStep
    1       37     15.7       19  2.76e-06        0      162       162   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4590522335926357
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.8     15.5       18  2.76e-06        0     2.37       164   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.7     15.5     17.9  2.76e-06        0    0.127       164 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     5.83     23.8    -9.24  2.76e-06        0     40.5       205 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     5.83     23.8    -9.24  2.76e-06        0        0       205 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     2.53     22.1      -10  2.76e-06 2.76e-06     3.78       209    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 32
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 3
No. of Photons Reflected == 29
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 35
Photon Angle == 0.4590522335926357
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      169     36.6      100  2.76e-06        0        0         0   physWorld initStep
    1     16.5     36.6     12.2  2.76e-06        0      176       176   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.521841529264786
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     13.3     35.8     10.5  2.76e-06        0     3.65       179   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     12.9     35.8     10.3  2.76e-06        0    0.418       180 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     12.9     35.8     10.3  2.76e-06        0        0       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     12.6       36     10.1  2.76e-06        0    0.418       180   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    6     12.6       36     10.1  2.76e-06        0        0       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7       12       36     9.73  2.76e-06        0    0.793       181   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     9.83     37.2     7.57  2.76e-06        0     3.25       184   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     -500      110     -338  2.76e-06        0      620       804  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 33
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 31
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 37
Photon Angle == 0.521841529264786
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      179     33.5      100  2.76e-06        0        0         0   physWorld initStep
    1     16.4     33.5     5.88  2.76e-06        0      188       188   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.5573632936729815
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     16.4     33.5     5.88  2.76e-06        0        0       188   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -500     55.1     -315  2.76e-06        0      608       797  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 34
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 32
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 38
Photon Angle == 0.5573632936729815
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      142   0.0116      100  2.76e-06        0        0         0   physWorld initStep
    1     31.4   0.0116     36.1  2.76e-06        0      128       128   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5761117814518366
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     29.6   0.0115     34.9  2.76e-06        0     2.14       130 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 35
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 32
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 39
Photon Angle == 0.5761117814518366
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      154    -27.2      100  2.76e-06        0        0         0   physWorld initStep
    1     29.2    -27.2     28.2  2.76e-06        0      144       144   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5708884604299285
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     28.9    -27.2       28  2.76e-06        0     0.45       144   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3       27      -27     26.8  2.76e-06        0     2.27       146   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     26.8      -27     26.7  2.76e-06        0    0.201       146 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     26.8      -27     26.7  2.76e-06        0        0       146   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     26.8    -27.2     26.5  2.76e-06        0    0.201       147   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7       27    -29.7     24.9  2.76e-06        0     3.04       150   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -18.3     -500     -338  2.76e-06        0      596       745  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 36
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 33
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 40
Photon Angle == 0.5708884604299285
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      185     21.1      100  2.76e-06        0        0         0   physWorld initStep
    1     34.2     21.1     13.1  2.76e-06        0      174       174   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.463405483884356
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.9     20.9       12  2.76e-06        0      2.5       176   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     31.8     20.9       12  2.76e-06        0    0.139       176 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     25.8     23.9     5.89  2.76e-06        0     9.07       185 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     25.8     23.9     5.89  2.76e-06        0        0       185 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     6.48       27    -4.59  2.76e-06        0     22.2       208 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7     6.48       27    -4.59  2.76e-06        0        0       208 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -8.77     23.8    -8.12  2.76e-06        0       16       224 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    9    -8.77     23.8    -8.12  2.76e-06        0        0       224 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -20.9     15.2    -7.31  2.76e-06        0     14.9       239 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   11    -20.9     15.2    -7.31  2.76e-06        0        0       239 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12    -29.9     1.17    -1.61  2.76e-06        0     17.6       256 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   13    -29.9     1.17    -1.61  2.76e-06        0        0       256 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14    -33.9    -17.3     11.1  2.76e-06        0     22.8       279   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   15    -33.9    -17.4     11.2  2.76e-06        0    0.129       279   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   16    -35.2    -19.2       12  2.76e-06        0     2.39       281   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   17     -329     -500      270  2.76e-06        0      619       901  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 37
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 38
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 45
Photon Angle == 0.463405483884356
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      190    -7.35      100  2.76e-06        0        0         0   physWorld initStep
    1     39.5    -7.35     13.2  2.76e-06        0      174       174   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4557095389043511
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.4     -7.3     12.2  2.76e-06        0     2.26       176   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.3     -7.3     12.2  2.76e-06        0    0.118       176 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4       13    -10.1      -10  2.76e-06 2.76e-06     33.1       209    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 38
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 4
No. of Photons Reflected == 38
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 45
Photon Angle == 0.4557095389043511
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      169       23      100  2.76e-06        0        0         0   physWorld initStep
    1     32.9       23     21.3  2.76e-06        0      157       157   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4656219254503609
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.6     22.7     20.2  2.76e-06        0     2.57       160   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.5     22.7     20.1  2.76e-06        0    0.145       160 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4     30.5     22.7     20.1  2.76e-06        0        0       160   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     30.5     22.9       20  2.76e-06        0    0.145       160   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     31.4       25     18.9  2.76e-06        0     2.57       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      173      500     -267  2.76e-06        0      572       735  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 39
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 39
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 46
Photon Angle == 0.4656219254503609
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      145     19.5      100  2.76e-06        0        0         0   physWorld initStep
    1     29.3     19.5       33  2.76e-06        0      134       134   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5771793663334428
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.4     19.4     31.8  2.76e-06        0     2.26       136 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 40
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 39
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 47
Photon Angle == 0.5771793663334428
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      148    -21.7      100  2.76e-06        0        0         0   physWorld initStep
    1     29.7    -21.7     31.6  2.76e-06        0      137       137   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5744252622086305
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.8    -21.5     30.4  2.76e-06        0     2.28       139 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     21.5    -22.9       28  2.76e-06        0     6.85       146 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -21    -31.8     12.1  2.76e-06        0     46.2       192   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -21.1    -31.8     12.1  2.76e-06        0     0.12       192   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6      -23    -32.9     11.6  2.76e-06        0     2.28       195   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500     -267     -129  2.76e-06        0      550       744  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 41
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 39
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 48
Photon Angle == 0.5744252622086305
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      185      -15      100  2.76e-06        0        0         0   physWorld initStep
    1     37.2      -15     14.6  2.76e-06        0      171       171   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4586663394748096
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.1    -14.9     13.6  2.76e-06        0     2.35       173   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       35    -14.9     13.5  2.76e-06        0    0.126       173 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     9.89    -21.7      -10  2.76e-06 2.76e-06     35.1       208    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 42
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 5
No. of Photons Reflected == 39
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 48
Photon Angle == 0.4586663394748096
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      161     25.5      100  2.76e-06        0        0         0   physWorld initStep
    1       31     25.5     25.2  2.76e-06        0      150       150   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4693742005882577
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     28.6     25.2       24  2.76e-06        0     2.67       152   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     28.5     25.2       24  2.76e-06        0    0.155       152 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     28.5     25.2       24  2.76e-06        0        0       152   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     28.5     25.3     23.9  2.76e-06        0    0.155       153   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     29.1     27.7     22.7  2.76e-06        0     2.67       155   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     87.3      500     -252  2.76e-06        0      550       705  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 43
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 40
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 49
Photon Angle == 0.4693742005882577
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      199       25      100  2.76e-06        0        0         0   physWorld initStep
    1     7.48       25    -10.6  2.76e-06 2.76e-06      221       221    absorber Transportation
THE INCIDENT ANGLE IS G 83:  0.5235987755982987
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 44
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 5
No. of Photons Reflected == 40
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 49
Photon Angle == 0.5235987755982987
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      198     22.8      100  2.76e-06        0        0         0   physWorld initStep
    1     23.5     22.8   -0.516  2.76e-06        0      201       201   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3190551443857768
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     20.4     22.2    -1.35  2.76e-06        0     3.25       204   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    3     20.4     22.2    -1.35  2.76e-06        0        0       204   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     19.1     23.5       -4  2.76e-06        0     3.25       208   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -426      184     -500  2.76e-06        0      685       893  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 45
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 41
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 50
Photon Angle == 0.3190551443857768
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      158    -23.9      100  2.76e-06        0        0         0   physWorld initStep
    1     32.3    -23.9     27.6  2.76e-06        0      145       145   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4668391801371485
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       30    -23.6     26.4  2.76e-06        0      2.6       147   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     29.8    -23.6     26.4  2.76e-06        0    0.148       148 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     18.6    -33.2       13  2.76e-06        0     19.9       167   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    5     18.6    -33.2       13  2.76e-06        0        0       167 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     14.5    -34.5     9.15  2.76e-06        0      5.8       173 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7     14.5    -34.5     9.15  2.76e-06        0        0       173 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -17.6    -24.9   -0.789  2.76e-06        0     34.9       208 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    9    -17.6    -24.9   -0.789  2.76e-06        0        0       208 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -34.7     1.93     5.35  2.76e-06        0     32.4       241 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   11    -34.7     1.93     5.35  2.76e-06        0        0       241 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12    -33.5       18     17.6  2.76e-06        0     20.3       261   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13    -33.6     18.2     17.7  2.76e-06        0    0.141       261   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   14    -34.7     20.2     18.7  2.76e-06        0     2.52       264   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   15     -255      500      285  2.76e-06        0      591       855  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 46
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 45
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 54
Photon Angle == 0.4668391801371485
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      195     6.48      100  2.76e-06        0        0         0   physWorld initStep
    1     39.6     6.48     10.5  2.76e-06        0      179       179   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4555211690158698
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.1     6.42     9.24  2.76e-06        0     2.85       182   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     37.1     6.42     9.24  2.76e-06        0        0       182   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     36.6      6.8     5.85  2.76e-06        0     3.44       185   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     36.6      6.8     5.85  2.76e-06        0 5.25e-15       185   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     33.5     6.69     4.34  2.76e-06        0     3.44       189   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     33.5     6.69     4.34  2.76e-06        0        0       189   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8       33      7.1    0.956  2.76e-06        0     3.44       192   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9       33      7.1    0.956  2.76e-06        0        0       192   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     29.9     6.95   -0.545  2.76e-06        0     3.44       196   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11     29.9     6.95   -0.545  2.76e-06        0        0       196   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     29.5      7.4    -3.92  2.76e-06        0     3.44       199   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   13     29.5      7.4    -3.92  2.76e-06        0 1.29e-14       199   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14     26.4      7.2    -5.41  2.76e-06        0     3.44       203   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   15     26.4      7.2    -5.41  2.76e-06        0        0       203   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   16     25.8      7.7    -8.78  2.76e-06        0     3.44       206   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   17     25.8      7.7    -8.78  2.76e-06        0        0       206   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   18     23.3     7.48      -10  2.76e-06 2.76e-06     2.84       209    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 47
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 5
No. of Photons Reflected == 53
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 62
Photon Angle == 0.4555211690158698
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      177     23.4      100  2.76e-06        0        0         0   physWorld initStep
    1     32.6     23.4     16.5  2.76e-06        0      167       167   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4661765927716308
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.3     23.1     15.4  2.76e-06        0     2.58       170   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.2     23.1     15.3  2.76e-06        0    0.146       170 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     23.7       28     8.02  2.76e-06        0     10.9       181 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     23.7       28     8.02  2.76e-06        0        0       181 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -9.82     28.3    -1.49  2.76e-06        0     34.8       215 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -9.82     28.3    -1.49  2.76e-06        0        0       215 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -34.3     6.96     5.59  2.76e-06        0     33.2       249 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    9    -34.3     6.96     5.59  2.76e-06        0        0       249 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -37.2     -7.8     17.8  2.76e-06        0     19.4       268   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11    -37.3    -7.89     17.9  2.76e-06        0    0.142       268   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   12      -39    -9.46     18.9  2.76e-06        0     2.53       271   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13     -473     -500      368  2.76e-06        0      742  1.01e+03  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 48
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 56
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 65
Photon Angle == 0.4661765927716308
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      167     35.9      100  2.76e-06        0        0         0   physWorld initStep
    1       18     35.9     14.2  2.76e-06        0      172       172   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.5132560533887398
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     14.9     35.1     12.7  2.76e-06        0     3.54       175   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     14.6     35.1     12.5  2.76e-06        0    0.343       175 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     14.6     35.1     12.5  2.76e-06        0        0       175   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     14.4     35.3     12.3  2.76e-06        0    0.343       176   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     12.8     38.1     10.8  2.76e-06        0     3.54       179   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -445      500     -365  2.76e-06        0      751       930  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 49
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 57
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 66
Photon Angle == 0.5132560533887398
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      164     18.2      100  2.76e-06        0        0         0   physWorld initStep
    1     35.8     18.2     26.2  2.76e-06        0      148       148   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4607640490017717
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.6       18     25.1  2.76e-06        0     2.42       150   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     33.5       18       25  2.76e-06        0    0.131       150 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4      4.4     28.6    -2.96  2.76e-06        0     41.8       192 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5      4.4     28.6    -2.96  2.76e-06        0        0       192 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -25.3     8.34    -6.23  2.76e-06        0     36.1       228 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -25.3     8.34    -6.23  2.76e-06        0        0       228 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8      -24    -29.5       18  2.76e-06        0       45       273   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -24.1    -29.6     18.1  2.76e-06        0    0.122       273   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    -24.7    -31.7     18.9  2.76e-06        0     2.31       275   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     -129     -500      230  2.76e-06        0      524       800  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 50
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 59
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 68
Photon Angle == 0.4607640490017717
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      185    -13.5      100  2.76e-06        0        0         0   physWorld initStep
    1     37.8    -13.5     15.2  2.76e-06        0      170       170   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4578445691350508
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.7    -13.3     14.2  2.76e-06        0     2.33       172   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     35.6    -13.3     14.1  2.76e-06        0    0.123       172 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     9.58    -19.4      -10  2.76e-06 2.76e-06       36       208    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 51
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 5
No. of Photons Reflected == 59
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 68
Photon Angle == 0.4578445691350508
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      182     18.1      100  2.76e-06        0        0         0   physWorld initStep
    1     35.8     18.1     15.9  2.76e-06        0      168       168   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4607248463953701
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.7     17.9     14.8  2.76e-06        0     2.42       171   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     33.6     17.9     14.8  2.76e-06        0    0.131       171 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4       15     24.7    -3.06  2.76e-06        0     26.6       197 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5       15     24.7    -3.06  2.76e-06        0        0       197 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -2.55     22.4      -10  2.76e-06 2.76e-06       19       216    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 52
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 5
No. of Photons Reflected == 60
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 69
Photon Angle == 0.4607248463953701
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      172     8.63      100  2.76e-06        0        0         0   physWorld initStep
    1     39.2     8.63     23.4  2.76e-06        0      153       153   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4560336586813989
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.2     8.57     22.5  2.76e-06        0     2.27       155   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.1     8.57     22.4  2.76e-06        0    0.119       155 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     1.53     13.4      -10  2.76e-06 2.76e-06     48.3       204    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 53
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 5
No. of Photons Reflected == 60
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 69
Photon Angle == 0.4560336586813989
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      164     36.9      100  2.76e-06        0        0         0   physWorld initStep
    1     15.9     36.9     14.2  2.76e-06        0      172       172   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.525413036207798
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     12.7       36     12.6  2.76e-06        0      3.7       175   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     12.3       36     12.3  2.76e-06        0     0.46       176 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     12.3       36     12.3  2.76e-06        0        0       176   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     11.9     36.2     12.1  2.76e-06        0     0.46       176   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     9.95     38.9     10.5  2.76e-06        0      3.7       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500      432     -361  2.76e-06        0      744       923  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 54
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 61
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 70
Photon Angle == 0.525413036207798
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      146     -5.1      100  2.76e-06        0        0         0   physWorld initStep
    1     32.7     -5.1     34.8  2.76e-06        0      130       130   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.571367597052808
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       31    -5.07     33.6  2.76e-06        0     2.13       133 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     16.7    -5.66       28  2.76e-06        0     15.4       148 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -35.4    -7.84      7.5  2.76e-06        0       56       204 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -35.4    -7.84      7.5  2.76e-06        0        0       204 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -18.6    0.511       28  2.76e-06        0     27.8       232 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -5.88     6.86     43.6  2.76e-06        0     21.1       253   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     -5.1     7.44     45.6  2.76e-06        0     2.25       255   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      209      147      500  2.76e-06        0      521       776  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 55
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 62
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 72
Photon Angle == 0.571367597052808
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      170     12.7      100  2.76e-06        0        0         0   physWorld initStep
    1     38.1     12.7     23.8  2.76e-06        0      152       152   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4574890925391473
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       36     12.6     22.7  2.76e-06        0     2.32       155   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     35.9     12.6     22.7  2.76e-06        0    0.122       155 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     0.52     20.2      -10  2.76e-06 2.76e-06     48.8       204    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 56
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 5
No. of Photons Reflected == 62
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 72
Photon Angle == 0.4574890925391473
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      162     11.2      100  2.76e-06        0        0         0   physWorld initStep
    1     38.2     11.2     28.4  2.76e-06        0      143       143   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.550915500717184
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.5     11.2       28  2.76e-06        0    0.763       144   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     36.5     11.1     27.4  2.76e-06        0     1.24       145   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     36.4     11.1     27.3  2.76e-06        0    0.131       145 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     9.47     19.6      -10  2.76e-06 2.76e-06     46.7       192    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 57
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 5
No. of Photons Reflected == 62
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 72
Photon Angle == 0.550915500717184
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      177     29.2      100  2.76e-06        0        0         0   physWorld initStep
    1     27.6     29.2     13.9  2.76e-06        0      172       172   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4774908565616998
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       25     28.8     12.7  2.76e-06        0     2.87       175   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     24.9     28.8     12.6  2.76e-06        0     0.18       175 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     24.9     28.8     12.6  2.76e-06        0        0       175   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     24.8       29     12.5  2.76e-06        0     0.18       175   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     24.8     31.5     11.2  2.76e-06        0     2.87       178   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -44.7      500     -262  2.76e-06        0      547       725  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 58
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 63
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 73
Photon Angle == 0.4774908565616998
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      154     2.59      100  2.76e-06        0        0         0   physWorld initStep
    1     36.4     2.59     31.9  2.76e-06        0      136       136   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5595436176454904
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     34.6     2.58     30.8  2.76e-06        0     2.07       138 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 59
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 63
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 74
Photon Angle == 0.5595436176454904
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      173     29.2      100  2.76e-06        0        0         0   physWorld initStep
    1     27.5     29.2     15.7  2.76e-06        0      169       169   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4775856419731985
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       25     28.8     14.5  2.76e-06        0     2.88       171   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     24.8     28.8     14.4  2.76e-06        0     0.18       172 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     24.8     28.8     14.4  2.76e-06        0        0       172   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     24.8       29     14.3  2.76e-06        0     0.18       172   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     24.8     31.6       13  2.76e-06        0     2.88       175   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      -46      500     -260  2.76e-06        0      547       722  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 60
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 64
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 75
Photon Angle == 0.4775856419731985
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      171    -16.2      100  2.76e-06        0        0         0   physWorld initStep
    1     36.7    -16.2     22.6  2.76e-06        0      155       155   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4593817872454853
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.6    -16.1     21.6  2.76e-06        0     2.38       157   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.5    -16.1     21.5  2.76e-06        0    0.128       157 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     3.54    -25.4    -7.66  2.76e-06        0     43.6       201 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     3.54    -25.4    -7.66  2.76e-06        0        0       201 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -12.4    -14.5      -10  2.76e-06 2.76e-06     19.5       220    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 61
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 6
No. of Photons Reflected == 65
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 76
Photon Angle == 0.4593817872454853
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      179     17.3      100  2.76e-06        0        0         0   physWorld initStep
    1     36.3     17.3     17.8  2.76e-06        0      164       164   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4600964794983509
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.1     17.1     16.8  2.76e-06        0      2.4       167   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       34     17.1     16.7  2.76e-06        0     0.13       167 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     10.5     24.9    -5.64  2.76e-06        0     33.4       200 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     10.5     24.9    -5.64  2.76e-06        0        0       200 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     -3.8     20.6      -10  2.76e-06 2.76e-06     15.6       216    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 62
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 6
No. of Photons Reflected == 66
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 77
Photon Angle == 0.4600964794983509
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      177     4.56      100  2.76e-06        0        0         0   physWorld initStep
    1     39.9     4.56     20.9  2.76e-06        0      158       158   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4551970784610408
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.9     4.53     19.9  2.76e-06        0     2.24       160   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.8     4.53     19.8  2.76e-06        0    0.116       161 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     4.82     6.82      -10  2.76e-06 2.76e-06     44.5       205    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 63
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 6
No. of Photons Reflected == 66
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 77
Photon Angle == 0.4551970784610408
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      200     1.53      100  2.76e-06        0        0         0   physWorld initStep
    1     37.1     1.53     5.74  2.76e-06        0      189       189   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3098253111393965
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.5     1.51     4.91  2.76e-06        0     2.71       191   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.4     1.51     4.85  2.76e-06        0     0.13       191 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     34.4     1.51     4.85  2.76e-06        0        0       191   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     34.4     1.51     4.72  2.76e-06        0    0.128       191   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     34.5     1.61     2.02  2.76e-06        0      2.7       194   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -53.4     17.1     -500  2.76e-06        0      510       704  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 64
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 67
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 78
Photon Angle == 0.3098253111393965
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      173     29.3      100  2.76e-06        0        0         0   physWorld initStep
    1     27.5     29.3     16.3  2.76e-06        0      167       167   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  1.515682858833511
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     27.5     29.3     16.3  2.76e-06        0        0       167   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3    -2.53      500     -256  2.76e-06        0      545       712  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 65
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 68
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 79
Photon Angle == 1.515682858833511
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      157     32.1      100  2.76e-06        0        0         0   physWorld initStep
    1     24.1     32.1     23.4  2.76e-06        0      153       153   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.487613712854511
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     21.4     31.6     22.1  2.76e-06        0     3.09       156   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     21.2     31.6       22  2.76e-06        0    0.214       156 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     21.2     31.6       22  2.76e-06        0        0       156   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     21.2     31.8     21.9  2.76e-06        0    0.214       157   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     20.6     34.5     20.5  2.76e-06        0     3.09       160   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -169      500     -270  2.76e-06        0      581       740  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 66
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 69
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 80
Photon Angle == 0.487613712854511
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      183     18.5      100  2.76e-06        0        0         0   physWorld initStep
    1     35.7     18.5     14.7  2.76e-06        0      171       171   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4610104219008515
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.5     18.3     13.7  2.76e-06        0     2.43       173   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     33.4     18.3     13.6  2.76e-06        0    0.132       173 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     17.7     24.2     -1.5  2.76e-06        0     22.6       196 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     17.7     24.2     -1.5  2.76e-06        0        0       196 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6   -0.942     23.5      -10  2.76e-06 2.76e-06     20.5       216    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 67
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 6
No. of Photons Reflected == 70
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 81
Photon Angle == 0.4610104219008515
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      164       15      100  2.76e-06        0        0         0   physWorld initStep
    1     37.2       15     26.7  2.76e-06        0      147       147   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4586768077731649
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.1     14.9     25.6  2.76e-06        0     2.35       149   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       35     14.9     25.6  2.76e-06        0    0.126       149 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4    -1.69     24.8    -8.76  2.76e-06        0     51.2       200 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -1.69     24.8    -8.76  2.76e-06        0        0       200 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -24.8    -2.05    -8.76  2.76e-06        0     35.4       236 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -24.8    -2.05    -8.76  2.76e-06        0        0       236 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -9.48    -36.8     25.6  2.76e-06        0     51.2       287   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -9.47      -37     25.6  2.76e-06        0    0.126       287   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    -9.28    -39.1     26.6  2.76e-06        0     2.35       290   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     60.7     -500      296  2.76e-06        0      538       828  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 68
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 72
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 83
Photon Angle == 0.4586768077731649
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      173      -36      100  2.76e-06        0        0         0   physWorld initStep
    1     17.7      -36     10.3  2.76e-06        0      179       179   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.5147817477250123
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     10.9    -34.3     6.89  2.76e-06        0     7.86       187   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     10.9    -34.3     6.89  2.76e-06        0        0       187   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     4.15    -34.2     1.88  2.76e-06        0      8.4       196   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     4.15    -34.2     1.88  2.76e-06        0        0       196   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -3.81    -30.2   -0.938  2.76e-06        0     9.33       205   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7    -3.81    -30.2   -0.938  2.76e-06        0        0       205   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -11.5    -27.7    -4.48  2.76e-06        0     8.88       214   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9    -11.5    -27.7    -4.48  2.76e-06        0 1.09e-14       214   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -26.1    -12.5    -5.96  2.76e-06        0     21.1       235   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11    -26.1    -12.5    -5.96  2.76e-06        0        0       235   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12    -28.5    -3.52    -3.36  2.76e-06        0     9.64       245   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   13    -28.5    -3.52    -3.36  2.76e-06        0        0       245   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14    -31.8     5.79    -1.12  2.76e-06        0     10.1       255   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   15    -31.8     5.79    -1.12  2.76e-06        0        0       255   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   16    -30.9       13     3.39  2.76e-06        0     8.53       263   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   17    -30.9       13     3.39  2.76e-06        0        0       263   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   18    -31.5     21.2     6.88  2.76e-06        0     8.91       272   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   19    -31.5     21.2     6.88  2.76e-06        0        0       272   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   20    -29.1     27.6     13.1  2.76e-06        0     9.27       281   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   21    -29.1     27.6     13.1  2.76e-06        0        0       281   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   22    -23.5       30     18.6  2.76e-06        0     8.23       290   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   23    -23.5       30     18.6  2.76e-06        0 1.57e-14       290   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   24    -19.8     34.9     24.1  2.76e-06        0     8.23       298   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   25    -19.8     34.9     24.1  2.76e-06        0        0       298   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   26    -15.5     35.4       28  2.76e-06        0     5.84       304   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
   27    -12.8     35.7     30.4  2.76e-06        0     3.62       307   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   28    -12.8     35.7     30.4  2.76e-06        0        0       307   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
ABSORPTION OCCURED!!!!!!!!!
   29    -6.43       33     31.8  2.76e-06        0     7.09       314 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 69
Energy Deposited == 0
No. of Photons Absorbed == 7
No. of Photons Reflected == 85
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 97
Photon Angle == 0.5147817477250123
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      210   -0.861      100  2.76e-06        0        0         0   physWorld initStep
    1     30.6   -0.861    -3.65  2.76e-06        0      207       207   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3098339738494844
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       28   -0.846    -4.47  2.76e-06        0     2.71       210   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     27.9   -0.846     -4.5  2.76e-06        0   0.0481       210 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     27.9   -0.846     -4.5  2.76e-06        0        0       210   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     27.9   -0.847    -4.54  2.76e-06        0   0.0475       210   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       28   -0.914    -7.24  2.76e-06        0      2.7       213   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    7       28   -0.914    -7.24  2.76e-06        0        0       213   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     25.5   -0.893    -8.05  2.76e-06        0      2.7       215   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     25.4   -0.893    -8.06  2.76e-06        0   0.0168       216 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   10     25.4   -0.893    -8.06  2.76e-06        0        0       216   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11     25.4   -0.893    -8.07  2.76e-06        0   0.0166       216   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   12     25.5   -0.946      -10  2.76e-06 2.76e-06     1.93       217    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 70
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 7
No. of Photons Reflected == 88
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 100
Photon Angle == 0.3098339738494844
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      186    -35.4      100  2.76e-06        0        0         0   physWorld initStep
    1     -500    -35.4     -296  2.76e-06        0      792       792  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.5235987755982987
TRACK ID == 1
THE CURRENT EVENTID IS == 71
Energy Deposited == 0
No. of Photons Absorbed == 7
No. of Photons Reflected == 88
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 100
Photon Angle == 0.5235987755982987
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      157     33.4      100  2.76e-06        0        0         0   physWorld initStep
    1     22.2     33.4     22.2  2.76e-06        0      156       156   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4945301959478599
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     19.4     32.9     20.8  2.76e-06        0     3.23       159   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     19.2     32.9     20.6  2.76e-06        0    0.241       159 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     19.2     32.9     20.6  2.76e-06        0        0       159   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     19.1     33.1     20.5  2.76e-06        0    0.241       159   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     18.2     35.8     19.1  2.76e-06        0     3.23       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -245      500     -289  2.76e-06        0      616       779  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 72
Energy Deposited == 0
No. of Photons Absorbed == 7
No. of Photons Reflected == 89
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 101
Photon Angle == 0.4945301959478599
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      149    -22.9      100  2.76e-06        0        0         0   physWorld initStep
    1     29.6    -22.9     30.9  2.76e-06        0      138       138   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5737666109918345
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.7    -22.7     29.7  2.76e-06        0     2.29       140 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 73
Energy Deposited == 0
No. of Photons Absorbed == 8
No. of Photons Reflected == 89
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 102
Photon Angle == 0.5737666109918345
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      137     3.94      100  2.76e-06        0        0         0   physWorld initStep
    1     29.1     3.94     37.5  2.76e-06        0      125       125   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5833434506969
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.3     3.92     36.3  2.76e-06        0     2.19       127 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 74
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 89
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 103
Photon Angle == 0.5833434506969
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      166     36.1      100  2.76e-06        0        0         0   physWorld initStep
    1     17.5     36.1     14.1  2.76e-06        0      172       172   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.5157890639085299
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     14.4     35.3     12.5  2.76e-06        0     3.57       175   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     14.1     35.3     12.3  2.76e-06        0    0.362       176 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     14.1     35.3     12.3  2.76e-06        0        0       176   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     13.9     35.5     12.2  2.76e-06        0    0.362       176   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     12.2     38.3     10.6  2.76e-06        0     3.57       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -473      500     -376  2.76e-06        0      773       953  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 75
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 90
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 104
Photon Angle == 0.5157890639085299
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      177     35.4      100  2.76e-06        0        0         0   physWorld initStep
    1     -500     35.4     -291  2.76e-06        0      781       781  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.5235987755982987
TRACK ID == 1
THE CURRENT EVENTID IS == 76
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 90
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 104
Photon Angle == 0.5235987755982987
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      154    -10.3      100  2.76e-06        0        0         0   physWorld initStep
    1     35.5    -10.3     31.4  2.76e-06        0      137       137   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5607170319922594
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     33.7    -10.2     30.3  2.76e-06        0      2.1       139 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 77
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 90
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 105
Photon Angle == 0.5607170319922594
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      186       11      100  2.76e-06        0        0         0   physWorld initStep
    1     38.6       11       15  2.76e-06        0      170       170   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4567914182982724
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.6     10.9       14  2.76e-06        0     2.29       172   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.5     10.9       14  2.76e-06        0    0.121       172 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     10.3     15.6      -10  2.76e-06 2.76e-06     35.8       208    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 78
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 10
No. of Photons Reflected == 90
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 105
Photon Angle == 0.4567914182982724
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      171     20.8      100  2.76e-06        0        0         0   physWorld initStep
    1     34.4     20.8     21.3  2.76e-06        0      157       157   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.463108436288437
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.1     20.6     20.2  2.76e-06        0     2.49       160   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       32     20.6     20.1  2.76e-06        0    0.138       160 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4       32     20.6     20.1  2.76e-06        0        0       160   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     32.1     20.7     20.1  2.76e-06        0    0.138       160   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     33.2     22.6       19  2.76e-06        0     2.49       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      251      500     -284  2.76e-06        0      606       769  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 79
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 91
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 106
Photon Angle == 0.463108436288437
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      209    -10.5      100  2.76e-06        0        0         0   physWorld initStep
    1     28.2    -10.5     -4.3  2.76e-06        0      209       209   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3091072112509896
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.5    -10.3    -5.13  2.76e-06        0     2.83       211   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     25.5    -10.3    -5.16  2.76e-06        0   0.0489       211 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     25.5    -10.3    -5.16  2.76e-06        0        0       211   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     25.5    -10.3     -5.2  2.76e-06        0   0.0482       212   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     25.3    -11.1     -7.9  2.76e-06        0     2.82       214   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -133     -132     -500  2.76e-06        0      531       745  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 80
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 92
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 107
Photon Angle == 0.3091072112509896
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      159      -27      100  2.76e-06        0        0         0   physWorld initStep
    1     29.7      -27     25.2  2.76e-06        0      150       150   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4722273626213846
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.3    -26.7     23.9  2.76e-06        0     2.74       152   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     27.1    -26.7     23.9  2.76e-06        0    0.164       153 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     27.1    -26.7     23.9  2.76e-06        0        0       153   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     27.1    -26.8     23.8  2.76e-06        0    0.164       153   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     27.5    -29.3     22.6  2.76e-06        0     2.74       156   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     35.2     -500     -249  2.76e-06        0      544       699  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 81
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 93
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 108
Photon Angle == 0.4722273626213846
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      174     10.1      100  2.76e-06        0        0         0   physWorld initStep
    1     38.9     10.1     21.9  2.76e-06        0      156       156   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4564729129771217
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.8       10     20.9  2.76e-06        0     2.28       158   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.7       10     20.9  2.76e-06        0     0.12       159 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     2.96     15.5      -10  2.76e-06 2.76e-06     46.1       205    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 82
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 10
No. of Photons Reflected == 93
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 108
Photon Angle == 0.4564729129771217
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      172    -15.8      100  2.76e-06        0        0         0   physWorld initStep
    1     36.9    -15.8     22.2  2.76e-06        0      156       156   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4591118120229716
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.8    -15.6     21.2  2.76e-06        0     2.37       158   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.7    -15.6     21.1  2.76e-06        0    0.127       158 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     3.05    -24.8     -8.6  2.76e-06        0     44.4       202 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     3.05    -24.8     -8.6  2.76e-06        0        0       202 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -6.63    -17.9      -10  2.76e-06 2.76e-06       12       214    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 83
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 10
No. of Photons Reflected == 94
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 109
Photon Angle == 0.4591118120229716
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      144     21.2      100  2.76e-06        0        0         0   physWorld initStep
    1     28.1     21.2       33  2.76e-06        0      134       134   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5803638915939091
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.2     21.1     31.8  2.76e-06        0      2.3       136 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     26.2     21.1     31.8  2.76e-06        0        0       136   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     26.3     22.6     33.5  2.76e-06        0      2.3       139   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     11.9      453      500  2.76e-06        0      635       773  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 84
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 95
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 110
Photon Angle == 0.5803638915939091
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      180      -26      100  2.76e-06        0        0         0   physWorld initStep
    1     30.6      -26     13.7  2.76e-06        0      173       173   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4703296452116152
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     28.2    -25.7     12.5  2.76e-06        0      2.7       175   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       28    -25.7     12.4  2.76e-06        0    0.158       176 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4       28    -25.7     12.4  2.76e-06        0        0       176   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5       28    -25.9     12.3  2.76e-06        0    0.158       176   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     28.5    -28.2     11.1  2.76e-06        0      2.7       178   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     68.9     -500     -262  2.76e-06        0      547       725  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 85
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 96
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 111
Photon Angle == 0.4703296452116152
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      211     2.05      100  2.76e-06        0        0         0   physWorld initStep
    1     29.7     2.05    -4.75  2.76e-06        0      209       209   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3097964852421389
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.1     2.01    -5.58  2.76e-06        0     2.71       212   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     27.1     2.01    -5.59  2.76e-06        0   0.0387       212 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     27.1     2.01    -5.59  2.76e-06        0        0       212   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     27.1     2.01    -5.63  2.76e-06        0   0.0382       212   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     27.2     2.17    -8.33  2.76e-06        0      2.7       215   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -60.7     27.7     -500  2.76e-06        0      500       715  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 86
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 97
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 112
Photon Angle == 0.3097964852421389
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      152    -25.5      100  2.76e-06        0        0         0   physWorld initStep
    1     29.4    -25.5     29.4  2.76e-06        0      141       141   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5722279419899259
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.4    -25.3     28.2  2.76e-06        0     2.33       143 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 87
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 97
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 113
Photon Angle == 0.5722279419899259
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      200    -23.6      100  2.76e-06        0        0         0   physWorld initStep
    1     17.4    -23.6    -5.43  2.76e-06        0      211       211   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3398620371964998
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     14.1    -22.7    -6.21  2.76e-06        0     3.47       214   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     14.1    -22.7    -6.21  2.76e-06        0        0       214   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     12.2    -24.1    -8.77  2.76e-06        0     3.46       218   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -500     -110     -407  2.76e-06        0      654       872  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 88
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 98
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 114
Photon Angle == 0.3398620371964998
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      183    -15.6      100  2.76e-06        0        0         0   physWorld initStep
    1       37    -15.6     15.4  2.76e-06        0      169       169   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4590266942230081
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.9    -15.5     14.4  2.76e-06        0     2.37       171   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.8    -15.5     14.3  2.76e-06        0    0.127       172 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     9.83    -22.6    -9.06  2.76e-06        0     34.9       207 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     9.83    -22.6    -9.06  2.76e-06        0        0       207 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     7.14    -21.9      -10  2.76e-06 2.76e-06     2.95       209    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 89
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 11
No. of Photons Reflected == 99
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 115
Photon Angle == 0.4590266942230081
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      188      -17      100  2.76e-06        0        0         0   physWorld initStep
    1     36.4      -17     12.4  2.76e-06        0      175       175   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4599366579512223
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.2    -16.9     11.4  2.76e-06        0      2.4       178   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.1    -16.9     11.3  2.76e-06        0    0.129       178 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     19.1    -21.8    -2.94  2.76e-06        0     21.3       199 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     19.1    -21.8    -2.94  2.76e-06        0        0       199 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     6.92    -22.5      -10  2.76e-06 2.76e-06     14.1       213    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 90
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 11
No. of Photons Reflected == 100
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 116
Photon Angle == 0.4599366579512223
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      144    -14.7      100  2.76e-06        0        0         0   physWorld initStep
    1     30.2    -14.7     34.4  2.76e-06        0      131       131   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5769741965527477
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     28.3    -14.6     33.2  2.76e-06        0     2.21       133 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 91
Energy Deposited == 0
No. of Photons Absorbed == 12
No. of Photons Reflected == 100
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 117
Photon Angle == 0.5769741965527477
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      195    -5.46      100  2.76e-06        0        0         0   physWorld initStep
    1     39.8    -5.46     10.4  2.76e-06        0      179       179   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4553343247279944
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.1    -5.41     9.05  2.76e-06        0     2.99       182   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     37.1    -5.41     9.05  2.76e-06        0        0       182   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     36.7    -5.73     5.67  2.76e-06        0     3.43       186   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    5     36.7    -5.73     5.67  2.76e-06        0 1.05e-14       186   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     33.6    -5.64     4.16  2.76e-06        0     3.43       189   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     33.6    -5.64     4.16  2.76e-06        0        0       189   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     33.1    -5.99    0.782  2.76e-06        0     3.43       193   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    9     33.1    -5.99    0.782  2.76e-06        0        0       193   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     30.1    -5.86   -0.716  2.76e-06        0     3.43       196   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11     30.1    -5.86   -0.716  2.76e-06        0        0       196   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     29.6    -6.25    -4.09  2.76e-06        0     3.43       199   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13     25.3    -6.57    -10.5  2.76e-06 2.76e-06     7.73       207    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 92
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 12
No. of Photons Reflected == 105
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 122
Photon Angle == 0.4553343247279944
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      156    -27.5      100  2.76e-06        0        0         0   physWorld initStep
    1     29.2    -27.5     26.6  2.76e-06        0      147       147   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4733639908287501
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.7    -27.2     25.3  2.76e-06        0     2.77       150   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     26.6    -27.2     25.2  2.76e-06        0    0.167       150 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     26.6    -27.2     25.2  2.76e-06        0        0       150   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.6    -27.3     25.2  2.76e-06        0    0.167       150   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     26.9    -29.8     23.9  2.76e-06        0     2.77       153   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     16.4     -500     -248  2.76e-06        0      543       696  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 93
Energy Deposited == 0
No. of Photons Absorbed == 12
No. of Photons Reflected == 106
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 123
Photon Angle == 0.4733639908287501
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      171    -32.7      100  2.76e-06        0        0         0   physWorld initStep
    1     23.3    -32.7     14.9  2.76e-06        0      170       170   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4905357408977737
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     20.5    -32.2     13.5  2.76e-06        0     3.15       173   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     20.3    -32.2     13.4  2.76e-06        0    0.225       174 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     20.3    -32.2     13.4  2.76e-06        0        0       174   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     20.2    -32.3     13.3  2.76e-06        0    0.225       174   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     19.5    -35.1     11.9  2.76e-06        0     3.15       177   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -202     -500     -285  2.76e-06        0      595       771  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 94
Energy Deposited == 0
No. of Photons Absorbed == 12
No. of Photons Reflected == 107
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 124
Photon Angle == 0.4905357408977737
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      148    -11.9      100  2.76e-06        0        0         0   physWorld initStep
    1     32.8    -11.9     33.3  2.76e-06        0      133       133   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5692462124325135
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       31    -11.9     32.1  2.76e-06        0     2.15       136 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 95
Energy Deposited == 0
No. of Photons Absorbed == 13
No. of Photons Reflected == 107
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 125
Photon Angle == 0.5692462124325135
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      176     11.3      100  2.76e-06        0        0         0   physWorld initStep
    1     38.5     11.3     20.7  2.76e-06        0      159       159   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4569047854904777
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.5     11.2     19.7  2.76e-06        0      2.3       161   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.4     11.2     19.7  2.76e-06        0    0.121       161 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     4.05     17.2      -10  2.76e-06 2.76e-06     44.3       205    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 96
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 13
No. of Photons Reflected == 107
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 125
Photon Angle == 0.4569047854904777
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      166    -21.6      100  2.76e-06        0        0         0   physWorld initStep
    1     33.8    -21.6     23.7  2.76e-06        0      153       153   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4640088184317577
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.6    -21.4     22.6  2.76e-06        0     2.52       155   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     31.5    -21.4     22.5  2.76e-06        0     0.14       155 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     13.5    -31.1     4.14  2.76e-06        0     27.5       183 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     13.5    -31.1     4.14  2.76e-06        0        0       183 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6      -22    -19.6    -2.18  2.76e-06        0     37.9       221 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7      -22    -19.6    -2.18  2.76e-06        0        0       221 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -35.1     14.8     14.5  2.76e-06        0     40.4       261   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -35.1     14.9     14.5  2.76e-06        0    0.123       261   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    -36.6     16.6     15.1  2.76e-06        0     2.31       263   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     -392      500      209  2.76e-06        0      630       894  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 97
Energy Deposited == 0
No. of Photons Absorbed == 13
No. of Photons Reflected == 109
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 127
Photon Angle == 0.4640088184317577
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      196     24.6      100  2.76e-06        0        0         0   physWorld initStep
    1     21.8     24.6   -0.306  2.76e-06        0      201       201   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3264524475345367
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     18.6     23.9    -1.12  2.76e-06        0     3.35       204   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     18.6     23.9    -1.12  2.76e-06        0        0       204   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     17.1     25.3    -3.74  2.76e-06        0     3.34       207   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -500      168     -493  2.76e-06        0      726       933  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 98
Energy Deposited == 0
No. of Photons Absorbed == 13
No. of Photons Reflected == 110
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 128
Photon Angle == 0.3264524475345367
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      158    -8.59      100  2.76e-06        0        0         0   physWorld initStep
    1       37    -8.59     30.4  2.76e-06        0      139       139   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5562218635351082
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     35.2    -8.54     29.3  2.76e-06        0     2.08       141 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 99
Energy Deposited == 0
No. of Photons Absorbed == 14
No. of Photons Reflected == 110
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 129
Photon Angle == 0.5562218635351082
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      158     22.5      100  2.76e-06        0        0         0   physWorld initStep
    1     33.3     22.5     27.8  2.76e-06        0      144       144   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4650312266705914
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       31     22.3     26.7  2.76e-06        0     2.55       147   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.9     22.3     26.6  2.76e-06        0    0.143       147 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     12.4     33.7     6.97  2.76e-06        0     29.3       176 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     12.4     33.7     6.97  2.76e-06        0        0       176 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6      -29     16.1     3.09  2.76e-06        0     45.1       221 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7      -29     16.1     3.09  2.76e-06        0        0       221 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -34.2    -16.7     24.8  2.76e-06        0     39.7       261   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -34.3    -16.8     24.8  2.76e-06        0    0.132       261   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    -35.6    -18.6     25.7  2.76e-06        0     2.42       264   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     -316     -500      274  2.76e-06        0      610       874  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 100
Energy Deposited == 0
No. of Photons Absorbed == 14
No. of Photons Reflected == 112
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 131
Photon Angle == 0.4650312266705914
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      201     24.5      100  2.76e-06        0        0         0   physWorld initStep
    1     8.87     24.5    -10.7  2.76e-06 2.76e-06      221       221    absorber Transportation
THE INCIDENT ANGLE IS G 83:  0.5235987755982987
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 101
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 14
No. of Photons Reflected == 112
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 131
Photon Angle == 0.5235987755982987
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      192     11.2      100  2.76e-06        0        0         0   physWorld initStep
    1     38.5     11.2     11.4  2.76e-06        0      177       177   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4568882173378546
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.5     11.2     10.4  2.76e-06        0      2.3       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.4     11.2     10.3  2.76e-06        0    0.121       180 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4     36.4     11.2     10.3  2.76e-06        0        0       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     36.5     11.2     10.3  2.76e-06        0    0.121       180   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    6     36.5     11.2     10.3  2.76e-06        0        0       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     36.4     11.2     10.2  2.76e-06        0    0.121       180 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     14.4     15.2      -10  2.76e-06 2.76e-06     30.1       210    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 102
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 14
No. of Photons Reflected == 114
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 133
Photon Angle == 0.4568882173378546
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      209     12.4      100  2.76e-06        0        0         0   physWorld initStep
    1     26.6     12.4    -5.37  2.76e-06        0      211       211   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3091642198277693
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.8     12.2    -6.21  2.76e-06        0     2.89       214   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     23.8     12.2    -6.23  2.76e-06        0   0.0416       214 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     23.8     12.2    -6.23  2.76e-06        0        0       214   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     23.8     12.2    -6.26  2.76e-06        0   0.0409       214   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     23.4     13.1    -8.96  2.76e-06        0     2.88       217   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -173      154     -500  2.76e-06        0      548       764  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 103
Energy Deposited == 0
No. of Photons Absorbed == 14
No. of Photons Reflected == 115
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 134
Photon Angle == 0.3091642198277693
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      149    -7.77      100  2.76e-06        0        0         0   physWorld initStep
    1       34    -7.77     33.3  2.76e-06        0      133       133   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5666963009902504
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     32.2    -7.73     32.2  2.76e-06        0     2.11       135 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 104
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 115
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 135
Photon Angle == 0.5666963009902504
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      161    -13.1      100  2.76e-06        0        0         0   physWorld initStep
    1     37.2    -13.1     28.8  2.76e-06        0      142       142   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5535005324184974
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.9    -13.1       28  2.76e-06        0     1.52       144   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     35.8    -13.1       28  2.76e-06        0   0.0789       144   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     35.7    -13.1     27.9  2.76e-06        0    0.134       144 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     10.9    -23.1    -7.89  2.76e-06        0     44.7       189 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    6     10.9    -23.1    -7.89  2.76e-06        0        0       189 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     4.93    -20.2      -10  2.76e-06 2.76e-06     6.91       196    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 105
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 15
No. of Photons Reflected == 116
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 136
Photon Angle == 0.5535005324184974
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      168    -6.41      100  2.76e-06        0        0         0   physWorld initStep
    1     39.6    -6.41     26.1  2.76e-06        0      148       148   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4555077547809008
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.6    -6.36     25.1  2.76e-06        0     2.25       150   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.5    -6.36     25.1  2.76e-06        0    0.117       150 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4    -1.15    -10.2      -10  2.76e-06 2.76e-06     52.3       202    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 106
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 15
No. of Photons Reflected == 116
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 136
Photon Angle == 0.4555077547809008
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      191    -17.8      100  2.76e-06        0        0         0   physWorld initStep
    1       36    -17.8     10.6  2.76e-06        0      179       179   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4604993167876348
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.2    -17.6     9.19  2.76e-06        0      3.1       182   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     33.2    -17.6     9.19  2.76e-06        0        0       182   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     32.1    -18.6     5.64  2.76e-06        0     3.84       186   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     32.1    -18.6     5.64  2.76e-06        0 5.81e-15       186   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     28.6    -18.2        4  2.76e-06        0     3.85       190   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     28.6    -18.2        4  2.76e-06        0        0       190   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     27.4    -19.2    0.517  2.76e-06        0     3.84       194   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9     27.4    -19.2    0.517  2.76e-06        0        0       194   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     23.9    -18.7    -1.06  2.76e-06        0     3.85       197   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11     23.9    -18.7    -1.06  2.76e-06        0        0       197   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     22.5    -19.8    -4.46  2.76e-06        0     3.84       201   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   13     22.5    -19.8    -4.46  2.76e-06        0 3.55e-15       201   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14     19.1      -19    -5.95  2.76e-06        0     3.85       205   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   15     19.1      -19    -5.95  2.76e-06        0        0       205   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   16     17.4    -20.1    -9.24  2.76e-06        0     3.84       209   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   17     17.4    -20.1    -9.24  2.76e-06        0 7.91e-15       209   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   18     15.5    -19.6      -10  2.76e-06 2.76e-06     2.17       211    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 107
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 15
No. of Photons Reflected == 124
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 144
Photon Angle == 0.4604993167876348
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      195    -3.25      100  2.76e-06        0        0         0   physWorld initStep
    1       40    -3.25     10.7  2.76e-06        0      179       179   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4550426017130351
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.7    -3.22     9.54  2.76e-06        0     2.59       181   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       37    -3.25     8.69  2.76e-06        0     1.09       182 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4       37    -3.25     8.69  2.76e-06        0        0       182   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     36.5    -3.28     7.84  2.76e-06        0    0.997       183   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    6     36.5    -3.28     7.84  2.76e-06        0        0       183   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     35.9    -3.29     7.13  2.76e-06        0    0.914       184 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    8     35.9    -3.29     7.13  2.76e-06        0        0       184   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     35.5    -3.32     6.41  2.76e-06        0    0.841       185   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
   10     35.5    -3.32     6.41  2.76e-06        0        0       185   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11       35    -3.34     5.82  2.76e-06        0    0.776       186 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   12       35    -3.34     5.82  2.76e-06        0        0       186   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   13     34.6    -3.36      5.2  2.76e-06        0    0.719       187   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   14     34.2    -3.56     1.84  2.76e-06        0     3.39       190   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
   15     34.2    -3.56     1.84  2.76e-06        0        0       190   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   16     31.2    -3.49    0.357  2.76e-06        0     3.39       193   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
   17     31.2    -3.49    0.357  2.76e-06        0        0       193   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   18     30.8    -3.72       -3  2.76e-06        0     3.39       197   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
   19     30.8    -3.72       -3  2.76e-06        0        0       197   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   20     27.7    -3.62    -4.48  2.76e-06        0     3.39       200   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
   21     27.7    -3.62    -4.48  2.76e-06        0        0       200   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   22     27.3    -3.87    -7.84  2.76e-06        0     3.39       204   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   23     25.8    -3.97    -10.5  2.76e-06 2.76e-06     3.05       207    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 108
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 15
No. of Photons Reflected == 133
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 153
Photon Angle == 0.4550426017130351
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      174    -33.2      100  2.76e-06        0        0         0   physWorld initStep
    1     22.6    -33.2     12.3  2.76e-06        0      175       175   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4930909430617714
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     19.8    -32.6     10.9  2.76e-06        0      3.2       179   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    3     19.8    -32.6     10.9  2.76e-06        0 4.91e-15       179   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     19.1    -35.1     9.68  2.76e-06        0     2.85       181   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -178     -500     -206  2.76e-06        0      549       730  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 109
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 134
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 154
Photon Angle == 0.4930909430617714
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      164       36      100  2.76e-06        0        0         0   physWorld initStep
    1     17.8       36     15.7  2.76e-06        0      169       169   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  1.018257630480759
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     17.8       36     15.7  2.76e-06        0        0       169   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -336      500     -321  2.76e-06        0      674       842  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 110
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 135
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 155
Photon Angle == 1.018257630480759
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      138    -1.48      100  2.76e-06        0        0         0   physWorld initStep
    1     29.7    -1.48     37.3  2.76e-06        0      125       125   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5818065133125048
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.9    -1.47     36.1  2.76e-06        0     2.17       128 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     4.78    -1.76       28  2.76e-06        0     24.5       152 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -38     -2.3       13  2.76e-06        0     45.3       197   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -38.1     -2.3       13  2.76e-06        0    0.103       197   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -40.1    -2.36     12.5  2.76e-06        0     2.05       200   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500    -14.3     -105  2.76e-06        0      475       674  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 111
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 135
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 156
Photon Angle == 0.5818065133125048
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      159       13      100  2.76e-06        0        0         0   physWorld initStep
    1     36.7       13     29.4  2.76e-06        0      141       141   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5554603006626802
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.9       13     28.3  2.76e-06        0      2.1       143 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     34.3       13       28  2.76e-06        0    0.679       144 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -25.1     19.4    0.971  2.76e-06        0     65.5       210 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -25.1     19.4    0.971  2.76e-06        0        0       210 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -14.9    -16.2       28  2.76e-06        0     45.8       255 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7      -12    -26.1     35.5  2.76e-06        0     12.8       268   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -11.9    -27.6     37.1  2.76e-06        0     2.14       270   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     50.6     -500      480  2.76e-06        0      650       921  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 112
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 136
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 158
Photon Angle == 0.5554603006626802
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      200    0.261      100  2.76e-06        0        0         0   physWorld initStep
    1     37.2    0.261     5.85  2.76e-06        0      188       188   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3098411721932712
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.7    0.257     5.03  2.76e-06        0     2.71       191   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.5    0.257     4.96  2.76e-06        0    0.131       191 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     34.5    0.257     4.96  2.76e-06        0        0       191   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     34.5    0.258     4.83  2.76e-06        0    0.129       191   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     34.6    0.274     2.14  2.76e-06        0      2.7       194   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -52.4     2.91     -500  2.76e-06        0      510       704  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 113
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 137
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 159
Photon Angle == 0.3098411721932712
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      139     5.38      100  2.76e-06        0        0         0   physWorld initStep
    1     29.8     5.38     36.9  2.76e-06        0      126       126   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5808735965256488
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       28     5.35     35.7  2.76e-06        0     2.18       128 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 114
Energy Deposited == 0
No. of Photons Absorbed == 16
No. of Photons Reflected == 137
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 160
Photon Angle == 0.5808735965256488
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      175    -27.5      100  2.76e-06        0        0         0   physWorld initStep
    1     29.3    -27.5       16  2.76e-06        0      168       168   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4732565851421602
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.8    -27.2     14.8  2.76e-06        0     2.77       171   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     26.7    -27.2     14.7  2.76e-06        0    0.167       171 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     26.7    -27.2     14.7  2.76e-06        0        0       171   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.6    -27.3     14.7  2.76e-06        0    0.167       171   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     26.9    -29.8     13.4  2.76e-06        0     2.77       174   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     18.2     -500     -258  2.76e-06        0      543       717  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 115
Energy Deposited == 0
No. of Photons Absorbed == 16
No. of Photons Reflected == 138
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 161
Photon Angle == 0.4732565851421602
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      174    -20.4      100  2.76e-06        0        0         0   physWorld initStep
    1     34.6    -20.4     19.7  2.76e-06        0      161       161   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4627044994475065
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.4    -20.2     18.6  2.76e-06        0     2.48       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     32.3    -20.2     18.5  2.76e-06        0    0.137       163 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     14.9    -28.2     1.24  2.76e-06        0     25.8       189 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     14.9    -28.2     1.24  2.76e-06        0        0       189 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -14.2      -22    -6.86  2.76e-06        0     30.8       220 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -14.2      -22    -6.86  2.76e-06        0        0       220 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8      -31     1.78    0.099  2.76e-06        0       30       250 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    9      -31     1.78    0.099  2.76e-06        0        0       250 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -30.2     23.2     18.4  2.76e-06        0     28.2       278   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11    -30.2     23.3     18.5  2.76e-06        0    0.135       278   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   12    -31.2     25.3     19.5  2.76e-06        0     2.46       281   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13     -211      500      301  2.76e-06        0      580       861  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 116
Energy Deposited == 0
No. of Photons Absorbed == 16
No. of Photons Reflected == 141
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 164
Photon Angle == 0.4627044994475065
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      189      3.5      100  2.76e-06        0        0         0   physWorld initStep
    1       40      3.5     14.2  2.76e-06        0      172       172   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4550675408570792
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       38     3.47     13.2  2.76e-06        0     2.23       174   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.9     3.47     13.1  2.76e-06        0    0.116       174 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     12.3     4.83      -10  2.76e-06 2.76e-06     34.5       209    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 117
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 16
No. of Photons Reflected == 141
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 164
Photon Angle == 0.4550675408570792
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      186       13      100  2.76e-06        0        0         0   physWorld initStep
    1       38       13     14.5  2.76e-06        0      171       171   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4576306267629402
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.9     12.9     13.5  2.76e-06        0     2.32       173   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     35.8     12.9     13.4  2.76e-06        0    0.123       173 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     10.5     18.5      -10  2.76e-06 2.76e-06     34.9       208    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 118
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 16
No. of Photons Reflected == 141
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 164
Photon Angle == 0.4576306267629402
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      150   -0.966      100  2.76e-06        0        0         0   physWorld initStep
    1     34.5   -0.966     33.6  2.76e-06        0      133       133   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5659027537887296
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     32.7   -0.962     32.5  2.76e-06        0     2.09       135 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 119
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 141
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 165
Photon Angle == 0.5659027537887296
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      201     15.1      100  2.76e-06        0        0         0   physWorld initStep
    1     31.2     15.1     2.18  2.76e-06        0      196       196   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3092101528896118
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     28.4     14.8     1.34  2.76e-06        0      2.9       199   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    3     28.4     14.8     1.34  2.76e-06        0        0       199   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4       28     15.8    -1.37  2.76e-06        0      2.9       201   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    5       28     15.8    -1.37  2.76e-06        0        0       201   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     25.3     15.4    -2.18  2.76e-06        0      2.9       204   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     25.2     15.4    -2.22  2.76e-06        0   0.0869       204 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    8     25.2     15.4    -2.22  2.76e-06        0        0       204   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     25.2     15.4     -2.3  2.76e-06        0   0.0855       205   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     24.7     16.4    -4.95  2.76e-06        0     2.89       207   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     -196      167     -500  2.76e-06        0      563       770  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 120
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 144
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 168
Photon Angle == 0.3092101528896118
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      161     17.5      100  2.76e-06        0        0         0   physWorld initStep
    1       36     17.5     28.1  2.76e-06        0      144       144   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5549071864637614
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.8     17.5       28  2.76e-06        0    0.223       144   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3       34     17.4     26.8  2.76e-06        0     2.21       146   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     33.8     17.4     26.8  2.76e-06        0    0.144       146 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     20.1     27.3     4.14  2.76e-06        0     28.2       175 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    6     20.1     27.3     4.14  2.76e-06        0        0       175 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7    -19.5     16.7    -7.67  2.76e-06        0     42.7       217 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    8    -19.5     16.7    -7.67  2.76e-06        0        0       217 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9    -27.9    -25.8     12.2  2.76e-06        0     47.7       265   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10      -28    -25.9     12.3  2.76e-06        0    0.116       265   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11    -28.9    -27.9     12.9  2.76e-06        0     2.22       267   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   12     -226     -500      180  2.76e-06        0      538       806  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 121
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 146
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 170
Photon Angle == 0.5549071864637614
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      174     7.01      100  2.76e-06        0        0         0   physWorld initStep
    1     39.5     7.01     22.5  2.76e-06        0      155       155   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.455631174733413
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.5     6.95     21.5  2.76e-06        0     2.25       157   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.4     6.95     21.5  2.76e-06        0    0.117       157 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4     37.4     6.95     21.5  2.76e-06        0        0       157   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     37.5     6.99     21.4  2.76e-06        0    0.117       157   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     39.4     7.66     20.4  2.76e-06        0     2.25       160   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      500      185     -265  2.76e-06        0      570       730  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 122
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 147
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 171
Photon Angle == 0.455631174733413
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      196    -10.2      100  2.76e-06        0        0         0   physWorld initStep
    1     38.1    -10.2     8.95  2.76e-06        0      182       182   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3093121951087934
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.4    -10.1     8.12  2.76e-06        0     2.77       185   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     35.3    -10.1     8.03  2.76e-06        0    0.169       185 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     35.3    -10.1     8.03  2.76e-06        0        0       185   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     35.2    -10.1     7.88  2.76e-06        0    0.167       185   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     35.2    -10.7     5.18  2.76e-06        0     2.76       188   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -92.3     -105     -500  2.76e-06        0      530       718  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 123
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 148
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 172
Photon Angle == 0.3093121951087934
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      196    -6.93      100  2.76e-06        0        0         0   physWorld initStep
    1     39.4    -6.93     9.84  2.76e-06        0      180       180   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3095744031633294
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.8    -6.84     9.01  2.76e-06        0     2.74       183   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.7    -6.84     8.93  2.76e-06        0    0.171       183 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     36.7    -6.84     8.93  2.76e-06        0        0       183   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     36.6    -6.86     8.76  2.76e-06        0    0.168       183   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    6     36.6    -6.86     8.76  2.76e-06        0        0       183   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     36.5    -6.86     8.68  2.76e-06        0    0.166       184 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    8     36.5    -6.86     8.68  2.76e-06        0        0       184   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     36.5    -6.88     8.52  2.76e-06        0    0.164       184   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     36.5    -7.28     5.84  2.76e-06        0     2.71       186   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11    -65.6    -72.4     -500  2.76e-06        0      520       707  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 124
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 151
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 175
Photon Angle == 0.3095744031633294
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      182     7.62      100  2.76e-06        0        0         0   physWorld initStep
    1     39.4     7.62     17.8  2.76e-06        0      164       164   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4557722792048793
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.4     7.56     16.8  2.76e-06        0     2.26       167   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.3     7.56     16.8  2.76e-06        0    0.118       167 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     7.87     11.1      -10  2.76e-06 2.76e-06     39.9       207    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 125
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 17
No. of Photons Reflected == 151
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 175
Photon Angle == 0.4557722792048793
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      151    -8.72      100  2.76e-06        0        0         0   physWorld initStep
    1     34.3    -8.72     32.8  2.76e-06        0      134       134   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5652436053903842
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     32.5    -8.68     31.7  2.76e-06        0     2.11       136 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 126
Energy Deposited == 0
No. of Photons Absorbed == 18
No. of Photons Reflected == 151
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 176
Photon Angle == 0.5652436053903842
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      156     4.78      100  2.76e-06        0        0         0   physWorld initStep
    1     36.8     4.78     31.2  2.76e-06        0      138       138   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5578288048707676
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       35     4.76     30.1  2.76e-06        0     2.07       140 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 127
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 151
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 177
Photon Angle == 0.5578288048707676
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      149    -18.6      100  2.76e-06        0        0         0   physWorld initStep
    1     31.4    -18.6     31.8  2.76e-06        0      136       136   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5706715017290298
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     29.5    -18.5     30.7  2.76e-06        0     2.22       139 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     29.5    -18.5     30.7  2.76e-06        0        0       139   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     29.9    -19.9     32.4  2.76e-06        0     2.22       141   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      113     -404      500  2.76e-06        0      611       752  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 128
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 152
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 178
Photon Angle == 0.5706715017290298
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      152    -2.58      100  2.76e-06        0        0         0   physWorld initStep
    1     35.6    -2.58     32.6  2.76e-06        0      135       135   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.562248519065172
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.8    -2.57     31.5  2.76e-06        0     2.08       137 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     25.7    -2.74       28  2.76e-06        0     8.84       146 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -32.8    -3.94     2.88  2.76e-06        0     63.7       209 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -32.8    -3.94     2.88  2.76e-06        0        0       209 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     -9.8     1.98       28  2.76e-06        0     34.6       244 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7     4.73     5.72     43.9  2.76e-06        0     21.8       266   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     5.76     6.06     45.7  2.76e-06        0     2.17       268   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      289     93.3      500  2.76e-06        0      542       810  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 129
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 153
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 180
Photon Angle == 0.562248519065172
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      183       36      100  2.76e-06        0        0         0   physWorld initStep
    1     -500       36     -295  2.76e-06        0      789       789  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.5235987755982987
TRACK ID == 1
THE CURRENT EVENTID IS == 130
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 153
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 180
Photon Angle == 0.5235987755982987
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      193     18.4      100  2.76e-06        0        0         0   physWorld initStep
    1     34.2     18.4     8.13  2.76e-06        0      184       184   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3094569156559324
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.4     18.1     7.29  2.76e-06        0     2.94       187   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     31.3     18.1     7.19  2.76e-06        0      0.2       187 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     31.3     18.1     7.19  2.76e-06        0        0       187   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     31.2     18.1     7.02  2.76e-06        0    0.197       187   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    6     31.2     18.1     7.02  2.76e-06        0        0       187   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7       31     18.1     6.92  2.76e-06        0    0.193       187 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    8       31     18.1     6.92  2.76e-06        0        0       187   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     30.9     18.2     6.76  2.76e-06        0     0.19       187   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     30.4     19.2     4.08  2.76e-06        0     2.91       190   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     -197      176     -500  2.76e-06        0      575       765  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 131
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 156
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 183
Photon Angle == 0.3094569156559324
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      192    -20.3      100  2.76e-06        0        0         0   physWorld initStep
    1     33.3    -20.3     8.38  2.76e-06        0      183       183   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3100577983290504
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.5    -19.9     7.54  2.76e-06        0     2.99       186   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.3    -19.9     7.43  2.76e-06        0     0.22       186 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     30.3    -19.9     7.43  2.76e-06        0        0       186   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     30.2      -20     7.24  2.76e-06        0    0.216       187   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     29.6    -21.1     4.56  2.76e-06        0     2.97       190   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -234     -185     -500  2.76e-06        0      592       782  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 132
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 157
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 184
Photon Angle == 0.3100577983290504
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      149     16.1      100  2.76e-06        0        0         0   physWorld initStep
    1     32.2     16.1     32.3  2.76e-06        0      135       135   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5694609982633714
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     30.3       16     31.2  2.76e-06        0     2.19       137 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 133
Energy Deposited == 0
No. of Photons Absorbed == 20
No. of Photons Reflected == 157
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 185
Photon Angle == 0.5694609982633714
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      179      -31      100  2.76e-06        0        0         0   physWorld initStep
    1     25.5      -31     11.4  2.76e-06        0      177       177   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4832735743150551
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.9    -30.5     10.1  2.76e-06        0        3       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     22.7    -30.6     9.99  2.76e-06        0    0.193       180 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     22.7    -30.6     9.99  2.76e-06        0        0       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     22.3    -30.7     9.63  2.76e-06        0    0.563       181   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     20.7      -32      7.1  2.76e-06        0     3.24       184   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -499     -194     -500  2.76e-06        0      744       928  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 134
Energy Deposited == 0
No. of Photons Absorbed == 20
No. of Photons Reflected == 158
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 186
Photon Angle == 0.4832735743150551
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      152    -18.7      100  2.76e-06        0        0         0   physWorld initStep
    1     32.5    -18.7     30.9  2.76e-06        0      138       138   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5667762996156949
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.6    -18.6     29.7  2.76e-06        0      2.2       140 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     26.4    -19.3       28  2.76e-06        0     4.61       145 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -23.6    -27.7     7.56  2.76e-06        0     54.6       200 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -23.6    -27.7     7.56  2.76e-06        0        0       200 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -26.2     4.01       28  2.76e-06        0     37.8       237 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7      -27     13.9     34.4  2.76e-06        0     11.8       249   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -27.6     15.4     35.9  2.76e-06        0     2.25       251   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     -181      500      490  2.76e-06        0      681       933  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 135
Energy Deposited == 0
No. of Photons Absorbed == 20
No. of Photons Reflected == 159
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 188
Photon Angle == 0.5667762996156949
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      180     17.2      100  2.76e-06        0        0         0   physWorld initStep
    1     36.3     17.2     17.1  2.76e-06        0      166       166   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4600894436724099
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.1     17.1       16  2.76e-06        0      2.4       168   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       34     17.1       16  2.76e-06        0    0.129       168 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     11.4     24.6    -5.53  2.76e-06        0     32.1       200 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     11.4     24.6    -5.53  2.76e-06        0        0       200 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -2.12     21.2      -10  2.76e-06 2.76e-06     14.7       215    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 136
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 20
No. of Photons Reflected == 160
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 189
Photon Angle == 0.4600894436724099
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      191     8.76      100  2.76e-06        0        0         0   physWorld initStep
    1     39.2     8.76     12.2  2.76e-06        0      176       176   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4560676958049212
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.1     8.69     11.2  2.76e-06        0     2.27       178   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       37     8.69     11.2  2.76e-06        0    0.119       178 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     13.8     11.9      -10  2.76e-06 2.76e-06     31.6       210    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 137
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 20
No. of Photons Reflected == 160
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 189
Photon Angle == 0.4560676958049212
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      191     21.3      100  2.76e-06        0        0         0   physWorld initStep
    1     33.2     21.3        9  2.76e-06        0      182       182   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  1.114110640029265
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     33.2     21.3        9  2.76e-06        0        0       182   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -229      184     -500  2.76e-06        0      595       777  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 138
Energy Deposited == 0
No. of Photons Absorbed == 20
No. of Photons Reflected == 161
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 190
Photon Angle == 1.114110640029265
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      170     0.28      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1     0.28     25.3  2.76e-06        0      149       149   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4548862178328594
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1    0.278     24.3  2.76e-06        0     2.23       152   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38    0.278     24.2  2.76e-06        0    0.115       152 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     0.12    0.438      -10  2.76e-06 2.76e-06     51.1       203    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 139
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 20
No. of Photons Reflected == 161
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 190
Photon Angle == 0.4548862178328594
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      175     5.85      100  2.76e-06        0        0         0   physWorld initStep
    1     39.7     5.85       22  2.76e-06        0      156       156   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4554018063464387
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.7     5.81     21.1  2.76e-06        0     2.24       158   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.6     5.81       21  2.76e-06        0    0.117       158 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     3.41     8.88      -10  2.76e-06 2.76e-06     46.3       205    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 140
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 20
No. of Photons Reflected == 161
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 190
Photon Angle == 0.4554018063464387
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      140    -10.7      100  2.76e-06        0        0         0   physWorld initStep
    1     29.3    -10.7     36.3  2.76e-06        0      127       127   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5815775853048439
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.4    -10.6     35.1  2.76e-06        0      2.2       130 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 141
Energy Deposited == 0
No. of Photons Absorbed == 21
No. of Photons Reflected == 161
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 191
Photon Angle == 0.5815775853048439
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      202    -18.9      100  2.76e-06        0        0         0   physWorld initStep
    1     25.2    -18.9    -2.29  2.76e-06        0      205       205   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3122852330124473
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.3    -18.5    -3.14  2.76e-06        0      3.1       208   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     22.2    -18.5    -3.19  2.76e-06        0     0.11       208 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     22.2    -18.5    -3.19  2.76e-06        0        0       208   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     22.1    -18.5    -3.28  2.76e-06        0    0.108       208   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     21.2    -19.7    -5.95  2.76e-06        0     3.09       211   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -311     -189     -500  2.76e-06        0      619       830  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 142
Energy Deposited == 0
No. of Photons Absorbed == 21
No. of Photons Reflected == 162
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 192
Photon Angle == 0.3122852330124473
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      176     28.5      100  2.76e-06        0        0         0   physWorld initStep
    1     28.3     28.5     14.5  2.76e-06        0      171       171   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4756061545641761
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.8     28.1     13.2  2.76e-06        0     2.83       174   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     25.6     28.1     13.2  2.76e-06        0    0.174       174 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     25.6     28.1     13.2  2.76e-06        0        0       174   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     25.6     28.3     13.1  2.76e-06        0    0.174       174   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     25.7     30.8     11.8  2.76e-06        0     2.83       177   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -17.9      500     -260  2.76e-06        0      544       721  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 143
Energy Deposited == 0
No. of Photons Absorbed == 21
No. of Photons Reflected == 163
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 193
Photon Angle == 0.4756061545641761
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      207    -13.2      100  2.76e-06        0        0         0   physWorld initStep
    1     27.4    -13.2     -3.8  2.76e-06        0      208       208   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3092043729904668
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.7    -12.9    -4.65  2.76e-06        0      2.9       211   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     24.6    -12.9    -4.68  2.76e-06        0   0.0594       211 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     24.6    -12.9    -4.68  2.76e-06        0        0       211   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     24.6      -13    -4.73  2.76e-06        0   0.0585       211   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     24.2    -13.9    -7.42  2.76e-06        0     2.89       214   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -179     -158     -500  2.76e-06        0      552       765  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 144
Energy Deposited == 0
No. of Photons Absorbed == 21
No. of Photons Reflected == 164
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 194
Photon Angle == 0.3092043729904668
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      195     19.5      100  2.76e-06        0        0         0   physWorld initStep
    1     31.3     19.5     5.32  2.76e-06        0      189       189   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3102099239115566
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     28.4     19.1     4.47  2.76e-06        0        3       192   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     28.3     19.1     4.38  2.76e-06        0    0.186       193 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     28.3     19.1     4.38  2.76e-06        0        0       193   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     28.2     19.2     4.23  2.76e-06        0    0.182       193   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     27.5     20.3     1.54  2.76e-06        0     2.99       196   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -242      185     -500  2.76e-06        0      593       788  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 145
Energy Deposited == 0
No. of Photons Absorbed == 21
No. of Photons Reflected == 165
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 195
Photon Angle == 0.3102099239115566
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      183     10.8      100  2.76e-06        0        0         0   physWorld initStep
    1     38.7     10.8     16.5  2.76e-06        0      167       167   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4567255171131164
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.6     10.7     15.5  2.76e-06        0     2.29       169   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.5     10.7     15.4  2.76e-06        0     0.12       169 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     8.76     15.6      -10  2.76e-06 2.76e-06       38       207    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 146
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 21
No. of Photons Reflected == 165
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 195
Photon Angle == 0.4567255171131164
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      152     10.6      100  2.76e-06        0        0         0   physWorld initStep
    1     34.4     10.6     32.3  2.76e-06        0      135       135   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5642576630272376
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     32.6     10.5     31.1  2.76e-06        0     2.12       138 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 147
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 165
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 196
Photon Angle == 0.5642576630272376
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      204    -15.8      100  2.76e-06        0        0         0   physWorld initStep
    1       28    -15.8    -1.39  2.76e-06        0      203       203   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3096483813967335
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.2    -15.5    -2.24  2.76e-06        0     2.96       206   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     25.1    -15.5    -2.28  2.76e-06        0    0.094       206 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     25.1    -15.5    -2.28  2.76e-06        0        0       206   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     25.1    -15.5    -2.36  2.76e-06        0   0.0924       206   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     24.5    -16.6    -5.05  2.76e-06        0     2.95       209   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -216     -173     -500  2.76e-06        0      572       781  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 148
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 166
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 197
Photon Angle == 0.3096483813967335
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      150     12.1      100  2.76e-06        0        0         0   physWorld initStep
    1     33.5     12.1     32.6  2.76e-06        0      135       135   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5668611632356724
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     31.7     12.1     31.5  2.76e-06        0     2.14       137 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 149
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 166
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 198
Photon Angle == 0.5668611632356724
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      198     3.38      100  2.76e-06        0        0         0   physWorld initStep
    1     38.9     3.38     8.42  2.76e-06        0      183       183   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3097705584176631
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.3     3.33     7.59  2.76e-06        0     2.72       186   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.2     3.33     7.52  2.76e-06        0    0.154       186 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     36.2     3.33     7.52  2.76e-06        0        0       186   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     36.1     3.34     7.37  2.76e-06        0    0.152       186   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     36.2     3.54     4.67  2.76e-06        0      2.7       189   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -55.5       36     -500  2.76e-06        0      514       703  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 150
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 167
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 199
Photon Angle == 0.3097705584176631
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      150     13.7      100  2.76e-06        0        0         0   physWorld initStep
    1     33.3     13.7     32.3  2.76e-06        0      135       135   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5669105479086531
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.4     13.6     31.2  2.76e-06        0     2.15       138 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     31.4     13.6     31.2  2.76e-06        0        0       138   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     32.1     14.6       33  2.76e-06        0     2.15       140   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      171      284      500  2.76e-06        0      557       696  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 151
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 168
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 200
Photon Angle == 0.5669105479086531
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      161     27.5      100  2.76e-06        0        0         0   physWorld initStep
    1     29.3     27.5     23.9  2.76e-06        0      152       152   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4732521795996822
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.8     27.2     22.7  2.76e-06        0     2.77       155   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     26.7     27.2     22.6  2.76e-06        0    0.167       155 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     26.7     27.2     22.6  2.76e-06        0        0       155   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.7     27.3     22.6  2.76e-06        0    0.167       155   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     26.9     29.8     21.3  2.76e-06        0     2.77       158   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     18.2      500     -250  2.76e-06        0      543       701  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 152
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 169
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 201
Photon Angle == 0.4732521795996822
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      175     17.5      100  2.76e-06        0        0         0   physWorld initStep
    1     36.1     17.5     19.6  2.76e-06        0      161       161   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4602934264122149
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       34     17.4     18.5  2.76e-06        0     2.41       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     33.9     17.4     18.4  2.76e-06        0     0.13       163 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4     33.9     17.4     18.4  2.76e-06        0        0       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     33.9     17.5     18.4  2.76e-06        0     0.13       164   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     35.3     19.1     17.3  2.76e-06        0     2.41       166   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      380      500     -324  2.76e-06        0      684       849  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 153
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 170
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 202
Photon Angle == 0.4602934264122149
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      148     22.7      100  2.76e-06        0        0         0   physWorld initStep
    1       29     22.7     31.5  2.76e-06        0      137       137   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.576152423651215
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       27     22.6     30.3  2.76e-06        0      2.3       139 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     20.8       24       28  2.76e-06        0     6.77       146 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -18.9       33     13.5  2.76e-06        0     43.3       189   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      -19     33.1     13.5  2.76e-06        0    0.122       189   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -20.9     34.3       13  2.76e-06        0      2.3       192   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500      291     -127  2.76e-06        0      561       753  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 154
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 170
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 203
Photon Angle == 0.576152423651215
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      186    -7.86      100  2.76e-06        0        0         0   physWorld initStep
    1     39.4    -7.86     15.5  2.76e-06        0      169       169   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4558301306797743
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.3     -7.8     14.5  2.76e-06        0     2.26       171   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.2     -7.8     14.4  2.76e-06        0    0.118       171 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     10.4    -11.1      -10  2.76e-06 2.76e-06     36.4       208    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 155
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 23
No. of Photons Reflected == 170
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 203
Photon Angle == 0.4558301306797743
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      154     2.14      100  2.76e-06        0        0         0   physWorld initStep
    1     36.2     2.14       32  2.76e-06        0      136       136   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5600584108892495
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.5     2.13     30.9  2.76e-06        0     2.07       138 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     27.8     2.24       28  2.76e-06        0     7.26       145 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -32.1     3.25     1.76  2.76e-06        0     65.4       211 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -32.1     3.25     1.76  2.76e-06        0        0       211 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -7.57    -2.04       28  2.76e-06        0     36.3       247 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7     7.06    -5.19     43.6  2.76e-06        0     21.6       269   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     8.12    -5.48     45.5  2.76e-06        0     2.15       271   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      306    -81.3      500  2.76e-06        0      548       819  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 156
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 171
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 205
Photon Angle == 0.5600584108892495
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      195     9.82      100  2.76e-06        0        0         0   physWorld initStep
    1     38.9     9.82     9.99  2.76e-06        0      180       180   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3093584318961522
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.3     9.69     9.16  2.76e-06        0     2.77       183   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.1     9.69     9.07  2.76e-06        0    0.178       183 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     36.1     9.69     9.07  2.76e-06        0        0       183   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     36.1     9.72      8.9  2.76e-06        0    0.175       183   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       36     10.3      6.2  2.76e-06        0     2.75       186   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -86.9     99.9     -500  2.76e-06        0      529       714  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 157
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 172
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 206
Photon Angle == 0.3093584318961522
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      151    -17.6      100  2.76e-06        0        0         0   physWorld initStep
    1     32.5    -17.6     31.4  2.76e-06        0      137       137   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.567337400889032
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.7    -17.5     30.2  2.76e-06        0     2.19       139 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     25.2    -18.3       28  2.76e-06        0     5.93       145 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -25.1    -26.2     7.49  2.76e-06        0       55       200 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -25.1    -26.2     7.49  2.76e-06        0        0       200 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -24.7     3.57       28  2.76e-06        0     36.1       236 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -24.6     14.6     35.6  2.76e-06        0     13.4       250   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8      -25     16.1     37.3  2.76e-06        0     2.25       252   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     -125      486      500  2.76e-06        0      667       919  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 158
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 173
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 208
Photon Angle == 0.567337400889032
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      192    -10.6      100  2.76e-06        0        0         0   physWorld initStep
    1     38.7    -10.6     11.5  2.76e-06        0      177       177   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4566623589163545
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.7    -10.5     10.4  2.76e-06        0     2.29       179   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.6    -10.5     10.4  2.76e-06        0     0.12       180 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     14.3    -14.4      -10  2.76e-06 2.76e-06     30.4       210    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 159
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 23
No. of Photons Reflected == 173
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 208
Photon Angle == 0.4566623589163545
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      186     11.5      100  2.76e-06        0        0         0   physWorld initStep
    1     38.5     11.5     14.6  2.76e-06        0      171       171   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4569802738361677
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.4     11.4     13.6  2.76e-06        0      2.3       173   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.3     11.4     13.5  2.76e-06        0    0.121       173 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     10.7     16.2      -10  2.76e-06 2.76e-06     35.1       208    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 160
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 23
No. of Photons Reflected == 173
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 208
Photon Angle == 0.4569802738361677
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      177    -31.8      100  2.76e-06        0        0         0   physWorld initStep
    1     24.5    -31.8     11.7  2.76e-06        0      177       177   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4863073473325117
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     21.8    -31.3     10.4  2.76e-06        0     3.07       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     21.6    -31.3     10.3  2.76e-06        0    0.209       180 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     21.6    -31.3     10.3  2.76e-06        0        0       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     21.6    -31.5     10.2  2.76e-06        0    0.209       180   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     21.2    -33.4     9.21  2.76e-06        0     2.23       182   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -119     -500     -200  2.76e-06        0      530       713  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 161
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 174
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 209
Photon Angle == 0.4863073473325117
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      173      4.3      100  2.76e-06        0        0         0   physWorld initStep
    1     39.9      4.3     23.2  2.76e-06        0      154       154   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4551611179754831
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.9     4.26     22.2  2.76e-06        0     2.24       156   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.8     4.26     22.1  2.76e-06        0    0.116       156 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     2.32     6.58      -10  2.76e-06 2.76e-06     47.9       204    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 162
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 23
No. of Photons Reflected == 174
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 209
Photon Angle == 0.4551611179754831
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      170     24.5      100  2.76e-06        0        0         0   physWorld initStep
    1     31.8     24.5     20.4  2.76e-06        0      159       159   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4677322695839976
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     29.5     24.2     19.3  2.76e-06        0     2.63       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     29.4     24.2     19.2  2.76e-06        0    0.151       162 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     29.4     24.2     19.2  2.76e-06        0        0       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     29.4     24.3     19.1  2.76e-06        0    0.151       162   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     30.1     26.6       18  2.76e-06        0     2.63       165   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      122      500     -260  2.76e-06        0      557       722  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 163
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 175
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 210
Photon Angle == 0.4677322695839976
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      196    -24.9      100  2.76e-06        0        0         0   physWorld initStep
    1       21    -24.9   -0.849  2.76e-06        0      202       202   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8126820874292116
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2       21    -24.9   -0.849  2.76e-06        0        0       202   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -473     -177     -500  2.76e-06        0      719       920  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 164
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 176
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 211
Photon Angle == 0.8126820874292116
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      179    -2.09      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1    -2.09     19.6  2.76e-06        0      161       161   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4549498816865825
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1    -2.07     18.7  2.76e-06        0     2.23       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38    -2.07     18.6  2.76e-06        0    0.116       163 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     6.33    -3.07      -10  2.76e-06 2.76e-06     42.7       206    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 165
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 23
No. of Photons Reflected == 176
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 211
Photon Angle == 0.4549498816865825
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      203    -4.71      100  2.76e-06        0        0         0   physWorld initStep
    1     34.8    -4.71     2.86  2.76e-06        0      194       194   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3096756568159842
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.2    -4.64     2.03  2.76e-06        0     2.73       197   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     32.1    -4.64     1.98  2.76e-06        0    0.107       197 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     32.1    -4.64     1.98  2.76e-06        0        0       197   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     32.1    -4.65     1.87  2.76e-06        0    0.105       197   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     32.2    -4.96   -0.821  2.76e-06        0     2.71       200   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -64.7    -54.8     -500  2.76e-06        0      511       711  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 166
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 177
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 212
Photon Angle == 0.3096756568159842
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      168     16.5      100  2.76e-06        0        0         0   physWorld initStep
    1     36.6     16.5     24.3  2.76e-06        0      151       151   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4596093347459007
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.4     16.4     23.2  2.76e-06        0     2.38       154   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.3     16.4     23.2  2.76e-06        0    0.128       154 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     2.84     26.2    -6.62  2.76e-06        0     44.4       198 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     2.84     26.2    -6.62  2.76e-06        0        0       198 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -23.3     6.64    -9.65  2.76e-06        0     32.8       231 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -23.3     6.64    -9.65  2.76e-06        0        0       231 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -20.4    -32.1       15  2.76e-06        0       46       277   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -20.4    -32.2     15.1  2.76e-06        0     0.12       277   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    -20.9    -34.3     15.9  2.76e-06        0     2.27       280   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11    -89.3     -500      221  2.76e-06        0      514       793  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 167
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 179
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 214
Photon Angle == 0.4596093347459007
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      176    -2.03      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1    -2.03     21.5  2.76e-06        0      157       157   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4549463811310686
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1    -2.02     20.5  2.76e-06        0     2.23       159   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38    -2.02     20.5  2.76e-06        0    0.116       159 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     4.29    -3.05      -10  2.76e-06 2.76e-06     45.4       205    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 168
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 23
No. of Photons Reflected == 179
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 214
Photon Angle == 0.4549463811310686
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      178    -22.6      100  2.76e-06        0        0         0   physWorld initStep
    1     33.2    -22.6     16.3  2.76e-06        0      167       167   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4651746426498149
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.9    -22.4     15.1  2.76e-06        0     2.55       170   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.8    -22.4     15.1  2.76e-06        0    0.143       170 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     22.8    -27.4     6.61  2.76e-06        0     12.6       183 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     22.8    -27.4     6.61  2.76e-06        0        0       183 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -6.93    -27.8     -3.4  2.76e-06        0     31.4       214 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -6.93    -27.8     -3.4  2.76e-06        0        0       214 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -28.6    -11.7   -0.152  2.76e-06        0     27.2       241 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    9    -28.6    -11.7   -0.152  2.76e-06        0        0       241 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -36.2     11.7       15  2.76e-06        0     28.9       270   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11    -36.3     11.8       15  2.76e-06        0    0.131       270   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   12    -37.8     13.5     15.9  2.76e-06        0     2.41       273   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13     -424      500      280  2.76e-06        0      675       948  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 169
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 182
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 217
Photon Angle == 0.4651746426498149
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      189    -9.77      100  2.76e-06        0        0         0   physWorld initStep
    1     38.9    -9.77     13.5  2.76e-06        0      173       173   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4563716533627464
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.9    -9.69     12.5  2.76e-06        0     2.28       175   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.8    -9.69     12.5  2.76e-06        0    0.119       175 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     12.2    -13.5      -10  2.76e-06 2.76e-06     33.5       209    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 170
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 23
No. of Photons Reflected == 182
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 217
Photon Angle == 0.4563716533627464
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      156     18.6      100  2.76e-06        0        0         0   physWorld initStep
    1     33.9     18.6     29.6  2.76e-06        0      141       141   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5616026316549263
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.1     18.5     28.4  2.76e-06        0     2.18       143 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     31.1     18.7       28  2.76e-06        0     1.13       144 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -21.5     27.4     5.38  2.76e-06        0     57.9       202 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -21.5     27.4     5.38  2.76e-06        0        0       202 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -26.9    -10.8       28  2.76e-06        0     44.7       247 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -27.9    -17.9     32.2  2.76e-06        0     8.28       255   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -28.5    -19.5     33.6  2.76e-06        0     2.21       257   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     -197     -500      430  2.76e-06        0      645       903  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 171
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 183
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 219
Photon Angle == 0.5616026316549263
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      166     27.7      100  2.76e-06        0        0         0   physWorld initStep
    1       29     27.7       21  2.76e-06        0      158       158   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4738256979641644
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.5     27.4     19.8  2.76e-06        0     2.78       161   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     26.4     27.4     19.7  2.76e-06        0    0.168       161 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     26.4     27.4     19.7  2.76e-06        0        0       161   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.4     27.5     19.7  2.76e-06        0    0.168       161   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     26.6       30     18.4  2.76e-06        0     2.78       164   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     9.11      500     -253  2.76e-06        0      543       707  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 172
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 184
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 220
Photon Angle == 0.4738256979641644
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      184     8.57      100  2.76e-06        0        0         0   physWorld initStep
    1     39.2     8.57     16.1  2.76e-06        0      168       168   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4560173830686405
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.2     8.51     15.2  2.76e-06        0     2.27       170   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.1     8.51     15.1  2.76e-06        0    0.119       170 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     9.55     12.2      -10  2.76e-06 2.76e-06     37.4       208    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 173
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 23
No. of Photons Reflected == 184
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 220
Photon Angle == 0.4560173830686405
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      185    -26.1      100  2.76e-06        0        0         0   physWorld initStep
    1     30.5    -26.1     10.7  2.76e-06        0      179       179   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4705069721312469
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.4    -25.7     9.16  2.76e-06        0     3.51       182   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     27.4    -25.7     9.16  2.76e-06        0        0       182   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     25.1      -27     5.34  2.76e-06        0      4.6       187   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     25.1      -27     5.34  2.76e-06        0        0       187   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6       21    -26.2     3.46  2.76e-06        0     4.63       191   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7       21    -26.2     3.46  2.76e-06        0        0       191   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     18.4    -27.4   -0.185  2.76e-06        0      4.6       196   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9     18.4    -27.4   -0.185  2.76e-06        0        0       196   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     14.3    -26.2    -1.85  2.76e-06        0     4.63       201   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11     14.3    -26.2    -1.85  2.76e-06        0        0       201   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     11.3    -27.2    -5.24  2.76e-06        0      4.6       205   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   13     11.3    -27.2    -5.24  2.76e-06        0        0       205   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14     7.22    -25.5     -6.6  2.76e-06        0     4.65       210   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   15     7.22    -25.5     -6.6  2.76e-06        0        0       210   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   16      3.8    -26.1    -9.62  2.76e-06        0      4.6       214   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   17      3.8    -26.1    -9.62  2.76e-06        0        0       214   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   18     2.22    -25.1      -10  2.76e-06 2.76e-06     1.89       216    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 174
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 23
No. of Photons Reflected == 192
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 228
Photon Angle == 0.4705069721312469
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      147     1.14      100  2.76e-06        0        0         0   physWorld initStep
    1     33.6     1.14     34.4  2.76e-06        0      131       131   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5689569200886866
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     31.8     1.13     33.2  2.76e-06        0     2.11       133 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 175
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 192
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 229
Photon Angle == 0.5689569200886866
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      193     24.2      100  2.76e-06        0        0         0   physWorld initStep
    1     26.9     24.2     4.35  2.76e-06        0      191       191   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3163806774066713
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.9     23.6     3.51  2.76e-06        0      3.2       195   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    3     23.9     23.6     3.51  2.76e-06        0        0       195   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     22.7     24.9    0.844  2.76e-06        0     3.19       198   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -385      192     -500  2.76e-06        0      667       865  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 176
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 193
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 230
Photon Angle == 0.3163806774066713
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      147    -7.73      100  2.76e-06        0        0         0   physWorld initStep
    1     32.8    -7.73     34.3  2.76e-06        0      131       131   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5705065516378123
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       31    -7.69     33.1  2.76e-06        0     2.13       134 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     18.1    -8.51       28  2.76e-06        0     13.9       148 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -34.1    -11.8     7.28  2.76e-06        0     56.3       204 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -34.1    -11.8     7.28  2.76e-06        0        0       204 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -18.8     1.07       28  2.76e-06        0     28.9       233 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -7.83     10.3     42.7  2.76e-06        0     20.5       253   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -7.19     11.1     44.7  2.76e-06        0     2.25       255   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      177      224      500  2.76e-06        0      536       791  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 177
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 194
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 232
Photon Angle == 0.5705065516378123
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      175     22.1      100  2.76e-06        0        0         0   physWorld initStep
    1     33.5     22.1     18.5  2.76e-06        0      163       163   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4645654675335646
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.2     21.9     17.4  2.76e-06        0     2.54       166   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     31.1     21.9     17.3  2.76e-06        0    0.142       166 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     19.5     28.7     5.17  2.76e-06        0     18.1       184 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     19.5     28.7     5.17  2.76e-06        0        0       184 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -11.8     25.7    -3.88  2.76e-06        0     32.8       217 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -11.8     25.7    -3.88  2.76e-06        0        0       217 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -32.6     3.59      2.5  2.76e-06        0       31       248 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    9    -32.6     3.59      2.5  2.76e-06        0        0       248 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -34.6    -15.8       18  2.76e-06        0       25       272   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
   11    -34.6    -15.8       18  2.76e-06        0        0       272 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12    -24.3      -23       28  2.76e-06        0       16       289 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
   13    -19.7    -26.2     32.5  2.76e-06        0     7.16       296   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   14    -19.2    -27.6     34.4  2.76e-06        0     2.44       298   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   15      170     -353      500  2.76e-06        0      599       897  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 178
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 198
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 236
Photon Angle == 0.4645654675335646
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      190    -18.3      100  2.76e-06        0        0         0   physWorld initStep
    1     35.7    -18.3       11  2.76e-06        0      178       178   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4609085391918719
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.5    -18.2     9.89  2.76e-06        0     2.52       181   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     33.5    -18.2     9.89  2.76e-06        0        0       181   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     32.3    -19.2     6.34  2.76e-06        0     3.86       184   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     32.3    -19.2     6.34  2.76e-06        0        0       184   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     28.9    -18.8      4.7  2.76e-06        0     3.86       188   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     28.9    -18.8      4.7  2.76e-06        0        0       188   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     27.6    -19.8      1.2  2.76e-06        0     3.86       192   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9     27.6    -19.8      1.2  2.76e-06        0        0       192   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     24.1    -19.3   -0.375  2.76e-06        0     3.87       196   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11     24.1    -19.3   -0.375  2.76e-06        0        0       196   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     22.7    -20.3    -3.78  2.76e-06        0     3.86       200   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   13     22.7    -20.3    -3.78  2.76e-06        0 1.05e-14       200   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14     19.2    -19.6    -5.27  2.76e-06        0     3.87       204   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   15     19.2    -19.6    -5.27  2.76e-06        0        0       204   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   16     17.5    -20.7    -8.57  2.76e-06        0     3.85       208   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   17     17.5    -20.7    -8.57  2.76e-06        0        0       208   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   18       14    -19.7    -9.92  2.76e-06        0     3.87       211   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   19       14    -19.7    -9.92  2.76e-06        0        0       211   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   20       14    -19.7      -10  2.76e-06 2.76e-06    0.101       212    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 179
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 24
No. of Photons Reflected == 207
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 245
Photon Angle == 0.4609085391918719
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      147    -19.8      100  2.76e-06        0        0         0   physWorld initStep
    1     29.7    -19.8     32.6  2.76e-06        0      135       135   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.575687989438864
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.8    -19.7     31.3  2.76e-06        0     2.26       137 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 180
Energy Deposited == 0
No. of Photons Absorbed == 25
No. of Photons Reflected == 207
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 246
Photon Angle == 0.575687989438864
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      161     13.6      100  2.76e-06        0        0         0   physWorld initStep
    1     37.2     13.6     28.6  2.76e-06        0      143       143   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5532358350069986
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.2     13.5       28  2.76e-06        0     1.19       144   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     35.7     13.5     27.7  2.76e-06        0    0.602       145   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     35.6     13.5     27.6  2.76e-06        0    0.135       145 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     11.9     23.5    -6.68  2.76e-06        0     42.9       188 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    6     11.9     23.5    -6.68  2.76e-06        0        0       188 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     2.58     19.3      -10  2.76e-06 2.76e-06     10.7       198    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 181
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 25
No. of Photons Reflected == 208
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 247
Photon Angle == 0.5532358350069986
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      173     6.96      100  2.76e-06        0        0         0   physWorld initStep
    1     39.5     6.96     23.2  2.76e-06        0      154       154   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4556214625387742
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.5     6.91     22.2  2.76e-06        0     2.25       156   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.4     6.91     22.2  2.76e-06        0    0.117       156 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4        2     10.7      -10  2.76e-06 2.76e-06       48       204    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 182
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 25
No. of Photons Reflected == 208
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 247
Photon Angle == 0.4556214625387742
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      189    -25.7      100  2.76e-06        0        0         0   physWorld initStep
    1     28.5    -25.7     7.46  2.76e-06        0      185       185   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3165753487983993
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.4    -25.2     6.63  2.76e-06        0      3.2       188   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    3     25.4    -25.2     6.63  2.76e-06        0        0       188   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     24.3    -26.5     3.96  2.76e-06        0     3.19       191   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -387     -195     -500  2.76e-06        0      672       863  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 183
Energy Deposited == 0
No. of Photons Absorbed == 25
No. of Photons Reflected == 209
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 248
Photon Angle == 0.3165753487983993
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      152    -16.4      100  2.76e-06        0        0         0   physWorld initStep
    1     33.1    -16.4     31.4  2.76e-06        0      137       137   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5661486169033632
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     31.2    -16.3     30.3  2.76e-06        0     2.17       139 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 184
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 209
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 249
Photon Angle == 0.5661486169033632
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      168    -11.2      100  2.76e-06        0        0         0   physWorld initStep
    1     38.6    -11.2     25.3  2.76e-06        0      149       149   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4568737877155216
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.5    -11.1     24.3  2.76e-06        0     2.29       152   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.4    -11.1     24.3  2.76e-06        0    0.121       152 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4   -0.927      -18      -10  2.76e-06 2.76e-06     51.1       203    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 185
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 26
No. of Photons Reflected == 209
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 249
Photon Angle == 0.4568737877155216
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      169     19.6      100  2.76e-06        0        0         0   physWorld initStep
    1     35.1     19.6     22.6  2.76e-06        0      155       155   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4619429964582351
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.9     19.4     21.6  2.76e-06        0     2.46       157   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     32.7     19.4     21.5  2.76e-06        0    0.135       157 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     10.3     28.9   -0.552  2.76e-06        0     32.9       190 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     10.3     28.9   -0.552  2.76e-06        0        0       190 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -20.1     16.9    -6.75  2.76e-06        0     33.2       223 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -20.1     16.9    -6.75  2.76e-06        0        0       223 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -32.1    -18.1     8.33  2.76e-06        0       40       263 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    9    -32.1    -18.1     8.33  2.76e-06        0        0       263 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -30.6    -22.6     14.1  2.76e-06        0     7.45       271   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
   11    -30.6    -22.6     14.1  2.76e-06        0        0       271 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12    -21.6    -29.1       28  2.76e-06        0     17.8       289 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
   13    -20.7    -29.7     29.3  2.76e-06        0     1.71       290   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   14    -20.4    -30.9     31.3  2.76e-06        0     2.37       293   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   15      105     -304      500  2.76e-06        0      557       849  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 186
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 213
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 253
Photon Angle == 0.4619429964582351
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      186    -15.4      100  2.76e-06        0        0         0   physWorld initStep
    1     37.1    -15.4     13.9  2.76e-06        0      172       172   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4588883598424065
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       35    -15.3     12.9  2.76e-06        0     2.36       175   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.9    -15.3     12.8  2.76e-06        0    0.126       175 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     11.5    -21.8    -9.09  2.76e-06        0     32.7       207 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     11.5    -21.8    -9.09  2.76e-06        0        0       207 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     9.27    -21.4      -10  2.76e-06 2.76e-06     2.42       210    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 187
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 26
No. of Photons Reflected == 214
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 254
Photon Angle == 0.4588883598424065
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      178     1.94      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1     1.94     20.4  2.76e-06        0      159       159   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4549407675404331
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1     1.92     19.5  2.76e-06        0     2.23       161   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38     1.92     19.4  2.76e-06        0    0.116       161 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4       38     1.92     19.4  2.76e-06        0        0       161   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     38.1     1.93     19.3  2.76e-06        0    0.116       162   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     40.1     2.12     18.4  2.76e-06        0     2.23       164   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      500     48.8     -249  2.76e-06        0      534       698  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 188
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 215
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 255
Photon Angle == 0.4549407675404331
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      166    -28.8      100  2.76e-06        0        0         0   physWorld initStep
    1       28    -28.8     20.4  2.76e-06        0      159       159   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4763351889062499
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.5    -28.4     19.1  2.76e-06        0     2.85       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     25.3    -28.4       19  2.76e-06        0    0.176       162 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     25.3    -28.4       19  2.76e-06        0        0       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     25.3    -28.6     18.9  2.76e-06        0    0.176       162   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     25.4    -31.1     17.7  2.76e-06        0     2.85       165   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -28.5     -500     -255  2.76e-06        0      545       710  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 189
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 216
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 256
Photon Angle == 0.4763351889062499
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      150       11      100  2.76e-06        0        0         0   physWorld initStep
    1     33.6       11     32.9  2.76e-06        0      134       134   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5670188364408477
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.8     10.9     31.8  2.76e-06        0     2.13       136 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     31.8     10.9     31.8  2.76e-06        0        0       136   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     32.5     11.7     33.6  2.76e-06        0     2.13       138   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      179      220      500  2.76e-06        0      531       670  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 190
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 217
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 257
Photon Angle == 0.5670188364408477
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      155    -29.4      100  2.76e-06        0        0         0   physWorld initStep
    1     27.4    -29.4       26  2.76e-06        0      148       148   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4780360025040293
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.8      -29     24.8  2.76e-06        0     2.89       151   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     24.6      -29     24.7  2.76e-06        0    0.181       151 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     24.6      -29     24.7  2.76e-06        0        0       151   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     24.6    -29.2     24.6  2.76e-06        0    0.181       151   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     24.6    -31.7     23.3  2.76e-06        0     2.89       154   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -52.2     -500     -251  2.76e-06        0      548       702  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 191
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 218
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 258
Photon Angle == 0.4780360025040293
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      172    -12.6      100  2.76e-06        0        0         0   physWorld initStep
    1     38.1    -12.6     22.8  2.76e-06        0      154       154   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4574403471669859
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.1    -12.5     21.7  2.76e-06        0     2.31       157   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     35.9    -12.5     21.7  2.76e-06        0    0.122       157 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     1.63    -19.8      -10  2.76e-06 2.76e-06     47.3       204    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 192
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 26
No. of Photons Reflected == 218
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 258
Photon Angle == 0.4574403471669859
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      189    -19.6      100  2.76e-06        0        0         0   physWorld initStep
    1       35    -19.6     11.2  2.76e-06        0      178       178   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4619727737191073
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.8    -19.4     10.1  2.76e-06        0     2.46       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     32.7    -19.4       10  2.76e-06        0    0.135       180 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     32.1    -19.7     9.44  2.76e-06        0    0.907       181 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     32.1    -19.7     9.44  2.76e-06        0        0       181 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     26.7    -21.6     4.77  2.76e-06        0     7.37       188 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7     26.7    -21.6     4.77  2.76e-06        0        0       188 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     21.9      -23     1.08  2.76e-06        0     6.22       195 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    9     21.9      -23     1.08  2.76e-06        0        0       195 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     17.5      -24    -1.87  2.76e-06        0     5.38       200 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   11     17.5      -24    -1.87  2.76e-06        0        0       200 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     13.5    -24.6    -4.25  2.76e-06        0     4.74       205 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   13     13.5    -24.6    -4.25  2.76e-06        0        0       205 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14      9.7    -24.9    -6.18  2.76e-06        0     4.26       209 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   15      9.7    -24.9    -6.18  2.76e-06        0        0       209 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   16     6.13    -24.8    -7.74  2.76e-06        0     3.89       213 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   17     6.13    -24.8    -7.74  2.76e-06        0        0       213 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   18     2.77    -24.6    -8.99  2.76e-06        0      3.6       217 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   19     2.77    -24.6    -8.99  2.76e-06        0        0       217 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   20   -0.424      -24    -9.96  2.76e-06        0     3.38       220 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   21   -0.424      -24    -9.96  2.76e-06        0        0       220 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   22   -0.567      -24      -10  2.76e-06 2.76e-06    0.151       220    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 193
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 26
No. of Photons Reflected == 227
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 267
Photon Angle == 0.4619727737191073
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      193     23.8      100  2.76e-06        0        0         0   physWorld initStep
    1     27.5     23.8     4.66  2.76e-06        0      191       191   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.9785230848318429
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     27.5     23.8     4.66  2.76e-06        0        0       191   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -331      195     -500  2.76e-06        0      642       833  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 194
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 228
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 268
Photon Angle == 0.9785230848318429
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      192      -27      100  2.76e-06        0        0         0   physWorld initStep
    1     19.3      -27   0.0538  2.76e-06        0      200       200   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7274520479110298
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     19.3      -27   0.0538  2.76e-06        0        0       200   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -500     -143     -448  2.76e-06        0      695       895  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 195
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 229
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 269
Photon Angle == 0.7274520479110298
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      154     19.8      100  2.76e-06        0        0         0   physWorld initStep
    1     32.8     19.8       30  2.76e-06        0      140       140   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5647413825029455
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       31     19.6     28.9  2.76e-06        0     2.21       142 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 196
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 229
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 270
Photon Angle == 0.5647413825029455
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      186    -24.5      100  2.76e-06        0        0         0   physWorld initStep
    1     31.8    -24.5     10.9  2.76e-06        0      178       178   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4678461380453789
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     29.1    -24.2      9.6  2.76e-06        0        3       181   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     29.1    -24.2      9.6  2.76e-06        0        0       181   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     27.2    -25.5     5.85  2.76e-06        0     4.38       186   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     27.2    -25.5     5.85  2.76e-06        0 6.48e-15       186   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     23.2    -24.8     4.04  2.76e-06        0      4.4       190   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     23.2    -24.8     4.04  2.76e-06        0        0       190   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8       21      -26    0.434  2.76e-06        0     4.38       194   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9       21      -26    0.434  2.76e-06        0        0       194   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     17.1      -25    -1.22  2.76e-06        0     4.41       199   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11     17.1      -25    -1.22  2.76e-06        0        0       199   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     14.6    -26.1    -4.62  2.76e-06        0     4.38       203   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   13     14.6    -26.1    -4.62  2.76e-06        0        0       203   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14     10.6    -24.7    -6.04  2.76e-06        0     4.42       208   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   15     10.6    -24.7    -6.04  2.76e-06        0        0       208   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   16     7.67    -25.6    -9.17  2.76e-06        0     4.38       212   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   17     7.67    -25.6    -9.17  2.76e-06        0        0       212   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   18     4.76    -24.1      -10  2.76e-06 2.76e-06     3.38       215    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 197
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 27
No. of Photons Reflected == 237
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 278
Photon Angle == 0.4678461380453789
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      206    -4.78      100  2.76e-06        0        0         0   physWorld initStep
    1     32.5    -4.78   -0.379  2.76e-06        0      201       201   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3096476274874918
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     29.9    -4.71    -1.21  2.76e-06        0     2.73       203   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     29.8    -4.71    -1.25  2.76e-06        0   0.0783       204 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     29.8    -4.71    -1.25  2.76e-06        0        0       204   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     29.8    -4.71    -1.32  2.76e-06        0   0.0772       204   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     29.9    -5.05    -4.02  2.76e-06        0     2.72       206   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -68.3    -58.9     -500  2.76e-06        0      508       715  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 198
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 238
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 279
Photon Angle == 0.3096476274874918
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 1.047197551196598
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      158       22      100  2.76e-06        0        0         0   physWorld initStep
    1     33.6       22       28  2.76e-06        0      144       144   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4644290032014418
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.3     21.8     26.9  2.76e-06        0     2.53       147   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     31.2     21.8     26.8  2.76e-06        0    0.141       147 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4       11     33.3     5.79  2.76e-06        0     31.4       178 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5       11     33.3     5.79  2.76e-06        0        0       178 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -28.7     14.9     1.92  2.76e-06        0     43.9       222 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -28.7     14.9     1.92  2.76e-06        0        0       222 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -33.1    -18.8     23.9  2.76e-06        0     40.5       263   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -33.1    -18.9       24  2.76e-06        0    0.131       263   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    -34.3    -20.8     24.8  2.76e-06        0     2.41       265   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     -284     -500      264  2.76e-06        0      591       856  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 199
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 240
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 281
Photon Angle == 0.4644290032014418
 Run terminated.
Run Summary
  Number of events processed : 200
  User=1.19s Real=1.22s Sys=0.02s
FileName = run.mac
G4 kernel has come to Quit state.
================== Deleting memory pools ===================
Number of memory pools allocated: 9; of which, static: 0
Dynamic pools deleted: 9 / Total memory freed: 0.057 Mb
============================================================
RunManagerKernel is deleted. Good bye :)
Graphics systems deleted.
Visualization Manager deleting...
