
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
THE VALUE OF ANGLE IN RADIANS == 0.872665
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
    0      103     4.06      100  2.76e-06        0        0         0   physWorld initStep
    1     28.7     4.06     37.8  2.76e-06        0     96.8      96.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7353900423184832
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.1     4.04     36.4  2.76e-06        0     2.08      98.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 0
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 0
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 1
Photon Angle == 0.7353900423184832
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
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
    0      148    -9.49      100  2.76e-06        0        0         0   physWorld initStep
    1     36.2    -9.49     6.16  2.76e-06        0      146       146   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4012300293873738
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.3    -9.29     4.95  2.76e-06        0     3.15       149   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     33.2    -9.29      4.8  2.76e-06        0    0.237       149 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     33.2    -9.29      4.8  2.76e-06        0        0       149   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     33.1    -9.31     4.59  2.76e-06        0    0.231       150   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     32.7    -9.83     1.51  2.76e-06        0     3.14       153   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -182    -67.2     -500  2.76e-06        0      549       701  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 1
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 1
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 2
Photon Angle == 0.4012300293873738
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
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
    0      114     3.94      100  2.76e-06        0        0         0   physWorld initStep
    1     34.5     3.94     33.5  2.76e-06        0      104       104   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7179867186757236
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.9     3.92     32.1  2.76e-06        0     2.03       106 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     27.4     4.11       28  2.76e-06        0     6.94       112 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -23.4     5.84    -9.76  2.76e-06        0     63.3       176 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -23.4     5.84    -9.76  2.76e-06        0        0       176 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     30.2    -19.7       28  2.76e-06        0     70.4       246 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7       31    -20.1     28.6  2.76e-06        0     1.07       247   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     32.5    -20.8     29.8  2.76e-06        0     2.02       249   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      500     -261      403  2.76e-06        0      645       894  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 2
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 4
Photon Angle == 0.7179867186757236
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
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
    0      124    -24.7      100  2.76e-06        0        0         0   physWorld initStep
    1     31.7    -24.7     22.3  2.76e-06        0      121       121   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6137585823100942
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     29.3    -24.4     20.7  2.76e-06        0     2.83       124   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     29.2    -24.4     20.6  2.76e-06        0    0.171       124 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     29.2    -24.4     20.6  2.76e-06        0        0       124   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     29.2    -24.5     20.5  2.76e-06        0    0.171       124   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       30    -26.7     18.9  2.76e-06        0     2.83       127   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      116     -500     -385  2.76e-06        0      628       755  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 3
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 3
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 5
Photon Angle == 0.6137585823100942
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
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
    0      136    -22.9      100  2.76e-06        0        0         0   physWorld initStep
    1     32.9    -22.9     13.3  2.76e-06        0      135       135   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6112369364947319
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.7    -22.7     11.7  2.76e-06        0     2.76       138   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.6    -22.7     11.6  2.76e-06        0    0.164       138 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     30.6    -22.7     11.6  2.76e-06        0        0       138   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     30.6    -22.8     11.5  2.76e-06        0    0.164       138   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     31.5    -24.8     9.97  2.76e-06        0     2.73       141   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      204     -500     -328  2.76e-06        0      608       749  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 4
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 4
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 6
Photon Angle == 0.6112369364947319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
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
    0      152       12      100  2.76e-06        0        0         0   physWorld initStep
    1     27.2       12     -4.9  2.76e-06        0      163       163   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  1.09227492681567
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     27.2       12     -4.9  2.76e-06        0        0       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -233       88     -500  2.76e-06        0      564       727  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 5
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 5
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 7
Photon Angle == 1.09227492681567
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
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
    0      125    -34.2      100  2.76e-06        0        0         0   physWorld initStep
    1       21    -34.2       13  2.76e-06        0      135       135   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.644684061180834
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     18.3    -33.5     11.1  2.76e-06        0     3.46       139   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       18    -33.5     10.9  2.76e-06        0    0.296       139 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4       18    -33.5     10.9  2.76e-06        0        0       139   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     17.9    -33.7     10.7  2.76e-06        0    0.296       139   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     17.2    -35.7     9.26  2.76e-06        0     2.57       142   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -210     -500     -322  2.76e-06        0      614       756  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 6
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 6
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 8
Photon Angle == 0.644684061180834
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
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
    0      116    -20.3      100  2.76e-06        0        0         0   physWorld initStep
    1     32.7    -20.3     29.8  2.76e-06        0      109       109   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7166003107078081
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.1    -20.2     28.4  2.76e-06        0     2.15       111 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     31.1    -20.2     28.4  2.76e-06        0        0       111   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     31.9    -21.6     29.8  2.76e-06        0     2.15       113   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      260     -500      433  2.76e-06        0      666       779  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 7
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 7
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 9
Photon Angle == 0.7166003107078081
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
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
    0      124    -33.5      100  2.76e-06        0        0         0   physWorld initStep
    1     22.2    -33.5     14.4  2.76e-06        0      133       133   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6402723633959044
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     19.4    -32.8     12.5  2.76e-06        0     3.38       137   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     19.2    -32.8     12.3  2.76e-06        0    0.274       137 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     19.2    -32.8     12.3  2.76e-06        0        0       137   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     19.1      -33     12.1  2.76e-06        0    0.274       137   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     18.4    -35.7     10.2  2.76e-06        0     3.38       141   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -242     -500     -436  2.76e-06        0      695       835  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 8
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 8
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 10
Photon Angle == 0.6402723633959044
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
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
    0      120    -28.1      100  2.76e-06        0        0         0   physWorld initStep
    1     28.7    -28.1     23.3  2.76e-06        0      119       119   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6204152722412175
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.2    -27.7     21.6  2.76e-06        0     2.99       122   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     26.1    -27.7     21.5  2.76e-06        0    0.193       122 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     26.1    -27.7     21.5  2.76e-06        0        0       122   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.1    -27.8     21.4  2.76e-06        0    0.193       123   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     26.3    -30.3     19.7  2.76e-06        0     2.99       126   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -1.65     -500     -375  2.76e-06        0      614       740  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 9
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 9
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 11
Photon Angle == 0.6204152722412175
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      101    -21.2      100  2.76e-06        0        0         0   physWorld initStep
    1     24.2    -21.2     35.5  2.76e-06        0      100       100   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7432886550902298
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.6    -21.1       34  2.76e-06        0     2.25       103 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     12.9    -23.2       28  2.76e-06        0     11.6       114 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -20.1    -30.4      7.7  2.76e-06        0     39.4       154 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -20.1    -30.4      7.7  2.76e-06        0        0       154 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -25.9     15.3       28  2.76e-06        0     50.3       204 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -26.7     21.9     30.9  2.76e-06        0     7.24       211   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -27.4     23.6     32.2  2.76e-06        0     2.21       213   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     -175      500      345  2.76e-06        0      589       802  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 10
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 10
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 13
Photon Angle == 0.7432886550902298
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      125    -2.19      100  2.76e-06        0        0         0   physWorld initStep
    1     39.5    -2.19     28.7  2.76e-06        0      111       111   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7018299841271278
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.7    -2.19       28  2.76e-06        0     1.02       112   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     38.1    -2.18     27.5  2.76e-06        0    0.849       113   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4       38    -2.19     27.3  2.76e-06        0    0.148       113 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     34.1    -3.33     4.68  2.76e-06        0       23       136 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    6     34.1    -3.33     4.68  2.76e-06        0        0       136 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     7.73    -2.75      -10  2.76e-06 2.76e-06     30.2       166    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 11
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 1
No. of Photons Reflected == 11
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 14
Photon Angle == 0.7018299841271278
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      127    -27.8      100  2.76e-06        0        0         0   physWorld initStep
    1     28.9    -27.8     17.4  2.76e-06        0      128       128   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6197461023248843
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.5    -27.4     15.8  2.76e-06        0     2.97       131   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     26.4    -27.4     15.6  2.76e-06        0    0.191       132 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     26.4    -27.4     15.6  2.76e-06        0        0       132   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.4    -27.6     15.5  2.76e-06        0    0.191       132   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     26.7      -30     13.8  2.76e-06        0     2.97       135   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     8.56     -500     -381  2.76e-06        0      614       749  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 12
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 12
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 15
Photon Angle == 0.6197461023248843
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      121       23      100  2.76e-06        0        0         0   physWorld initStep
    1     32.9       23     25.7  2.76e-06        0      116       116   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6113506501637325
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.6     22.7     24.1  2.76e-06        0     2.76       118   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.5     22.7       24  2.76e-06        0    0.164       119 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     30.5     22.7       24  2.76e-06        0        0       119   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     30.5     22.9     23.9  2.76e-06        0    0.164       119   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     31.5       25     22.3  2.76e-06        0     2.76       122   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      173      500     -394  2.76e-06        0      647       768  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 13
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 13
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 16
Photon Angle == 0.6113506501637325
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      127    -1.62      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1    -1.62     26.7  2.76e-06        0      114       114   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6002665361166089
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1     -1.6     25.4  2.76e-06        0     2.43       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38     -1.6     25.3  2.76e-06        0    0.131       117 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     17.2    -2.52      -10  2.76e-06 2.76e-06       41       157    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 14
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 1
No. of Photons Reflected == 13
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 16
Photon Angle == 0.6002665361166089
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      119     27.7      100  2.76e-06        0        0         0   physWorld initStep
    1     29.1     27.7     24.5  2.76e-06        0      118       118   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6194949633907414
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.6     27.3     22.8  2.76e-06        0     2.97       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     26.5     27.3     22.7  2.76e-06        0     0.19       121 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     26.5     27.3     22.7  2.76e-06        0        0       121   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.5     27.5     22.5  2.76e-06        0     0.19       121   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     26.8     29.9     20.9  2.76e-06        0     2.97       124   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     12.5      500     -374  2.76e-06        0      614       738  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 15
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 14
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 17
Photon Angle == 0.6194949633907414
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      146     4.92      100  2.76e-06        0        0         0   physWorld initStep
    1     39.8     4.92     10.9  2.76e-06        0      139       139   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6006025824696231
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.1     4.85     8.99  2.76e-06        0      3.3       142   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     37.1     4.85     8.99  2.76e-06        0        0       142   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     35.9     5.11     4.45  2.76e-06        0     4.72       147   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     35.9     5.11     4.45  2.76e-06        0        0       147   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6       32     4.99     1.79  2.76e-06        0     4.72       151   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7       32     4.99     1.79  2.76e-06        0        0       151   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     30.7     5.29    -2.75  2.76e-06        0     4.71       156   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9     30.7     5.29    -2.75  2.76e-06        0        0       156   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     26.8     5.12     -5.4  2.76e-06        0     4.72       161   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11     26.8     5.12     -5.4  2.76e-06        0        0       161   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     25.6     5.46    -9.93  2.76e-06        0     4.71       166   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   13     25.6     5.46    -9.93  2.76e-06        0        0       166   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14     25.5     5.45      -10  2.76e-06 2.76e-06    0.132       166    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 16
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 1
No. of Photons Reflected == 20
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 23
Photon Angle == 0.6006025824696231
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     89.1    -11.7      100  2.76e-06        0        0         0   physWorld initStep
    1     19.3    -11.7     41.4  2.76e-06        0     91.2      91.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8095360065094441
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     17.6    -11.6     39.8  2.76e-06        0     2.25      93.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 17
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 20
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 24
Photon Angle == 0.8095360065094441
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      114    -21.1      100  2.76e-06        0        0         0   physWorld initStep
    1     31.5    -21.1     30.4  2.76e-06        0      108       108   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7201012203380501
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     29.8      -21       29  2.76e-06        0     2.16       110 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 18
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 20
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 25
Photon Angle == 0.7201012203380501
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     91.5     10.1      100  2.76e-06        0        0         0   physWorld initStep
    1     21.1     10.1     40.9  2.76e-06        0     91.9      91.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8147129255751508
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     19.5       10     39.4  2.76e-06        0     2.21      94.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3   -0.972       12       28  2.76e-06        0     23.6       118 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -34.4     15.2     9.38  2.76e-06        0     38.4       156 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -34.4     15.2     9.38  2.76e-06        0        0       156 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -17.4    -1.43       28  2.76e-06        0     30.2       186 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -4.39    -14.1     42.2  2.76e-06        0     23.1       209   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    8    -4.39    -14.1     42.2  2.76e-06        0        0       209 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     9.25    -17.4       28  2.76e-06        0       20       229 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
   10     28.8    -22.2     7.62  2.76e-06        0     28.7       258 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   11     28.8    -22.2     7.62  2.76e-06        0        0       258 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12   -0.878     20.9       28  2.76e-06        0     56.2       314 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
   13    -8.02     31.3     32.9  2.76e-06        0     13.5       328   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   14    -8.89     32.8       34  2.76e-06        0     2.14       330   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   15     -282      500      344  2.76e-06        0      624       953  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 19
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 23
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 29
Photon Angle == 0.8147129255751508
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      128    -17.1      100  2.76e-06        0        0         0   physWorld initStep
    1     36.3    -17.1     22.8  2.76e-06        0      120       120   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6054719665765287
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.2    -16.9     21.3  2.76e-06        0     2.59       123   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.1    -16.9     21.2  2.76e-06        0    0.146       123 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4     34.1    -16.9     21.2  2.76e-06        0        0       123   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     34.2      -17     21.1  2.76e-06        0    0.146       123   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     35.6    -18.6     19.7  2.76e-06        0     2.59       126   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      403     -500     -488  2.76e-06        0      790       916  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 20
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 24
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 30
Photon Angle == 0.6054719665765287
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     89.5     22.8      100  2.76e-06        0        0         0   physWorld initStep
    1     16.2     22.8     38.4  2.76e-06        0     95.8      95.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8063353917932004
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     14.4     22.6     36.8  2.76e-06        0     2.41      98.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 21
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 24
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 31
Photon Angle == 0.8063353917932004
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      112     28.2      100  2.76e-06        0        0         0   physWorld initStep
    1     27.5     28.2     28.8  2.76e-06        0      111       111   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7268398952621675
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.6     28.1       28  2.76e-06        0     1.22       112   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     25.8     28.1     27.3  2.76e-06        0     1.04       113   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     25.7     28.1     27.1  2.76e-06        0    0.297       113 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     25.7     28.1     27.1  2.76e-06        0        0       113   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     25.6     28.3     26.9  2.76e-06        0    0.297       114   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     25.6     30.9     24.6  2.76e-06        0     3.49       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8      -94      476     -500  2.76e-06        0      698       815  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 22
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 25
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 32
Photon Angle == 0.7268398952621675
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      115     24.2      100  2.76e-06        0        0         0   physWorld initStep
    1     30.9     24.2       29  2.76e-06        0      110       110   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7194446534544432
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     29.7     24.1       28  2.76e-06        0     1.59       112   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     29.6     24.1     27.9  2.76e-06        0    0.129       112   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4     29.6     24.1     27.9  2.76e-06        0 4.79e-15       112   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     30.3     26.4     25.8  2.76e-06        0     3.18       115   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       71      493     -500  2.76e-06        0      704       820  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 23
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 26
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 33
Photon Angle == 0.7194446534544432
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      147    -7.79      100  2.76e-06        0        0         0   physWorld initStep
    1     39.3    -7.79     9.86  2.76e-06        0      140       140   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4014711236361546
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.4    -7.64     8.65  2.76e-06        0     3.13       143   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.2    -7.64     8.47  2.76e-06        0    0.281       144 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     36.2    -7.64     8.47  2.76e-06        0        0       144   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     36.1    -7.66     8.21  2.76e-06        0    0.275       144   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     35.8    -8.06     5.13  2.76e-06        0     3.12       147   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -166    -53.5     -500  2.76e-06        0      546       693  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 24
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 27
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 34
Photon Angle == 0.4014711236361546
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      108    -22.7      100  2.76e-06        0        0         0   physWorld initStep
    1     27.6    -22.7     32.5  2.76e-06        0      105       105   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7314449674044337
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       26    -22.5       31  2.76e-06        0     2.22       107 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 25
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 27
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 35
Photon Angle == 0.7314449674044337
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      146     22.2      100  2.76e-06        0        0         0   physWorld initStep
    1     -183     22.2     -177  2.76e-06        0      430       430   physWorld OpAbsorption
THE INCIDENT ANGLE IS G 83:  0.6981317007977319
TRACK ID == 1
THE CURRENT EVENTID IS == 26
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 27
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 35
Photon Angle == 0.6981317007977319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      114     15.6      100  2.76e-06        0        0         0   physWorld initStep
    1     32.8     15.6       32  2.76e-06        0      106       106   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7194227754862221
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.2     15.5     30.6  2.76e-06        0      2.1       108 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     27.6       16       28  2.76e-06        0     4.46       112 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -16.5     22.4    -4.54  2.76e-06        0     55.2       168 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -16.5     22.4    -4.54  2.76e-06        0        0       168 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -17.7    -33.7     15.4  2.76e-06        0     59.5       227   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -17.7    -33.8     15.4  2.76e-06        0    0.109       227   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -18.1    -35.8     15.9  2.76e-06        0     2.13       229   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -90.7     -500      137  2.76e-06        0      485       714  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 27
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 28
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 37
Photon Angle == 0.7194227754862221
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      108     28.5      100  2.76e-06        0        0         0   physWorld initStep
    1     25.1     28.5     30.3  2.76e-06        0      108       108   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7347975680779144
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     23.4     28.4     28.7  2.76e-06        0     2.35       111 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 28
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 28
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 38
Photon Angle == 0.7347975680779144
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     92.8    -4.96      100  2.76e-06        0        0         0   physWorld initStep
    1     22.6    -4.96     41.1  2.76e-06        0     91.6      91.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8177550695290976
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       21    -4.93     39.6  2.76e-06        0     2.16      93.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3       21    -4.93     39.6  2.76e-06        0        0      93.8   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     21.1    -5.29     41.7  2.76e-06        0     2.16        96   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     8.81    -86.1      500  2.76e-06        0      465       561  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 29
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 29
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 39
Photon Angle == 0.8177550695290976
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      138      -29      100  2.76e-06        0        0         0   physWorld initStep
    1     -500      -29     -435  2.76e-06        0      833       833  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.6981317007977319
TRACK ID == 1
THE CURRENT EVENTID IS == 30
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 29
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 39
Photon Angle == 0.6981317007977319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      114     23.6      100  2.76e-06        0        0         0   physWorld initStep
    1     30.4     23.6     29.8  2.76e-06        0      109       109   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7215434009006416
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     28.8     23.4     28.4  2.76e-06        0     2.21       111 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     28.2     23.6       28  2.76e-06        0    0.672       112 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -6.77     32.1     2.59  2.76e-06        0     44.1       156 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -6.77     32.1     2.59  2.76e-06        0        0       156 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -36.7    -8.87     9.64  2.76e-06        0     51.3       207 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -36.7    -8.87     9.64  2.76e-06        0        0       207 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -30.1    -23.2       28  2.76e-06        0     24.2       232   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -29.7    -24.1     30.1  2.76e-06        0      2.3       234   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10      143     -208      500  2.76e-06        0      533       767  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 31
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 31
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 42
Photon Angle == 0.7215434009006416
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      111    -13.5      100  2.76e-06        0        0         0   physWorld initStep
    1       32    -13.5     33.5  2.76e-06        0      103       103   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7231118253936319
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     30.4    -13.4     32.1  2.76e-06        0     2.09       106 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 32
Energy Deposited == 0
No. of Photons Absorbed == 7
No. of Photons Reflected == 31
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 43
Photon Angle == 0.7231118253936319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      147     9.85      100  2.76e-06        0        0         0   physWorld initStep
    1     37.1     9.85     7.54  2.76e-06        0      144       144   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4012184737857956
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.2     9.64     6.33  2.76e-06        0     3.15       147   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       34     9.64     6.16  2.76e-06        0    0.259       147 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4       34     9.64     6.16  2.76e-06        0        0       147   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     33.9     9.67     5.93  2.76e-06        0    0.253       148   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     33.6     10.2     2.85  2.76e-06        0     3.14       151   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -182     68.2     -500  2.76e-06        0      550       701  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 33
Energy Deposited == 0
No. of Photons Absorbed == 7
No. of Photons Reflected == 32
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 44
Photon Angle == 0.4012184737857956
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     98.5    -19.5      100  2.76e-06        0        0         0   physWorld initStep
    1     23.3    -19.5     36.8  2.76e-06        0     98.3      98.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8261779503485953
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     21.6    -19.4     35.3  2.76e-06        0     2.24       100 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 34
Energy Deposited == 0
No. of Photons Absorbed == 8
No. of Photons Reflected == 32
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 45
Photon Angle == 0.8261779503485953
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      110    -13.1      100  2.76e-06        0        0         0   physWorld initStep
    1     31.3    -13.1     34.2  2.76e-06        0      102       102   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7254222650642639
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     29.7      -13     32.8  2.76e-06        0     2.09       105 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 35
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 32
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 46
Photon Angle == 0.7254222650642639
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      122     18.1      100  2.76e-06        0        0         0   physWorld initStep
    1     35.8     18.1       28  2.76e-06        0      112       112   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7077946766169925
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.8     18.1       28  2.76e-06        0   0.0475       112   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     33.6       18     26.2  2.76e-06        0      2.8       115   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     33.5       18     26.1  2.76e-06        0    0.176       115 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     33.5       18     26.1  2.76e-06        0        0       115   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     33.6     18.1     25.9  2.76e-06        0    0.176       115   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     34.9     19.9     24.1  2.76e-06        0     2.88       118   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8      270      437     -500  2.76e-06        0      710       828  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 36
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 33
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 47
Photon Angle == 0.7077946766169925
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      125     33.5      100  2.76e-06        0        0         0   physWorld initStep
    1     22.2     33.5     13.4  2.76e-06        0      135       135   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6401495571472506
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     19.5     32.8     11.5  2.76e-06        0     3.38       138   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     19.3     32.8     11.3  2.76e-06        0    0.273       138 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     19.3     32.8     11.3  2.76e-06        0        0       138   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     19.2       33     11.2  2.76e-06        0    0.273       139   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     18.5     35.3     9.55  2.76e-06        0     2.85       141   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -172      500     -314  2.76e-06        0      597       739  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 37
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 34
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 48
Photon Angle == 0.6401495571472506
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      155    -1.99      100  2.76e-06        0        0         0   physWorld initStep
    1     29.4    -1.99    -5.21  2.76e-06        0      164       164   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4018636339756703
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.5    -1.94    -6.42  2.76e-06        0      3.1       167   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     26.5    -1.94    -6.45  2.76e-06        0   0.0511       167 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     26.5    -1.94    -6.45  2.76e-06        0        0       167   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.5    -1.94     -6.5  2.76e-06        0     0.05       167   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     26.3    -2.08    -9.58  2.76e-06        0     3.09       170   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7       26    -2.11    -10.4  2.76e-06 2.76e-06    0.867       171    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 38
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 35
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 49
Photon Angle == 0.4018636339756703
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      147     -7.1      100  2.76e-06        0        0         0   physWorld initStep
    1     39.5     -7.1     10.2  2.76e-06        0      140       140   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.601021049296345
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.9    -6.98     7.74  2.76e-06        0      4.4       144   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     35.9    -6.98     7.74  2.76e-06        0        0       144   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     34.6    -7.36     3.17  2.76e-06        0     4.77       149   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     34.6    -7.36     3.17  2.76e-06        0        0       149   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     30.6    -7.18    0.484  2.76e-06        0     4.77       154   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     30.6    -7.18    0.484  2.76e-06        0        0       154   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     29.3    -7.61    -4.07  2.76e-06        0     4.77       158   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9     29.3    -7.61    -4.07  2.76e-06        0 4.46e-15       158   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     25.3    -7.36    -6.74  2.76e-06        0     4.77       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11     25.3    -7.36    -6.74  2.76e-06        0        0       163   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     24.3    -7.71      -10  2.76e-06 2.76e-06     3.43       167    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 39
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 40
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 54
Photon Angle == 0.601021049296345
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      138     17.9      100  2.76e-06        0        0         0   physWorld initStep
    1     35.9     17.9       14  2.76e-06        0      134       134   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6061028086262743
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.8     17.7     12.5  2.76e-06        0     2.61       136   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     33.7     17.7     12.4  2.76e-06        0    0.148       137 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4     33.7     17.7     12.4  2.76e-06        0        0       137   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     33.7     17.8     12.3  2.76e-06        0    0.148       137   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     35.1     19.5     10.8  2.76e-06        0     2.61       139   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      366      500     -479  2.76e-06        0      761       901  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 40
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 41
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 55
Photon Angle == 0.6061028086262743
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      104     28.5      100  2.76e-06        0        0         0   physWorld initStep
    1     22.7     28.5     31.9  2.76e-06        0      106       106   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.743079095103139
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       21     28.3     30.3  2.76e-06        0     2.38       108 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     17.2     29.6       28  2.76e-06        0     4.66       113 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     -5.8     37.6     14.2  2.76e-06        0       28       141   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -5.9     37.7     14.1  2.76e-06        0    0.136       141   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -7.43     39.5     13.3  2.76e-06        0     2.47       144   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -491      500     -251  2.76e-06        0      718       862  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 41
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 41
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 56
Photon Angle == 0.743079095103139
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      134    -29.4      100  2.76e-06        0        0         0   physWorld initStep
    1     27.4    -29.4     10.6  2.76e-06        0      139       139   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6237014579408844
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.2    -28.4     7.07  2.76e-06        0     6.34       145   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     22.2    -28.4     7.07  2.76e-06        0        0       145   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     17.3    -29.1     1.02  2.76e-06        0     7.83       153   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     17.3    -29.1     1.02  2.76e-06        0        0       153   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     10.5      -27    -3.06  2.76e-06        0      8.2       161   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     10.5      -27    -3.06  2.76e-06        0        0       161   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8      4.7    -26.9    -8.34  2.76e-06        0     7.85       169   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9      4.7    -26.9    -8.34  2.76e-06        0 1.91e-14       169   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     1.01    -24.8      -10  2.76e-06 2.76e-06     4.53       174    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 42
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 45
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 60
Photon Angle == 0.6237014579408844
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      118    -3.67      100  2.76e-06        0        0         0   physWorld initStep
    1     36.8    -3.67     31.4  2.76e-06        0      107       107   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7108228904867424
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.2    -3.65     30.1  2.76e-06        0     2.01       109 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     32.5    -3.74       28  2.76e-06        0     3.42       112 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -16.4    -5.29      -10  2.76e-06 2.76e-06       62       174    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 43
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 45
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 61
Photon Angle == 0.7108228904867424
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      135    0.952      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1    0.952     20.7  2.76e-06        0      123       123   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6002401146695622
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1    0.943     19.3  2.76e-06        0     2.42       126   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38    0.943     19.3  2.76e-06        0    0.131       126 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     20.8     1.39      -10  2.76e-06 2.76e-06       34       160    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 44
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 45
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 61
Photon Angle == 0.6002401146695622
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      139     2.05      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1     2.05     17.4  2.76e-06        0      128       128   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6002911383552227
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1     2.03       16  2.76e-06        0     2.43       131   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38     2.03       16  2.76e-06        0    0.131       131 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     22.7     2.89      -10  2.76e-06 2.76e-06     30.1       161    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 45
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 45
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 61
Photon Angle == 0.6002911383552227
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      136     1.39      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1     1.39     19.6  2.76e-06        0      125       125   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6002560958801864
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1     1.38     18.2  2.76e-06        0     2.42       128   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38     1.38     18.1  2.76e-06        0    0.131       128 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     21.5     2.01      -10  2.76e-06 2.76e-06     32.6       160    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 46
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 45
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 61
Photon Angle == 0.6002560958801864
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      145       25      100  2.76e-06        0        0         0   physWorld initStep
    1     -500       25     -441  2.76e-06        0      842       842  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.6981317007977319
TRACK ID == 1
THE CURRENT EVENTID IS == 47
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 45
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 61
Photon Angle == 0.6981317007977319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      144     22.8      100  2.76e-06        0        0         0   physWorld initStep
    1     22.1     22.8    -1.92  2.76e-06        0      159       159   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8094602358236718
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     22.1     22.8    -1.92  2.76e-06        0        0       159   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -455     77.2     -500  2.76e-06        0      692       851  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 48
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 46
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 62
Photon Angle == 0.8094602358236718
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      120    -7.15      100  2.76e-06        0        0         0   physWorld initStep
    1     37.3    -7.15     30.4  2.76e-06        0      108       108   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7083123210474036
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.8    -7.12       29  2.76e-06        0     2.02       110 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     35.8    -7.12       29  2.76e-06        0        0       110   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4       37    -7.64     30.5  2.76e-06        0     2.02       112   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      431     -183      500  2.76e-06        0      638       750  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 49
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 47
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 63
Photon Angle == 0.7083123210474036
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      124     14.8      100  2.76e-06        0        0         0   physWorld initStep
    1     37.3     14.8     27.2  2.76e-06        0      113       113   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6040018031394125
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.2     14.6     25.8  2.76e-06        0     2.55       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     35.1     14.6     25.7  2.76e-06        0    0.142       116 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     21.9       22   0.0477  2.76e-06        0     29.8       146 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     21.9       22   0.0477  2.76e-06        0        0       146 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    0.828     17.3      -10  2.76e-06 2.76e-06     23.8       170    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 50
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 48
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 64
Photon Angle == 0.6040018031394125
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      112     8.01      100  2.76e-06        0        0         0   physWorld initStep
    1     33.4     8.01     33.7  2.76e-06        0      103       103   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7204149818044363
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.9     7.98     32.4  2.76e-06        0     2.05       105 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     31.9     7.98     32.4  2.76e-06        0        0       105   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     32.9     8.56     34.1  2.76e-06        0     2.05       107   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      281      177      500  2.76e-06        0      554       661  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 51
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 49
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 65
Photon Angle == 0.7204149818044363
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      134     15.6      100  2.76e-06        0        0         0   physWorld initStep
    1       37     15.6     18.7  2.76e-06        0      126       126   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6044849880833252
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.9     15.4     17.3  2.76e-06        0     2.56       129   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.8     15.4     17.2  2.76e-06        0    0.143       129 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     28.7     19.2     5.03  2.76e-06        0     14.1       143 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     28.7     19.2     5.03  2.76e-06        0        0       143 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     1.83     18.4      -10  2.76e-06 2.76e-06     30.8       174    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 52
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 50
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 66
Photon Angle == 0.6044849880833252
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      144     14.6      100  2.76e-06        0        0         0   physWorld initStep
    1     37.4     14.6     10.8  2.76e-06        0      139       139   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6039175784585358
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.4     14.4     8.79  2.76e-06        0     3.63       142   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     34.4     14.4     8.79  2.76e-06        0        0       142   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     32.6     15.1     4.04  2.76e-06        0     5.13       147   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     32.6     15.1     4.04  2.76e-06        0  1.6e-14       147   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     28.4     14.7     1.19  2.76e-06        0     5.14       153   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     28.4     14.7     1.19  2.76e-06        0        0       153   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     26.5     15.5     -3.5  2.76e-06        0     5.12       158   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9     26.5     15.5     -3.5  2.76e-06        0 1.86e-14       158   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     22.2     14.9    -6.28  2.76e-06        0     5.15       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11     22.2     14.9    -6.28  2.76e-06        0        0       163   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     20.4     15.6      -10  2.76e-06 2.76e-06     4.15       167    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 53
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 55
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 71
Photon Angle == 0.6039175784585358
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      146    -8.28      100  2.76e-06        0        0         0   physWorld initStep
    1     39.3    -8.28     10.5  2.76e-06        0      139       139   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6013187844198895
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       36    -8.15     8.18  2.76e-06        0     4.03       143   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3       36    -8.15     8.18  2.76e-06        0        0       143   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     34.6    -8.59     3.59  2.76e-06        0     4.81       148   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     34.6    -8.59     3.59  2.76e-06        0 1.53e-14       148   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     30.6    -8.38    0.891  2.76e-06        0     4.81       153   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     30.6    -8.38    0.891  2.76e-06        0        0       153   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     29.2    -8.87    -3.68  2.76e-06        0     4.81       158   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9     29.2    -8.87    -3.68  2.76e-06        0        0       158   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     25.2    -8.58    -6.36  2.76e-06        0     4.81       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11     25.2    -8.58    -6.36  2.76e-06        0        0       163   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     24.1    -9.03      -10  2.76e-06 2.76e-06     3.85       166    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 54
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 60
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 76
Photon Angle == 0.6013187844198895
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      138    -15.5      100  2.76e-06        0        0         0   physWorld initStep
    1       37    -15.5     15.7  2.76e-06        0      131       131   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6044442826455847
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.9    -15.4     14.2  2.76e-06        0     2.56       134   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.8    -15.4     14.2  2.76e-06        0    0.143       134 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     31.1    -17.7     6.75  2.76e-06        0     8.59       142 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     31.1    -17.7     6.75  2.76e-06        0        0       142 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     3.67    -18.6      -10  2.76e-06 2.76e-06     32.2       175    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 55
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 61
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 77
Photon Angle == 0.6044442826455847
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      123      -20      100  2.76e-06        0        0         0   physWorld initStep
    1     34.8      -20     25.6  2.76e-06        0      116       116   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6079661770728495
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.6    -19.8     24.1  2.76e-06        0     2.67       118   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     32.5    -19.8       24  2.76e-06        0    0.153       119 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     32.5    -19.8       24  2.76e-06        0        0       119   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     32.5    -19.9     23.9  2.76e-06        0    0.153       119   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     33.7    -21.8     22.4  2.76e-06        0     2.67       121   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      280     -500     -429  2.76e-06        0      702       824  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 56
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 62
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 78
Photon Angle == 0.6079661770728495
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      154     1.36      100  2.76e-06        0        0         0   physWorld initStep
    1       30     1.36    -4.42  2.76e-06        0      162       162   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4018968842525088
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.1     1.33    -5.64  2.76e-06        0      3.1       166   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     27.1     1.33    -5.68  2.76e-06        0   0.0621       166 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     27.1     1.33    -5.68  2.76e-06        0        0       166   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     27.1     1.33    -5.73  2.76e-06        0   0.0607       166   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     26.9     1.43    -8.81  2.76e-06        0     3.09       169   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -151     12.3     -500  2.76e-06        0      523       691  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 57
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 63
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 79
Photon Angle == 0.4018968842525088
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      152     17.1      100  2.76e-06        0        0         0   physWorld initStep
    1     19.8     17.1    -10.6  2.76e-06 2.76e-06      172       172    absorber Transportation
THE INCIDENT ANGLE IS G 83:  0.6981317007977319
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 58
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 9
No. of Photons Reflected == 63
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 79
Photon Angle == 0.6981317007977319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     90.4     23.3      100  2.76e-06        0        0         0   physWorld initStep
    1     16.6     23.3       38  2.76e-06        0     96.4      96.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8080643101442231
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     14.8     23.2     36.4  2.76e-06        0     2.41      98.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 59
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 63
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 80
Photon Angle == 0.8080643101442231
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      122       26      100  2.76e-06        0        0         0   physWorld initStep
    1     30.6       26     23.1  2.76e-06        0      120       120   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.615898470679042
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     28.3     25.6     21.5  2.76e-06        0     2.88       122   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     28.1     25.6     21.4  2.76e-06        0    0.178       123 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     28.1     25.6     21.4  2.76e-06        0        0       123   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     28.2     25.7     21.3  2.76e-06        0    0.178       123   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     28.7       28     19.7  2.76e-06        0     2.88       126   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     73.5      500     -378  2.76e-06        0      619       745  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 60
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 64
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 81
Photon Angle == 0.615898470679042
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     95.4     2.81      100  2.76e-06        0        0         0   physWorld initStep
    1     24.3     2.81     40.4  2.76e-06        0     92.7      92.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8226442578575233
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     22.8      2.8       39  2.76e-06        0     2.13      94.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 61
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 64
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 82
Photon Angle == 0.8226442578575233
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      127      6.3      100  2.76e-06        0        0         0   physWorld initStep
    1     39.7      6.3       27  2.76e-06        0      114       114   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6008486847780379
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.6     6.24     25.6  2.76e-06        0     2.44       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.5     6.24     25.5  2.76e-06        0    0.132       116 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     16.9     9.91      -10  2.76e-06 2.76e-06     41.2       157    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 62
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 11
No. of Photons Reflected == 64
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 82
Photon Angle == 0.6008486847780379
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      134    -22.2      100  2.76e-06        0        0         0   physWorld initStep
    1     33.5    -22.2     15.6  2.76e-06        0      131       131   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6102507147055034
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.2    -21.9       14  2.76e-06        0     2.73       134   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     31.1    -21.9     13.9  2.76e-06        0     0.16       134 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     31.1    -21.9     13.9  2.76e-06        0        0       134   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     31.2      -22     13.8  2.76e-06        0     0.16       134   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     32.2      -24     12.3  2.76e-06        0     2.73       137   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      203     -500     -412  2.76e-06        0      660       797  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 63
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 65
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 83
Photon Angle == 0.6102507147055034
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      135     28.7      100  2.76e-06        0        0         0   physWorld initStep
    1     28.1     28.7     10.4  2.76e-06        0      139       139   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6219525538614166
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.5     27.7     6.55  2.76e-06        0     6.83       146   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     22.5     27.7     6.55  2.76e-06        0        0       146   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     17.7     28.5    0.564  2.76e-06        0     7.69       154   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     17.7     28.5    0.564  2.76e-06        0 1.15e-14       154   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6       11     26.5    -3.44  2.76e-06        0     8.03       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7       11     26.5    -3.44  2.76e-06        0        0       162   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     5.41     26.5     -8.7  2.76e-06        0      7.7       170   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9     5.41     26.5     -8.7  2.76e-06        0 1.92e-14       170   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     2.55     24.9      -10  2.76e-06 2.76e-06     3.49       173    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 64
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 11
No. of Photons Reflected == 69
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 87
Photon Angle == 0.6219525538614166
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      127    -4.21      100  2.76e-06        0        0         0   physWorld initStep
    1     39.9    -4.21     27.1  2.76e-06        0      113       113   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6005010400199797
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.9    -4.17     25.7  2.76e-06        0     2.43       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.8    -4.17     25.6  2.76e-06        0    0.131       116 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4       17    -6.59      -10  2.76e-06 2.76e-06     41.3       157    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 65
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 11
No. of Photons Reflected == 69
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 87
Photon Angle == 0.6005010400199797
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      100     2.59      100  2.76e-06        0        0         0   physWorld initStep
    1     27.4     2.59     38.7  2.76e-06        0     95.3      95.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7393344575736966
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     25.8     2.58     37.3  2.76e-06        0     2.09      97.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 66
Energy Deposited == 0
No. of Photons Absorbed == 12
No. of Photons Reflected == 69
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 88
Photon Angle == 0.7393344575736966
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      119     29.2      100  2.76e-06        0        0         0   physWorld initStep
    1     27.5     29.2     22.9  2.76e-06        0      120       120   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6233408367532762
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       25     28.8     21.1  2.76e-06        0     3.06       123   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     24.9     28.8       21  2.76e-06        0    0.204       123 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     24.9     28.8       21  2.76e-06        0        0       123   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     24.9     28.9     20.9  2.76e-06        0    0.204       123   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     24.9     31.5     19.1  2.76e-06        0     3.06       127   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -43.5      500     -378  2.76e-06        0      618       745  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 67
Energy Deposited == 0
No. of Photons Absorbed == 12
No. of Photons Reflected == 70
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 89
Photon Angle == 0.6233408367532762
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      117    -16.2      100  2.76e-06        0        0         0   physWorld initStep
    1     34.1    -16.2     30.6  2.76e-06        0      108       108   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7149988425913527
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     32.5    -16.1     29.3  2.76e-06        0     2.09       110 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 68
Energy Deposited == 0
No. of Photons Absorbed == 13
No. of Photons Reflected == 70
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 90
Photon Angle == 0.7149988425913527
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      137    -6.16      100  2.76e-06        0        0         0   physWorld initStep
    1     39.7    -6.16     18.1  2.76e-06        0      127       127   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.600820788276315
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.7     -6.1     16.7  2.76e-06        0     2.44       130   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.6     -6.1     16.7  2.76e-06        0    0.132       130 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     22.1    -8.79      -10  2.76e-06 2.76e-06     30.9       161    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 69
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 13
No. of Photons Reflected == 70
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 90
Photon Angle == 0.600820788276315
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     99.2     24.8      100  2.76e-06        0        0         0   physWorld initStep
    1     21.6     24.8     34.9  2.76e-06        0      101       101   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8259380844509785
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     19.9     24.7     33.3  2.76e-06        0     2.34       104 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     19.9     24.7     33.3  2.76e-06        0        0       104   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     19.8     26.4     34.9  2.76e-06        0     2.34       106   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -64.7      500      409  2.76e-06        0      610       715  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 70
Energy Deposited == 0
No. of Photons Absorbed == 13
No. of Photons Reflected == 71
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 91
Photon Angle == 0.8259380844509785
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      109       21      100  2.76e-06        0        0         0   physWorld initStep
    1     28.8       21     32.6  2.76e-06        0      105       105   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7288520112207788
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.2     20.9     31.2  2.76e-06        0     2.19       107 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 71
Energy Deposited == 0
No. of Photons Absorbed == 14
No. of Photons Reflected == 71
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 92
Photon Angle == 0.7288520112207788
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     89.3    -19.7      100  2.76e-06        0        0         0   physWorld initStep
    1     17.2    -19.7     39.5  2.76e-06        0     94.1      94.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8073750631468819
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     15.5    -19.6     37.9  2.76e-06        0     2.36      96.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 72
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 71
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 93
Photon Angle == 0.8073750631468819
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       84    -11.7      100  2.76e-06        0        0         0   physWorld initStep
    1     15.7    -11.7     42.7  2.76e-06        0     89.2      89.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7982868580864984
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       14    -11.6       41  2.76e-06        0     2.32      91.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -14.1    -15.1       28  2.76e-06        0     31.1       123 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -33.8    -17.5     18.8  2.76e-06        0     21.9       145   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -33.9    -17.5     18.8  2.76e-06        0    0.109       145   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -35.9      -18     18.2  2.76e-06        0     2.13       147   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500     -125     -138  2.76e-06        0      501       648  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 73
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 71
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 94
Photon Angle == 0.7982868580864984
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      110     4.01      100  2.76e-06        0        0         0   physWorld initStep
    1     32.7     4.01     34.9  2.76e-06        0      101       101   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.723492973671461
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     31.1     3.99     33.6  2.76e-06        0     2.04       103 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     31.1     3.99     33.6  2.76e-06        0        0       103   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4       32     4.29     35.4  2.76e-06        0     2.04       105   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      252     83.6      500  2.76e-06        0      520       626  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 74
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 72
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 95
Photon Angle == 0.723492973671461
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       90    -10.2      100  2.76e-06        0        0         0   physWorld initStep
    1     20.1    -10.2     41.4  2.76e-06        0     91.2      91.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8116791117037452
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     18.5    -10.2     39.8  2.76e-06        0     2.22      93.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     18.5    -10.2     39.8  2.76e-06        0        0      93.5   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     18.4    -10.9     41.9  2.76e-06        0     2.22      95.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -50.3     -181      500  2.76e-06        0      493       589  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 75
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 73
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 96
Photon Angle == 0.8116791117037452
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     94.6    -6.07      100  2.76e-06        0        0         0   physWorld initStep
    1     23.6    -6.07     40.5  2.76e-06        0     92.6      92.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8209939459941373
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       22    -6.04       39  2.76e-06        0     2.15      94.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 76
Energy Deposited == 0
No. of Photons Absorbed == 16
No. of Photons Reflected == 73
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 97
Photon Angle == 0.8209939459941373
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      112     17.5      100  2.76e-06        0        0         0   physWorld initStep
    1     31.5     17.5     32.3  2.76e-06        0      105       105   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7225594367020713
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     29.9     17.4     30.9  2.76e-06        0     2.12       107 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     25.9       18       28  2.76e-06        0     4.99       112 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -15.9     24.9     -2.1  2.76e-06        0     51.9       164 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -15.9     24.9     -2.1  2.76e-06        0        0       164 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -22.9    -30.4     16.4  2.76e-06        0     58.7       223   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      -23    -30.5     16.4  2.76e-06        0     0.11       223   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -23.6    -32.5     16.8  2.76e-06        0     2.15       225   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     -158     -500      134  2.76e-06        0      500       726  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 77
Energy Deposited == 0
No. of Photons Absorbed == 16
No. of Photons Reflected == 74
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 99
Photon Angle == 0.7225594367020713
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      132    -11.9      100  2.76e-06        0        0         0   physWorld initStep
    1     38.4    -11.9     21.8  2.76e-06        0      122       122   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6025630080758568
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.3    -11.8     20.4  2.76e-06        0      2.5       124   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.2    -11.8     20.3  2.76e-06        0    0.137       124 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4     36.2    -11.8     20.3  2.76e-06        0        0       124   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     36.3    -11.8     20.2  2.76e-06        0    0.137       124   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       38    -12.9     18.8  2.76e-06        0      2.5       127   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      500     -349     -460  2.76e-06        0      746       873  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 78
Energy Deposited == 0
No. of Photons Absorbed == 16
No. of Photons Reflected == 75
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 100
Photon Angle == 0.6025630080758568
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      126     2.99      100  2.76e-06        0        0         0   physWorld initStep
    1       40     2.99     27.5  2.76e-06        0      113       113   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6003642394767992
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       38     2.96     26.2  2.76e-06        0     2.43       115   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.9     2.96     26.1  2.76e-06        0    0.131       115 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     16.8     4.69      -10  2.76e-06 2.76e-06     41.9       157    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 79
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 16
No. of Photons Reflected == 75
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 100
Photon Angle == 0.6003642394767992
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      109    -7.45      100  2.76e-06        0        0         0   physWorld initStep
    1     31.8    -7.45     35.2  2.76e-06        0      101       101   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.725557675443032
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     30.3    -7.41     33.8  2.76e-06        0     2.06       103 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 80
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 75
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 101
Photon Angle == 0.725557675443032
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     96.1    -13.8      100  2.76e-06        0        0         0   physWorld initStep
    1     23.3    -13.8       39  2.76e-06        0       95        95   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8227403419098591
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     21.7    -13.7     37.5  2.76e-06        0     2.19      97.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     21.7    -13.7     37.5  2.76e-06        0        0      97.2   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     21.8    -14.7     39.4  2.76e-06        0     2.19      99.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     13.6     -263      500  2.76e-06        0      523       622  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 81
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 76
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 102
Photon Angle == 0.8227403419098591
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      119       38      100  2.76e-06        0        0         0   physWorld initStep
    1       13       38     11.1  2.76e-06        0      138       138   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6882452628717215
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     -5.3     31.1    -2.22  2.76e-06        0     23.7       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     -5.3     31.1    -2.22  2.76e-06        0        0       162   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4    -18.4       20    -8.42  2.76e-06        0     18.3       180   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5    -18.4       20    -8.42  2.76e-06        0  7.5e-15       180   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -25.6     6.53     -9.6  2.76e-06        0     15.3       195   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7    -25.6     6.53     -9.6  2.76e-06        0    3e-14       195   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -27.1    -9.14     -6.5  2.76e-06        0       16       212   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9    -27.1    -9.14     -6.5  2.76e-06        0        0       212   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -21.8    -27.6     2.98  2.76e-06        0     21.4       233   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11    -21.8    -27.6     2.98  2.76e-06        0  1.5e-14       233   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12    -15.6      -37     12.4  2.76e-06        0     14.7       248   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   13    -15.6      -37     12.4  2.76e-06        0        0       248   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14    -11.8    -36.3     15.7  2.76e-06        0     5.06       253   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   15    -11.8    -36.3     15.7  2.76e-06        0 8.12e-15       253   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   16     -9.2    -39.1       19  2.76e-06        0     5.06       258   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   17     -9.2    -39.1       19  2.76e-06        0        0       258   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   18    -5.57    -37.7     22.2  2.76e-06        0     5.06       263   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   19    -5.57    -37.7     22.2  2.76e-06        0        0       263   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   20    -2.49    -40.1     25.5  2.76e-06        0     5.06       268   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   21    -2.49    -40.1     25.5  2.76e-06        0        0       268   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   22   0.0793    -38.6       28  2.76e-06        0     3.88       272   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
   23     3.93    -36.4     31.8  2.76e-06        0     5.82       278   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   24     3.93    -36.4     31.8  2.76e-06        0        0       278   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   25     20.7    -16.7     39.2  2.76e-06        0     26.9       304   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   26     20.7    -16.7     39.2  2.76e-06        0        0       304   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   27     32.2     7.21     34.9  2.76e-06        0     26.9       331   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   28     32.2     7.21     34.9  2.76e-06        0        0       331   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   29     33.6     17.4       28  2.76e-06        0     12.4       344 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   30     33.6     17.4       28  2.76e-06        0        0       344   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   31     33.9     19.3     29.3  2.76e-06        0     2.32       346   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   32     39.3      500      309  2.76e-06        0      556       902  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 82
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 90
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 116
Photon Angle == 0.6882452628717215
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     83.4     3.94      100  2.76e-06        0        0         0   physWorld initStep
    1     16.3     3.94     43.7  2.76e-06        0     87.6      87.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7984370610327698
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     14.6     3.92     42.1  2.76e-06        0     2.28      89.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 83
Energy Deposited == 0
No. of Photons Absorbed == 18
No. of Photons Reflected == 90
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 117
Photon Angle == 0.7984370610327698
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      112     36.1      100  2.76e-06        0        0         0   physWorld initStep
    1     17.5     36.1     20.5  2.76e-06        0      124       124   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  1.077688851403088
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     17.5     36.1     20.5  2.76e-06        0        0       124   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -347      500     -475  2.76e-06        0      770       894  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 84
Energy Deposited == 0
No. of Photons Absorbed == 18
No. of Photons Reflected == 91
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 118
Photon Angle == 1.077688851403088
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     98.6     1.32      100  2.76e-06        0        0         0   physWorld initStep
    1     26.4     1.32     39.4  2.76e-06        0     94.3      94.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8284731026364205
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.8     1.31     37.9  2.76e-06        0      2.1      96.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     9.01     1.49       28  2.76e-06        0     18.7       115 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -32.4     1.97     1.97  2.76e-06        0     48.9       164 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -32.4     1.97     1.97  2.76e-06        0        0       164 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    0.837    -1.82       28  2.76e-06        0     42.3       206 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7     17.6    -3.73     41.1  2.76e-06        0     21.4       228   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8       19    -3.92     42.7  2.76e-06        0     2.12       230   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      448      -59      500  2.76e-06        0      629       859  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 85
Energy Deposited == 0
No. of Photons Absorbed == 18
No. of Photons Reflected == 92
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 120
Photon Angle == 0.8284731026364205
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      136    -3.28      100  2.76e-06        0        0         0   physWorld initStep
    1       40    -3.28     19.5  2.76e-06        0      125       125   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6003929661478544
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       38    -3.25     18.1  2.76e-06        0     2.43       128   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.9    -3.25     18.1  2.76e-06        0    0.131       128 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     21.4    -4.74      -10  2.76e-06 2.76e-06     32.6       160    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 86
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 18
No. of Photons Reflected == 92
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 120
Photon Angle == 0.6003929661478544
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      106     30.4      100  2.76e-06        0        0         0   physWorld initStep
    1     22.9     30.4     30.3  2.76e-06        0      109       109   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7405604730032578
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     21.2     30.2     28.6  2.76e-06        0     2.42       111 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 87
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 92
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 121
Photon Angle == 0.7405604730032578
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      121     26.2      100  2.76e-06        0        0         0   physWorld initStep
    1     30.4     26.2       24  2.76e-06        0      118       118   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6164102304835639
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       28     25.9     22.4  2.76e-06        0     2.89       121   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     27.9     25.9     22.3  2.76e-06        0     0.18       121 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     27.9     25.9     22.3  2.76e-06        0        0       121   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     27.9       26     22.2  2.76e-06        0     0.18       121   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     28.4     28.3     20.5  2.76e-06        0     2.89       124   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     64.1      500     -376  2.76e-06        0      617       742  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 88
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 93
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 122
Photon Angle == 0.6164102304835639
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      130    -17.6      100  2.76e-06        0        0         0   physWorld initStep
    1     36.1    -17.6     21.5  2.76e-06        0      122       122   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6059022140378776
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.9    -17.5       20  2.76e-06        0     2.61       125   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     33.8    -17.5     19.9  2.76e-06        0    0.147       125 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4     33.8    -17.5     19.9  2.76e-06        0        0       125   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     33.9    -17.5     19.8  2.76e-06        0    0.147       125   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     35.3    -19.2     18.3  2.76e-06        0     2.61       128   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      377     -500     -477  2.76e-06        0      770       898  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 89
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 94
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 123
Photon Angle == 0.6059022140378776
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     95.6    -29.5      100  2.76e-06        0        0         0   physWorld initStep
    1       17    -29.5       34  2.76e-06        0      103       103   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8162478810856717
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     15.2    -29.3     32.3  2.76e-06        0     2.51       105 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 90
Energy Deposited == 0
No. of Photons Absorbed == 20
No. of Photons Reflected == 94
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 124
Photon Angle == 0.8162478810856717
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     90.4    -21.5      100  2.76e-06        0        0         0   physWorld initStep
    1     17.3    -21.5     38.6  2.76e-06        0     95.5      95.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.808974277833383
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     15.6    -21.4       37  2.76e-06        0     2.37      97.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 91
Energy Deposited == 0
No. of Photons Absorbed == 21
No. of Photons Reflected == 94
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 125
Photon Angle == 0.808974277833383
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      110    -26.8      100  2.76e-06        0        0         0   physWorld initStep
    1     27.2    -26.8     30.1  2.76e-06        0      109       109   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7295202185752685
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     25.5    -26.7     28.6  2.76e-06        0     2.29       111 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 92
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 94
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 126
Photon Angle == 0.7295202185752685
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      148    -6.13      100  2.76e-06        0        0         0   physWorld initStep
    1     38.5    -6.13     8.33  2.76e-06        0      143       143   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.401613999000451
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.6    -6.01     7.12  2.76e-06        0     3.12       146   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     35.4    -6.01     6.95  2.76e-06        0    0.253       146 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     35.4    -6.01     6.95  2.76e-06        0        0       146   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     35.3    -6.03     6.72  2.76e-06        0    0.247       146   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     35.1    -6.35     3.64  2.76e-06        0      3.1       149   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -159    -43.6     -500  2.76e-06        0      541       691  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 93
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 95
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 127
Photon Angle == 0.401613999000451
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      112     17.4      100  2.76e-06        0        0         0   physWorld initStep
    1     31.5     17.4     32.3  2.76e-06        0      105       105   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7226022660329936
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     29.9     17.3     30.9  2.76e-06        0     2.12       107 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 94
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 95
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 128
Photon Angle == 0.7226022660329936
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      103     20.3      100  2.76e-06        0        0         0   physWorld initStep
    1     25.8     20.3       35  2.76e-06        0      101       101   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7389433767607811
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.1     20.2     33.5  2.76e-06        0     2.22       103 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     24.1     20.2     33.5  2.76e-06        0        0       103   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     24.4     21.7     35.2  2.76e-06        0     2.22       106   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     60.1      463      500  2.76e-06        0      642       748  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 95
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 96
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 129
Photon Angle == 0.7389433767607811
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      138    -4.07      100  2.76e-06        0        0         0   physWorld initStep
    1     39.9    -4.07     17.4  2.76e-06        0      128       128   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6004832581669377
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.9    -4.03     16.1  2.76e-06        0     2.43       131   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.8    -4.03       16  2.76e-06        0    0.131       131 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     22.6    -5.74      -10  2.76e-06 2.76e-06     30.1       161    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 96
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 23
No. of Photons Reflected == 96
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 129
Photon Angle == 0.6004832581669377
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      111    -21.4      100  2.76e-06        0        0         0   physWorld initStep
    1     29.5    -21.4     31.8  2.76e-06        0      106       106   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7262845718166533
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.9    -21.3     30.4  2.76e-06        0     2.19       108 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     24.5    -22.1       28  2.76e-06        0     4.24       112 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -12.5      -30     2.07  2.76e-06        0     45.8       158 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -12.5      -30     2.07  2.76e-06        0        0       158 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -32.5     19.9     15.9  2.76e-06        0     55.5       214   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -32.5     19.9     15.9  2.76e-06        0    0.113       214   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -33.8     21.7     16.3  2.76e-06        0     2.19       216   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     -341      500      124  2.76e-06        0      578       794  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 97
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 97
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 131
Photon Angle == 0.7262845718166533
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       96     13.3      100  2.76e-06        0        0         0   physWorld initStep
    1     23.4     13.3     39.1  2.76e-06        0     94.8      94.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8226780979961008
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     21.8     13.2     37.6  2.76e-06        0     2.19        97 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     5.59     15.3       28  2.76e-06        0     18.9       116 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -30     19.7     6.93  2.76e-06        0     41.6       157 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5      -30     19.7     6.93  2.76e-06        0        0       157 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -14.5    -7.72       28  2.76e-06        0     37.9       195 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -6.47      -22       39  2.76e-06        0     19.7       215   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -5.99    -23.4     40.6  2.76e-06        0      2.2       217   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      169     -470      500  2.76e-06        0      664       881  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 98
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 98
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 133
Photon Angle == 0.8226780979961008
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      125    -4.93      100  2.76e-06        0        0         0   physWorld initStep
    1     39.7    -4.93     28.1  2.76e-06        0      112       112   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7006051624015606
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     39.6    -4.92       28  2.76e-06        0     0.18       112   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     37.8     -4.9     26.5  2.76e-06        0     2.32       114   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     37.7     -4.9     26.4  2.76e-06        0    0.149       114 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    5     37.7     -4.9     26.4  2.76e-06        0        0       114   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     37.8    -4.93     26.3  2.76e-06        0    0.149       115   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     39.8    -5.41     24.6  2.76e-06        0     2.63       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8      500     -135     -491  2.76e-06        0      703       821  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 99
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 99
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 134
Photon Angle == 0.7006051624015606
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      129     34.7      100  2.76e-06        0        0         0   physWorld initStep
    1     -500     34.7     -428  2.76e-06        0      821       821  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.6981317007977319
TRACK ID == 1
THE CURRENT EVENTID IS == 100
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 99
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 134
Photon Angle == 0.6981317007977319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      100    -32.1      100  2.76e-06        0        0         0   physWorld initStep
    1     18.4    -32.1     31.4  2.76e-06        0      107       107   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.755055750426024
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     16.5    -31.8     29.7  2.76e-06        0     2.54       109 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 101
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 99
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 135
Photon Angle == 0.755055750426024
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      121     29.7      100  2.76e-06        0        0         0   physWorld initStep
    1       27     29.7     21.5  2.76e-06        0      122       122   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6247537988744605
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.5     29.3     19.8  2.76e-06        0     3.09       125   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     24.3     29.3     19.7  2.76e-06        0    0.209       125 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     24.3     29.3     19.7  2.76e-06        0        0       125   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     24.3     29.4     19.5  2.76e-06        0    0.209       126   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     24.3       32     17.8  2.76e-06        0     3.09       129   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    7     24.3       32     17.8  2.76e-06        0        0       129   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     21.8     31.3       16  2.76e-06        0     3.09       132   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     21.7     31.3     15.9  2.76e-06        0    0.209       132 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   10     21.7     31.3     15.9  2.76e-06        0        0       132   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11     21.6     31.4     15.8  2.76e-06        0    0.209       132   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   12     21.4       34       14  2.76e-06        0     3.09       135   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13     -108      500     -392  2.76e-06        0      631       767  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 102
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 102
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 138
Photon Angle == 0.6247537988744605
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      136     32.1      100  2.76e-06        0        0         0   physWorld initStep
    1     -231     32.1     -209  2.76e-06        0      480       480   physWorld OpAbsorption
THE INCIDENT ANGLE IS G 83:  0.6981317007977319
TRACK ID == 1
THE CURRENT EVENTID IS == 103
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 102
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 138
Photon Angle == 0.6981317007977319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      113    -1.02      100  2.76e-06        0        0         0   physWorld initStep
    1     34.1    -1.02       34  2.76e-06        0      103       103   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.719457695208308
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.5    -1.01     32.7  2.76e-06        0     2.02       105 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     26.2    -1.07       28  2.76e-06        0     7.85       113 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -24.4    -1.51    -9.29  2.76e-06        0     62.9       175 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -24.4    -1.51    -9.29  2.76e-06        0        0       175 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6       31     4.78       28  2.76e-06        0     67.1       243 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7     34.7     5.19     30.5  2.76e-06        0     4.42       247   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     36.2     5.39     31.7  2.76e-06        0     2.02       249   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      500     61.7      385  2.76e-06        0      586       835  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 104
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 103
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 140
Photon Angle == 0.719457695208308
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      127    0.115      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1    0.115       27  2.76e-06        0      114       114   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  2.443441237824853
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     40.1    0.115       27  2.76e-06        0        0       114   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3      500     2.76     -359  2.76e-06        0      600       714  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 105
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 104
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 141
Photon Angle == 2.443441237824853
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      103    -26.4      100  2.76e-06        0        0         0   physWorld initStep
    1     23.1    -26.4     33.1  2.76e-06        0      104       104   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7435463495830836
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     21.4    -26.2     31.6  2.76e-06        0     2.34       106 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 106
Energy Deposited == 0
No. of Photons Absorbed == 25
No. of Photons Reflected == 104
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 142
Photon Angle == 0.7435463495830836
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      133    -30.6      100  2.76e-06        0        0         0   physWorld initStep
    1       26    -30.6     10.5  2.76e-06        0      139       139   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6276171696405557
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     20.1    -29.4     6.45  2.76e-06        0     7.26       146   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     20.1    -29.4     6.45  2.76e-06        0        0       146   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     14.5    -29.9    0.107  2.76e-06        0      8.5       155   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     14.5    -29.9    0.107  2.76e-06        0 1.22e-14       155   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     6.85    -27.3    -4.31  2.76e-06        0     9.18       164   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     6.85    -27.3    -4.31  2.76e-06        0        0       164   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    0.106    -26.4    -9.61  2.76e-06        0     8.62       173   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9    0.106    -26.4    -9.61  2.76e-06        0 6.59e-15       173   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10   -0.879    -25.7      -10  2.76e-06 2.76e-06     1.26       174    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 107
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 25
No. of Photons Reflected == 108
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 146
Photon Angle == 0.6276171696405557
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     84.6    -2.11      100  2.76e-06        0        0         0   physWorld initStep
    1     17.2    -2.11     43.5  2.76e-06        0     87.9      87.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8012959809173252
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     15.6     -2.1     41.9  2.76e-06        0     2.26      90.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -12.5    -2.67       28  2.76e-06        0     31.4       122 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -37.9    -3.19     15.4  2.76e-06        0     28.3       150   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      -38    -3.19     15.4  2.76e-06        0    0.106       150   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6      -40    -3.28     14.8  2.76e-06        0     2.09       152   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500    -21.3     -146  2.76e-06        0      488       640  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 108
Energy Deposited == 0
No. of Photons Absorbed == 25
No. of Photons Reflected == 108
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 147
Photon Angle == 0.8012959809173252
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       90    -3.23      100  2.76e-06        0        0         0   physWorld initStep
    1     20.9    -3.23       42  2.76e-06        0     90.2      90.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8124064699401887
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     19.3    -3.21     40.5  2.76e-06        0     2.19      92.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 109
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 108
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 148
Photon Angle == 0.8124064699401887
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      104    -8.59      100  2.76e-06        0        0         0   physWorld initStep
    1     28.7    -8.59     37.2  2.76e-06        0     97.8      97.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7346846365657735
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.1    -8.54     35.8  2.76e-06        0     2.09      99.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 110
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 108
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 149
Photon Angle == 0.7346846365657735
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      104     22.5      100  2.76e-06        0        0         0   physWorld initStep
    1     25.6     22.5       34  2.76e-06        0      103       103   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7381750438334871
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     23.9     22.4     32.5  2.76e-06        0     2.24       105 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 111
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 108
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 150
Photon Angle == 0.7381750438334871
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      123     0.59      100  2.76e-06        0        0         0   physWorld initStep
    1     38.8     0.59     29.5  2.76e-06        0      110       110   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.704190386484203
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.3    0.587     28.2  2.76e-06        0        2       112 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     37.1    0.588       28  2.76e-06        0    0.247       112 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -9.84     0.83      -10  2.76e-06 2.76e-06     60.4       172    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 112
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 28
No. of Photons Reflected == 108
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 151
Photon Angle == 0.704190386484203
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      146    -5.45      100  2.76e-06        0        0         0   physWorld initStep
    1     39.8    -5.45     10.9  2.76e-06        0      139       139   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6006901608395516
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.1    -5.38     9.06  2.76e-06        0     3.24       142   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     37.1    -5.38     9.06  2.76e-06        0        0       142   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     35.9    -5.67     4.52  2.76e-06        0     4.73       147   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     35.9    -5.67     4.52  2.76e-06        0        0       147   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6       32    -5.54     1.85  2.76e-06        0     4.73       151   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7       32    -5.54     1.85  2.76e-06        0        0       151   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     30.7    -5.86    -2.69  2.76e-06        0     4.73       156   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9     30.7    -5.86    -2.69  2.76e-06        0        0       156   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     26.8    -5.68    -5.34  2.76e-06        0     4.73       161   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11     26.8    -5.68    -5.34  2.76e-06        0        0       161   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     25.5    -6.05    -9.87  2.76e-06        0     4.72       165   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   13     25.5    -6.05    -9.87  2.76e-06        0 5.11e-15       165   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14     25.3    -6.04      -10  2.76e-06 2.76e-06    0.228       166    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 113
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 28
No. of Photons Reflected == 114
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 157
Photon Angle == 0.6006901608395516
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      117     27.3      100  2.76e-06        0        0         0   physWorld initStep
    1     29.5     27.3     26.9  2.76e-06        0      114       114   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6185044646801039
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.1     26.9     25.2  2.76e-06        0     2.95       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     26.9     26.9     25.1  2.76e-06        0    0.187       117 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     26.9     26.9     25.1  2.76e-06        0        0       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.9       27       25  2.76e-06        0    0.187       117   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     27.3     29.4     23.3  2.76e-06        0     2.95       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     28.2      500     -372  2.76e-06        0      614       734  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 114
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 115
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 158
Photon Angle == 0.6185044646801039
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     92.2     25.6      100  2.76e-06        0        0         0   physWorld initStep
    1     16.8     25.6     36.7  2.76e-06        0     98.5      98.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8108972156552192
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       15     25.4       35  2.76e-06        0     2.44       101 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 115
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 115
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 159
Photon Angle == 0.8108972156552192
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      111     33.8      100  2.76e-06        0        0         0   physWorld initStep
    1     21.6     33.8     24.9  2.76e-06        0      117       117   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6422334657955964
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     18.9     33.1     22.9  2.76e-06        0     3.42       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     18.7     33.1     22.8  2.76e-06        0    0.283       121 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     18.7     33.1     22.8  2.76e-06        0        0       121   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     18.6     33.3     22.6  2.76e-06        0    0.283       121   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     17.7       36     20.7  2.76e-06        0     3.42       124   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -263      500     -434  2.76e-06        0      708       832  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 116
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 116
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 160
Photon Angle == 0.6422334657955964
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      141     19.2      100  2.76e-06        0        0         0   physWorld initStep
    1     35.2     19.2     11.7  2.76e-06        0      137       137   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6072274141778138
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.1       19     10.2  2.76e-06        0     2.65       140   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     32.9       19     10.1  2.76e-06        0    0.151       140 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     32.9       19     10.1  2.76e-06        0        0       140   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5       33     19.1     9.99  2.76e-06        0    0.139       140   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     33.7     20.2     8.87  2.76e-06        0     1.75       142   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      308      500     -455  2.76e-06        0      722       864  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 117
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 117
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 161
Photon Angle == 0.6072274141778138
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      122    -35.4      100  2.76e-06        0        0         0   physWorld initStep
    1     18.9    -35.4     13.6  2.76e-06        0      134       134   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6540867735365867
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       16    -34.6     11.6  2.76e-06        0      3.6       138   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     15.7    -34.6     11.3  2.76e-06        0    0.355       138 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     15.7    -34.6     11.3  2.76e-06        0        0       138   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     15.6    -34.8     11.1  2.76e-06        0    0.355       139   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    6     15.6    -34.8     11.1  2.76e-06        0        0       139   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     15.3    -34.8     10.9  2.76e-06        0    0.355       139 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8     15.3    -34.8     10.9  2.76e-06        0        0       139   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     15.1      -35     10.7  2.76e-06        0    0.355       139   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     14.2      -37     9.19  2.76e-06        0      2.6       142   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     -292     -500     -344  2.76e-06        0      658       800  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 118
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 120
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 164
Photon Angle == 0.6540867735365867
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      149    -6.18      100  2.76e-06        0        0         0   physWorld initStep
    1       36    -6.18     4.88  2.76e-06        0      148       148   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4015703820449112
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.2    -6.05     3.67  2.76e-06        0     3.12       151   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       33    -6.05     3.54  2.76e-06        0    0.203       151 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4       33    -6.05     3.54  2.76e-06        0        0       151   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     32.9    -6.07     3.36  2.76e-06        0    0.198       151   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     32.7    -6.42    0.278  2.76e-06        0     3.11       155   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -163    -46.1     -500  2.76e-06        0      539       693  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 119
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 121
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 165
Photon Angle == 0.4015703820449112
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     88.3     11.4      100  2.76e-06        0        0         0   physWorld initStep
    1     18.8     11.4     41.6  2.76e-06        0     90.8      90.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8078648078819004
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     17.1     11.3     40.1  2.76e-06        0     2.26        93 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 120
Energy Deposited == 0
No. of Photons Absorbed == 30
No. of Photons Reflected == 121
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 166
Photon Angle == 0.8078648078819004
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      147     18.6      100  2.76e-06        0        0         0   physWorld initStep
    1     25.9     18.6    -1.75  2.76e-06        0      158       158   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.950973415623571
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     25.9     18.6    -1.75  2.76e-06        0        0       158   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -335      101     -500  2.76e-06        0      620       779  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 121
Energy Deposited == 0
No. of Photons Absorbed == 30
No. of Photons Reflected == 122
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 167
Photon Angle == 0.950973415623571
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      105     31.3      100  2.76e-06        0        0         0   physWorld initStep
    1     21.6     31.3     30.3  2.76e-06        0      108       108   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7442478927596756
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     19.8     31.1     28.7  2.76e-06        0     2.46       111 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 122
Energy Deposited == 0
No. of Photons Absorbed == 31
No. of Photons Reflected == 122
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 168
Photon Angle == 0.7442478927596756
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      107     29.5      100  2.76e-06        0        0         0   physWorld initStep
    1     24.1     29.5     30.2  2.76e-06        0      109       109   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7373073112293471
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     22.4     29.3     28.6  2.76e-06        0     2.38       111 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 123
Energy Deposited == 0
No. of Photons Absorbed == 32
No. of Photons Reflected == 122
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 169
Photon Angle == 0.7373073112293471
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      106    -2.86      100  2.76e-06        0        0         0   physWorld initStep
    1     30.6    -2.86     36.6  2.76e-06        0     98.6      98.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7299098264131172
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       29    -2.84     35.2  2.76e-06        0     2.06       101 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 124
Energy Deposited == 0
No. of Photons Absorbed == 33
No. of Photons Reflected == 122
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 170
Photon Angle == 0.7299098264131172
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      149    -10.7      100  2.76e-06        0        0         0   physWorld initStep
    1     33.8    -10.7     3.34  2.76e-06        0      150       150   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  1.148222354813918
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     33.8    -10.7     3.34  2.76e-06        0        0       150   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -194    -73.3     -500  2.76e-06        0      556       707  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 125
Energy Deposited == 0
No. of Photons Absorbed == 33
No. of Photons Reflected == 123
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 171
Photon Angle == 1.148222354813918
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      138      9.6      100  2.76e-06        0        0         0   physWorld initStep
    1       39      9.6     17.2  2.76e-06        0      129       129   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6017138004725662
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.9     9.51     15.8  2.76e-06        0     2.47       131   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.8     9.51     15.7  2.76e-06        0    0.135       131 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     26.6     12.5    -2.28  2.76e-06        0     20.9       152 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     26.6     12.5    -2.28  2.76e-06        0        0       152 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     17.6     12.6      -10  2.76e-06 2.76e-06     11.9       164    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 126
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 33
No. of Photons Reflected == 124
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 172
Photon Angle == 0.6017138004725662
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      150     -3.6      100  2.76e-06        0        0         0   physWorld initStep
    1     36.5     -3.6        5  2.76e-06        0      148       148   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  1.21120899189224
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     36.5     -3.6        5  2.76e-06        0        0       148   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -154    -25.7     -500  2.76e-06        0      540       688  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 127
Energy Deposited == 0
No. of Photons Absorbed == 33
No. of Photons Reflected == 125
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 173
Photon Angle == 1.21120899189224
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      152     2.82      100  2.76e-06        0        0         0   physWorld initStep
    1     33.5     2.82    0.711  2.76e-06        0      154       154   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4018316483397566
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.6     2.75   -0.501  2.76e-06        0      3.1       158   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.5     2.75   -0.589  2.76e-06        0    0.136       158 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     30.5     2.75   -0.589  2.76e-06        0        0       158   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     30.5     2.76   -0.713  2.76e-06        0    0.133       158   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     30.3     2.93    -3.79  2.76e-06        0     3.09       161   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -152     22.9     -500  2.76e-06        0      529       690  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 128
Energy Deposited == 0
No. of Photons Absorbed == 33
No. of Photons Reflected == 126
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 174
Photon Angle == 0.4018316483397566
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     90.3     19.5      100  2.76e-06        0        0         0   physWorld initStep
    1     17.9     19.5     39.3  2.76e-06        0     94.4      94.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8094450588892341
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     16.2     19.4     37.7  2.76e-06        0     2.34      96.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     16.2     19.4     37.7  2.76e-06        0        0      96.8   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     15.8     20.8     39.5  2.76e-06        0     2.34      99.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -141      396      500  2.76e-06        0      614       713  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 129
Energy Deposited == 0
No. of Photons Absorbed == 33
No. of Photons Reflected == 127
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 175
Photon Angle == 0.8094450588892341
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     93.8     21.2      100  2.76e-06        0        0         0   physWorld initStep
    1     19.7     21.2     37.8  2.76e-06        0     96.7      96.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8162508100769088
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       18     21.1     36.2  2.76e-06        0     2.32      99.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 130
Energy Deposited == 0
No. of Photons Absorbed == 34
No. of Photons Reflected == 127
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 176
Photon Angle == 0.8162508100769088
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      149     15.5      100  2.76e-06        0        0         0   physWorld initStep
    1     27.9     15.5    -1.73  2.76e-06        0      158       158   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4018048894991284
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.8     15.1    -2.94  2.76e-06        0     3.29       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     24.7     15.1    -3.06  2.76e-06        0     0.19       162 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     24.7     15.1    -3.06  2.76e-06        0        0       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     24.6     15.1    -3.21  2.76e-06        0    0.182       162   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    6     24.6     15.1    -3.21  2.76e-06        0        0       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     24.5     15.1    -3.33  2.76e-06        0    0.175       162 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    8     24.5     15.1    -3.33  2.76e-06        0        0       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     24.4     15.1    -3.46  2.76e-06        0    0.169       162   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     23.6     16.1     -6.5  2.76e-06        0     3.27       166   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11     -286      102     -500  2.76e-06        0      589       754  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 131
Energy Deposited == 0
No. of Photons Absorbed == 34
No. of Photons Reflected == 130
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 179
Photon Angle == 0.4018048894991284
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     95.1    -14.3      100  2.76e-06        0        0         0   physWorld initStep
    1     22.6    -14.3     39.2  2.76e-06        0     94.6      94.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.820844473645689
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       21    -14.2     37.7  2.76e-06        0     2.21      96.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 132
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 130
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 180
Photon Angle == 0.820844473645689
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      123     31.2      100  2.76e-06        0        0         0   physWorld initStep
    1     25.2     31.2     17.7  2.76e-06        0      128       128   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6298871007939235
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.6     30.7     15.9  2.76e-06        0     3.19       131   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     22.5     30.7     15.7  2.76e-06        0    0.228       131 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     22.5     30.7     15.7  2.76e-06        0        0       131   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     22.4     30.9     15.6  2.76e-06        0    0.228       132   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     22.1     33.5     13.8  2.76e-06        0     3.19       135   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -126      500     -397  2.76e-06        0      639       774  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 133
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 131
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 181
Photon Angle == 0.6298871007939235
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      148      1.3      100  2.76e-06        0        0         0   physWorld initStep
    1       39      1.3     8.38  2.76e-06        0      143       143   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  1.217797548341537
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2       39      1.3     8.38  2.76e-06        0        0       143   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -148     8.91     -500  2.76e-06        0      542       684  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 134
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 132
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 182
Photon Angle == 1.217797548341537
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     99.3    -28.9      100  2.76e-06        0        0         0   physWorld initStep
    1     19.7    -28.9     33.2  2.76e-06        0      104       104   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8245241937802601
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     17.9    -28.7     31.6  2.76e-06        0     2.44       106 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     17.9    -28.7     31.6  2.76e-06        0        0       106   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     17.5    -30.7     32.9  2.76e-06        0     2.44       109   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -115     -500      300  2.76e-06        0      556       665  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 135
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 133
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 183
Photon Angle == 0.8245241937802601
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      116    -20.3      100  2.76e-06        0        0         0   physWorld initStep
    1     32.6    -20.3     29.9  2.76e-06        0      109       109   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7168784482597821
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       31    -20.2     28.5  2.76e-06        0     2.15       111 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 136
Energy Deposited == 0
No. of Photons Absorbed == 36
No. of Photons Reflected == 133
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 184
Photon Angle == 0.7168784482597821
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     83.4       10      100  2.76e-06        0        0         0   physWorld initStep
    1     15.6       10     43.1  2.76e-06        0     88.6      88.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7974186801816159
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     13.9     9.95     41.5  2.76e-06        0     2.31      90.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 137
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 133
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 185
Photon Angle == 0.7974186801816159
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      124     22.6      100  2.76e-06        0        0         0   physWorld initStep
    1     33.2     22.6     23.4  2.76e-06        0      119       119   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6108510192702972
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.9     22.4     21.8  2.76e-06        0     2.75       122   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.8     22.4     21.7  2.76e-06        0    0.162       122 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     30.8     22.4     21.7  2.76e-06        0        0       122   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     30.8     22.5     21.6  2.76e-06        0    0.162       122   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     31.8     24.5     20.1  2.76e-06        0     2.75       125   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      186      500     -399  2.76e-06        0      653       778  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 138
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 134
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 186
Photon Angle == 0.6108510192702972
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      107    -5.56      100  2.76e-06        0        0         0   physWorld initStep
    1     30.7    -5.56     36.3  2.76e-06        0     99.2      99.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7292404932516976
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     29.1    -5.54     34.9  2.76e-06        0     2.06       101 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 139
Energy Deposited == 0
No. of Photons Absorbed == 38
No. of Photons Reflected == 134
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 187
Photon Angle == 0.7292404932516976
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      120     7.01      100  2.76e-06        0        0         0   physWorld initStep
    1     37.1     7.01     30.6  2.76e-06        0      108       108   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7091431764431997
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     35.5     6.97     29.3  2.76e-06        0     2.02       110 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 140
Energy Deposited == 0
No. of Photons Absorbed == 39
No. of Photons Reflected == 134
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 188
Photon Angle == 0.7091431764431997
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      147     8.89      100  2.76e-06        0        0         0   physWorld initStep
    1     37.6     8.89      7.9  2.76e-06        0      143       143   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4013258999613569
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.7      8.7     6.68  2.76e-06        0     3.14       146   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.5     8.71     6.52  2.76e-06        0    0.258       147 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     34.5     8.71     6.52  2.76e-06        0        0       147   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     34.5     8.73     6.29  2.76e-06        0    0.252       147   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     34.2      9.2     3.21  2.76e-06        0     3.13       150   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -175       62     -500  2.76e-06        0      548       698  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 141
Energy Deposited == 0
No. of Photons Absorbed == 39
No. of Photons Reflected == 135
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 189
Photon Angle == 0.4013258999613569
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     88.4     16.4      100  2.76e-06        0        0         0   physWorld initStep
    1     17.6     16.4     40.6  2.76e-06        0     92.3      92.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.806539581270699
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     15.9     16.2       39  2.76e-06        0     2.31      94.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 142
Energy Deposited == 0
No. of Photons Absorbed == 40
No. of Photons Reflected == 135
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 190
Photon Angle == 0.806539581270699
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      137    -10.4      100  2.76e-06        0        0         0   physWorld initStep
    1     38.8    -10.4     17.4  2.76e-06        0      128       128   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6019780976453895
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.7    -10.3       16  2.76e-06        0     2.48       131   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.6    -10.3     15.9  2.76e-06        0    0.136       131 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4       27    -13.4    -1.29  2.76e-06        0       20       151 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5       27    -13.4    -1.29  2.76e-06        0        0       151 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     16.4    -13.5      -10  2.76e-06 2.76e-06     13.7       165    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 143
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 40
No. of Photons Reflected == 136
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 191
Photon Angle == 0.6019780976453895
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      105    -14.2      100  2.76e-06        0        0         0   physWorld initStep
    1     28.6    -14.2     35.7  2.76e-06        0      100       100   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.733001512166894
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.1    -14.2     34.3  2.76e-06        0     2.12       102 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 144
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 136
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 192
Photon Angle == 0.733001512166894
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      150    0.121      100  2.76e-06        0        0         0   physWorld initStep
    1     36.6    0.121     4.95  2.76e-06        0      148       148   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4019244756246412
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.8    0.118     3.74  2.76e-06        0      3.1       151   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     33.6    0.118     3.61  2.76e-06        0    0.195       151 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     33.6    0.118     3.61  2.76e-06        0        0       151   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     33.5    0.118     3.44  2.76e-06        0     0.19       151   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     33.4    0.125    0.354  2.76e-06        0     3.09       154   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -147     0.92     -500  2.76e-06        0      532       686  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 145
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 137
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 193
Photon Angle == 0.4019244756246412
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      109    -31.8      100  2.76e-06        0        0         0   physWorld initStep
    1     23.7    -31.8     28.5  2.76e-06        0      111       111   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7361547559824015
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.2    -31.8       28  2.76e-06        0    0.756       112   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     21.4    -31.6     26.4  2.76e-06        0     2.34       114   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4       21    -31.7     25.9  2.76e-06        0    0.762       115 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5       21    -31.7     25.9  2.76e-06        0        0       115   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     20.6    -32.1     25.3  2.76e-06        0    0.762       116   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     19.8    -34.9     22.7  2.76e-06        0     3.94       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     -263     -386     -500  2.76e-06        0      690       810  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 146
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 138
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 194
Photon Angle == 0.7361547559824015
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      148    -19.5      100  2.76e-06        0        0         0   physWorld initStep
    1     19.9    -19.5     -7.4  2.76e-06        0      167       167   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4157293689589969
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     16.8    -18.7    -8.54  2.76e-06        0     3.48       171   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     16.8    -18.7    -8.54  2.76e-06        0        0       171   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4       16    -19.3      -10  2.76e-06 2.76e-06     1.72       172    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 147
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 41
No. of Photons Reflected == 139
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 195
Photon Angle == 0.4157293689589969
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      146   -0.513      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1   -0.513     11.3  2.76e-06        0      138       138   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6002302126746
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1   -0.508     9.89  2.76e-06        0     2.52       140   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     38.1   -0.508     9.89  2.76e-06        0        0       140   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     36.9   -0.535     5.37  2.76e-06        0     4.67       145   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     36.9   -0.535     5.37  2.76e-06        0        0       145   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6       33   -0.523     2.73  2.76e-06        0     4.67       150   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7       33   -0.523     2.73  2.76e-06        0        0       150   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     31.9   -0.553    -1.79  2.76e-06        0     4.67       155   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9     31.9   -0.553    -1.79  2.76e-06        0        0       155   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10       28   -0.537    -4.42  2.76e-06        0     4.67       159   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   11       28   -0.537    -4.42  2.76e-06        0        0       159   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     26.8   -0.572    -8.94  2.76e-06        0     4.67       164   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   13     26.8   -0.572    -8.94  2.76e-06        0        0       164   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14     25.3   -0.563      -10  2.76e-06 2.76e-06     1.87       166    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 148
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 41
No. of Photons Reflected == 145
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 201
Photon Angle == 0.6002302126746
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      124     16.7      100  2.76e-06        0        0         0   physWorld initStep
    1     36.5     16.7     26.3  2.76e-06        0      115       115   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6052325583660112
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.4     16.5     24.9  2.76e-06        0     2.59       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.3     16.5     24.8  2.76e-06        0    0.145       117 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4     34.3     16.5     24.8  2.76e-06        0        0       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     34.3     16.6     24.7  2.76e-06        0    0.145       117   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     35.8     18.2     23.2  2.76e-06        0     2.59       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      418      500     -493  2.76e-06        0      803       923  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 149
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 146
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 202
Photon Angle == 0.6052325583660112
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      150     16.4      100  2.76e-06        0        0         0   physWorld initStep
    1     23.8     16.4    -6.04  2.76e-06        0      165       165   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4041610613626192
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     20.7     15.8    -7.23  2.76e-06        0     3.36       168   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    3     20.7     15.8    -7.23  2.76e-06        0        0       168   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     19.8     16.8      -10  2.76e-06 2.76e-06     3.06       171    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 150
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 41
No. of Photons Reflected == 147
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 203
Photon Angle == 0.4041610613626192
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      100    -6.07      100  2.76e-06        0        0         0   physWorld initStep
    1       27    -6.07     38.6  2.76e-06        0     95.5      95.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7399634699216975
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.5    -6.04     37.2  2.76e-06        0      2.1      97.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     11.1    -6.81       28  2.76e-06        0       17       115 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -30.6    -9.06     1.28  2.76e-06        0     49.6       164 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -30.6    -9.06     1.28  2.76e-06        0        0       164 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     1.03     9.56       28  2.76e-06        0     45.4       210 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7     14.3     17.4     39.2  2.76e-06        0       19       229   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     15.5     18.2     40.7  2.76e-06        0     2.11       231   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      411      284      500  2.76e-06        0      662       893  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 151
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 148
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 205
Photon Angle == 0.7399634699216975
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      125      -31      100  2.76e-06        0        0         0   physWorld initStep
    1     25.5      -31     16.6  2.76e-06        0      130       130   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6290042049375177
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.9    -30.5     14.8  2.76e-06        0     3.18       133   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     22.8    -30.5     14.6  2.76e-06        0    0.225       133 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     22.8    -30.5     14.6  2.76e-06        0        0       133   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     22.7    -30.6     14.5  2.76e-06        0    0.225       133   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     22.5    -33.3     12.7  2.76e-06        0     3.18       137   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -116     -500     -396  2.76e-06        0      635       772  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 152
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 149
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 206
Photon Angle == 0.6290042049375177
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     98.1    -18.7      100  2.76e-06        0        0         0   physWorld initStep
    1     23.3    -18.7     37.2  2.76e-06        0     97.7      97.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8255886413963522
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     21.6    -18.6     35.7  2.76e-06        0     2.23      99.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     8.75      -21       28  2.76e-06        0     15.2       115 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -24.6    -27.2     8.09  2.76e-06        0     39.4       155 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -24.6    -27.2     8.09  2.76e-06        0        0       155 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -20.9     9.55       28  2.76e-06        0       42       196 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -19.6     22.2     34.9  2.76e-06        0     14.5       211   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -19.9     23.9     36.3  2.76e-06        0     2.22       213   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -54.6      500      405  2.76e-06        0      603       817  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 153
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 150
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 208
Photon Angle == 0.8255886413963522
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      126     17.2      100  2.76e-06        0        0         0   physWorld initStep
    1     36.3     17.2     24.8  2.76e-06        0      117       117   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6056048783620875
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.1     17.1     23.4  2.76e-06        0      2.6       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       34     17.1     23.3  2.76e-06        0    0.146       120 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     26.2     23.6        6  2.76e-06        0     20.1       140 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     26.2     23.6        6  2.76e-06        0        0       140 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -14.7     16.8      -10  2.76e-06 2.76e-06     44.4       184    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 154
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 41
No. of Photons Reflected == 151
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 209
Photon Angle == 0.6056048783620875
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      137     8.76      100  2.76e-06        0        0         0   physWorld initStep
    1     39.2     8.76     17.8  2.76e-06        0      128       128   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.601452941893319
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.2     8.67     16.4  2.76e-06        0     2.47       130   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       37     8.67     16.3  2.76e-06        0    0.134       131 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4       37     8.67     16.3  2.76e-06        0        0       131   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     37.1     8.72     16.2  2.76e-06        0    0.134       131   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       39     9.55     14.8  2.76e-06        0     2.47       133   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      500      238     -417  2.76e-06        0      672       805  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 155
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 152
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 210
Photon Angle == 0.601452941893319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      120     2.11      100  2.76e-06        0        0         0   physWorld initStep
    1     37.4     2.11     30.9  2.76e-06        0      107       107   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7090073933443919
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.8      2.1     29.6  2.76e-06        0     2.01       109 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     33.8     2.14       28  2.76e-06        0     2.63       112 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -14.6     3.02      -10  2.76e-06 2.76e-06     61.5       174    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 156
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 41
No. of Photons Reflected == 152
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 211
Photon Angle == 0.7090073933443919
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      128     11.5      100  2.76e-06        0        0         0   physWorld initStep
    1     38.5     11.5     24.7  2.76e-06        0      117       117   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6023890156567884
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.4     11.3     23.3  2.76e-06        0      2.5       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.3     11.3     23.2  2.76e-06        0    0.137       120 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     19.8     17.4    -6.62  2.76e-06        0     34.7       154 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     19.8     17.4    -6.62  2.76e-06        0        0       154 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     14.3     16.5      -10  2.76e-06 2.76e-06     6.49       161    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 157
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 41
No. of Photons Reflected == 153
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 212
Photon Angle == 0.6023890156567884
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      134    -23.8      100  2.76e-06        0        0         0   physWorld initStep
    1     32.3    -23.8     14.6  2.76e-06        0      133       133   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6123996806527066
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.1    -23.5       13  2.76e-06        0     2.79       136   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     29.9    -23.5     12.9  2.76e-06        0    0.167       136 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     29.9    -23.5     12.9  2.76e-06        0        0       136   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5       30    -23.6     12.8  2.76e-06        0    0.167       136   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     30.8    -25.8     11.2  2.76e-06        0     2.79       139   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      147     -500     -398  2.76e-06        0      637       776  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 158
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 154
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 213
Photon Angle == 0.6123996806527066
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      102    -8.71      100  2.76e-06        0        0         0   physWorld initStep
    1     27.6    -8.71     37.8  2.76e-06        0     96.8      96.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7378074061155639
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       26    -8.67     36.4  2.76e-06        0     2.11      98.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     13.1    -9.67       28  2.76e-06        0     15.4       114 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -28.8    -12.9    0.769  2.76e-06        0     50.1       164 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -28.8    -12.9    0.769  2.76e-06        0        0       164 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    0.192     15.2       28  2.76e-06        0     48.7       213 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7     9.79     24.6       37  2.76e-06        0     16.1       229   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     10.8     25.7     38.5  2.76e-06        0     2.11       231   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      359      423      500  2.76e-06        0      701       932  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 159
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 155
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 215
Photon Angle == 0.7378074061155639
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      136    -2.53      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1    -2.53     19.9  2.76e-06        0      125       125   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6003252064974669
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1    -2.51     18.5  2.76e-06        0     2.43       127   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38    -2.51     18.4  2.76e-06        0    0.131       127 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     21.3    -3.66      -10  2.76e-06 2.76e-06       33       160    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 160
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 41
No. of Photons Reflected == 155
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 215
Photon Angle == 0.6003252064974669
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      153    -13.2      100  2.76e-06        0        0         0   physWorld initStep
    1     23.4    -13.2    -8.95  2.76e-06        0      169       169   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4018975126115123
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     20.7    -12.8      -10  2.76e-06 2.76e-06     2.88       172    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 161
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 41
No. of Photons Reflected == 155
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 215
Photon Angle == 0.4018975126115123
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      117     10.1      100  2.76e-06        0        0         0   physWorld initStep
    1     35.6     10.1     31.4  2.76e-06        0      107       107   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7129702057629439
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       34     10.1       30  2.76e-06        0     2.04       109 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 162
Energy Deposited == 0
No. of Photons Absorbed == 42
No. of Photons Reflected == 155
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 216
Photon Angle == 0.7129702057629439
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     95.3    -17.5      100  2.76e-06        0        0         0   physWorld initStep
    1     21.9    -17.5     38.4  2.76e-06        0     95.8      95.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8205226057554973
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     20.3    -17.4     36.9  2.76e-06        0     2.24      98.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 163
Energy Deposited == 0
No. of Photons Absorbed == 43
No. of Photons Reflected == 155
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 217
Photon Angle == 0.8205226057554973
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      140     28.3      100  2.76e-06        0        0         0   physWorld initStep
    1     -500     28.3     -437  2.76e-06        0      835       835  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.6981317007977319
TRACK ID == 1
THE CURRENT EVENTID IS == 164
Energy Deposited == 0
No. of Photons Absorbed == 43
No. of Photons Reflected == 155
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 217
Photon Angle == 0.6981317007977319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      107    -6.85      100  2.76e-06        0        0         0   physWorld initStep
    1     30.9    -6.85     35.9  2.76e-06        0     99.7      99.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7283478773670296
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     29.4    -6.82     34.5  2.76e-06        0     2.06       102 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 165
Energy Deposited == 0
No. of Photons Absorbed == 44
No. of Photons Reflected == 155
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 218
Photon Angle == 0.7283478773670296
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     90.4     17.8      100  2.76e-06        0        0         0   physWorld initStep
    1     18.6     17.8     39.7  2.76e-06        0     93.8      93.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8104452932907478
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     16.9     17.7     38.1  2.76e-06        0     2.31      96.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 166
Energy Deposited == 0
No. of Photons Absorbed == 45
No. of Photons Reflected == 155
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 219
Photon Angle == 0.8104452932907478
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      133     24.4      100  2.76e-06        0        0         0   physWorld initStep
    1     31.9     24.4     15.2  2.76e-06        0      132       132   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6133648947348549
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     29.5     24.1     13.7  2.76e-06        0     2.82       135   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     29.4     24.1     13.5  2.76e-06        0     0.17       135 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     29.4     24.1     13.5  2.76e-06        0        0       135   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     29.4     24.3     13.4  2.76e-06        0     0.17       135   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     30.2     26.5     11.8  2.76e-06        0     2.82       138   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      125      500     -393  2.76e-06        0      630       768  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 167
Energy Deposited == 0
No. of Photons Absorbed == 45
No. of Photons Reflected == 156
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 220
Photon Angle == 0.6133648947348549
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      127     2.23      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1     2.23     27.4  2.76e-06        0      113       113   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6003026807446394
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1     2.21     26.1  2.76e-06        0     2.43       115   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38     2.21       26  2.76e-06        0    0.131       115 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     16.8     3.49      -10  2.76e-06 2.76e-06     41.8       157    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 168
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 45
No. of Photons Reflected == 156
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 220
Photon Angle == 0.6003026807446394
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      114    -1.66      100  2.76e-06        0        0         0   physWorld initStep
    1     34.6    -1.66     33.5  2.76e-06        0      103       103   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7178556291452867
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     33.1    -1.65     32.2  2.76e-06        0     2.02       105 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 169
Energy Deposited == 0
No. of Photons Absorbed == 46
No. of Photons Reflected == 156
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 221
Photon Angle == 0.7178556291452867
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      106    -23.4      100  2.76e-06        0        0         0   physWorld initStep
    1     26.3    -23.4       33  2.76e-06        0      104       104   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7353199357711921
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.6    -23.3     31.5  2.76e-06        0     2.25       106 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     19.2    -24.6       28  2.76e-06        0     6.58       113 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -13.8    -32.7     6.38  2.76e-06        0     40.3       153 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -13.8    -32.7     6.38  2.76e-06        0        0       153 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -34.1       17     22.8  2.76e-06        0     56.1       209   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -34.1     17.1     22.8  2.76e-06        0    0.117       210   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -35.5     18.8     23.2  2.76e-06        0     2.23       212   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     -371      500      154  2.76e-06        0      601       813  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 170
Energy Deposited == 0
No. of Photons Absorbed == 46
No. of Photons Reflected == 157
No. of Photons Transmitted == 20
No. of Photons Detected == 0
Total no. of Photons == 223
Photon Angle == 0.7353199357711921
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      110    -36.3      100  2.76e-06        0        0         0   physWorld initStep
    1     17.2    -36.3     22.2  2.76e-06        0      121       121   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6621857224269254
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     14.3    -35.4     20.1  2.76e-06        0      3.7       125   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       14    -35.4     19.8  2.76e-06        0    0.425       125 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4       14    -35.4     19.8  2.76e-06        0        0       125   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     13.7    -35.6     19.5  2.76e-06        0    0.425       126   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     12.2    -38.2     17.4  2.76e-06        0      3.7       129   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -438     -460     -500  2.76e-06        0      805       934  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 171
Energy Deposited == 0
No. of Photons Absorbed == 46
No. of Photons Reflected == 158
No. of Photons Transmitted == 20
No. of Photons Detected == 0
Total no. of Photons == 224
Photon Angle == 0.6621857224269254
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      121     32.4      100  2.76e-06        0        0         0   physWorld initStep
    1     23.7     32.4     18.4  2.76e-06        0      127       127   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6347419772676424
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     21.1     31.8     16.5  2.76e-06        0     3.29       130   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     20.9     31.8     16.4  2.76e-06        0    0.248       131 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     20.9     31.8     16.4  2.76e-06        0        0       131   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     20.8       32     16.2  2.76e-06        0    0.248       131   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     20.3     34.6     14.3  2.76e-06        0     3.29       134   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -182      500     -411  2.76e-06        0      662       796  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 172
Energy Deposited == 0
No. of Photons Absorbed == 46
No. of Photons Reflected == 159
No. of Photons Transmitted == 20
No. of Photons Detected == 0
Total no. of Photons == 225
Photon Angle == 0.6347419772676424
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     90.8     1.87      100  2.76e-06        0        0         0   physWorld initStep
    1     21.5     1.87     41.8  2.76e-06        0     90.5      90.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8141217776229182
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     19.9     1.86     40.3  2.76e-06        0     2.18      92.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 173
Energy Deposited == 0
No. of Photons Absorbed == 47
No. of Photons Reflected == 159
No. of Photons Transmitted == 20
No. of Photons Detected == 0
Total no. of Photons == 226
Photon Angle == 0.8141217776229182
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     97.1    -12.8      100  2.76e-06        0        0         0   physWorld initStep
    1     24.2    -12.8     38.8  2.76e-06        0     95.2      95.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8248137148066861
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.6    -12.7     37.3  2.76e-06        0     2.17      97.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     7.11    -14.6       28  2.76e-06        0     18.2       116 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -29.6    -18.9     5.84  2.76e-06        0     43.1       159 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -29.6    -18.9     5.84  2.76e-06        0        0       159 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -12.5     9.82       28  2.76e-06        0     40.1       199 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7    -4.35     23.4     38.5  2.76e-06        0       19       218   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -3.82     24.9     40.1  2.76e-06        0     2.18       220   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      192      479      500  2.76e-06        0      676       896  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 174
Energy Deposited == 0
No. of Photons Absorbed == 47
No. of Photons Reflected == 160
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 228
Photon Angle == 0.8248137148066861
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       94     17.7      100  2.76e-06        0        0         0   physWorld initStep
    1       21     17.7     38.7  2.76e-06        0     95.3      95.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8178056992710561
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     19.3     17.6     37.2  2.76e-06        0     2.26      97.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 175
Energy Deposited == 0
No. of Photons Absorbed == 48
No. of Photons Reflected == 160
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 229
Photon Angle == 0.8178056992710561
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      103     28.2      100  2.76e-06        0        0         0   physWorld initStep
    1     22.5     28.2     32.3  2.76e-06        0      105       105   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7442877180380831
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     20.7       28     30.7  2.76e-06        0     2.38       108 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     20.7       28     30.7  2.76e-06        0        0       108   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     20.6       30       32  2.76e-06        0     2.38       110   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -51.9      500      305  2.76e-06        0      549       659  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 176
Energy Deposited == 0
No. of Photons Absorbed == 48
No. of Photons Reflected == 161
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 230
Photon Angle == 0.7442877180380831
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      141     9.82      100  2.76e-06        0        0         0   physWorld initStep
    1     38.9     9.82     14.5  2.76e-06        0      133       133   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6017857272927363
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.9     9.73     13.1  2.76e-06        0     2.48       135   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.8     9.73       13  2.76e-06        0    0.135       136 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     31.2     11.4     3.07  2.76e-06        0     11.6       147 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     31.2     11.4     3.07  2.76e-06        0        0       147 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     16.9     12.5      -10  2.76e-06 2.76e-06     19.4       167    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 177
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 48
No. of Photons Reflected == 162
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 231
Photon Angle == 0.6017857272927363
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      136    -28.6      100  2.76e-06        0        0         0   physWorld initStep
    1     27.6    -28.6     9.42  2.76e-06        0      141       141   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.8074131710055115
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     27.6    -28.6     9.42  2.76e-06        0        0       141   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -463    -83.5     -500  2.76e-06        0      709       850  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 178
Energy Deposited == 0
No. of Photons Absorbed == 48
No. of Photons Reflected == 163
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 232
Photon Angle == 0.8074131710055115
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      140     26.4      100  2.76e-06        0        0         0   physWorld initStep
    1     -500     26.4     -437  2.76e-06        0      836       836  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.6981317007977319
TRACK ID == 1
THE CURRENT EVENTID IS == 179
Energy Deposited == 0
No. of Photons Absorbed == 48
No. of Photons Reflected == 163
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 232
Photon Angle == 0.6981317007977319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      105     35.4      100  2.76e-06        0        0         0   physWorld initStep
    1       19     35.4     27.5  2.76e-06        0      113       113   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6533780386705921
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     16.2     34.6     25.5  2.76e-06        0     3.59       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     15.9     34.6     25.2  2.76e-06        0     0.35       117 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     15.9     34.6     25.2  2.76e-06        0        0       117   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     15.7     34.8       25  2.76e-06        0     0.35       117   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     14.5     37.4       23  2.76e-06        0     3.59       121   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -382      500     -488  2.76e-06        0      795       916  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 180
Energy Deposited == 0
No. of Photons Absorbed == 48
No. of Photons Reflected == 164
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 233
Photon Angle == 0.6533780386705921
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      123     12.3      100  2.76e-06        0        0         0   physWorld initStep
    1     37.6     12.3     28.7  2.76e-06        0      111       111   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7052944199844662
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.8     12.3       28  2.76e-06        0     1.02       112   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     36.1     12.3     27.4  2.76e-06        0    0.929       113   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4       36     12.3     27.3  2.76e-06        0    0.159       113 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5       36     12.3     27.3  2.76e-06        0        0       113   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     36.1     12.4     27.2  2.76e-06        0    0.159       113   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     37.8     13.6     25.4  2.76e-06        0     2.73       116   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8      406      324     -500  2.76e-06        0      713       829  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 181
Energy Deposited == 0
No. of Photons Absorbed == 48
No. of Photons Reflected == 165
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 234
Photon Angle == 0.7052944199844662
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      137     31.1      100  2.76e-06        0        0         0   physWorld initStep
    1     -500     31.1     -434  2.76e-06        0      832       832  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.6981317007977319
TRACK ID == 1
THE CURRENT EVENTID IS == 182
Energy Deposited == 0
No. of Photons Absorbed == 48
No. of Photons Reflected == 165
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 234
Photon Angle == 0.6981317007977319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      153    -4.93      100  2.76e-06        0        0         0   physWorld initStep
    1     31.5    -4.93    -1.79  2.76e-06        0      158       158   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4016241746702756
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     28.6    -4.81       -3  2.76e-06        0     3.12       161   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     28.5    -4.81    -3.07  2.76e-06        0    0.103       162 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     28.5    -4.81    -3.07  2.76e-06        0        0       162   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     28.5    -4.81    -3.16  2.76e-06        0    0.101       162   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     28.3    -5.14    -6.24  2.76e-06        0      3.1       165   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -162    -41.3     -500  2.76e-06        0      530       695  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 183
Energy Deposited == 0
No. of Photons Absorbed == 48
No. of Photons Reflected == 166
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 235
Photon Angle == 0.4016241746702756
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      110     24.4      100  2.76e-06        0        0         0   physWorld initStep
    1     28.2     24.4     31.1  2.76e-06        0      107       107   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7282611213788246
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     26.5     24.2     29.6  2.76e-06        0     2.24       109 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 184
Energy Deposited == 0
No. of Photons Absorbed == 49
No. of Photons Reflected == 166
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 236
Photon Angle == 0.7282611213788246
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      123     24.3      100  2.76e-06        0        0         0   physWorld initStep
    1       32     24.3     23.7  2.76e-06        0      119       119   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6131046029853677
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     29.7       24     22.1  2.76e-06        0     2.81       122   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     29.6       24       22  2.76e-06        0    0.169       122 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     29.6       24       22  2.76e-06        0        0       122   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     29.6     24.1     21.9  2.76e-06        0    0.169       122   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     30.4     26.3     20.3  2.76e-06        0     2.81       125   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      130      500     -386  2.76e-06        0      632       757  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 185
Energy Deposited == 0
No. of Photons Absorbed == 49
No. of Photons Reflected == 167
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 237
Photon Angle == 0.6131046029853677
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     96.3       11      100  2.76e-06        0        0         0   physWorld initStep
    1     24.1       11     39.3  2.76e-06        0     94.4      94.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8237237559721762
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.5     10.9     37.9  2.76e-06        0     2.16      96.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     6.04     12.6       28  2.76e-06        0     19.2       116 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -31     16.3     5.73  2.76e-06        0     43.4       159 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5      -31     16.3     5.73  2.76e-06        0        0       159 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6      -11    -8.26       28  2.76e-06        0     38.7       198 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7   -0.418    -21.2     39.8  2.76e-06        0     20.5       218   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    8   -0.418    -21.2     39.8  2.76e-06        0        0       218 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     6.93      -21       28  2.76e-06        0     13.9       232 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
   10       24    -20.4    0.695  2.76e-06        0     32.2       264 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   11       24    -20.4    0.695  2.76e-06        0        0       264 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12    -6.01     34.6      5.8  2.76e-06        0     62.9       327 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   13    -6.01     34.6      5.8  2.76e-06        0        0       327 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   14    -12.7     27.4       28  2.76e-06        0     24.3       352 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
   15    -14.8     25.1     35.3  2.76e-06        0     7.93       360   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
   16    -14.8     25.1     35.3  2.76e-06        0        0       360 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   17    -10.5    -8.39       28  2.76e-06        0     34.5       394 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
   18    -6.78    -37.4     21.7  2.76e-06        0       30       424   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   19    -6.78    -37.5     21.7  2.76e-06        0    0.104       424   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   20    -6.74    -39.6     21.4  2.76e-06        0     2.06       426   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   21     13.8     -500    -51.8  2.76e-06        0      467       893  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 186
Energy Deposited == 0
No. of Photons Absorbed == 49
No. of Photons Reflected == 172
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 243
Photon Angle == 0.8237237559721762
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      156     1.53      100  2.76e-06        0        0         0   physWorld initStep
    1     28.1     1.53    -7.09  2.76e-06        0      167       167   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.4018847851483587
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.3     1.49     -8.3  2.76e-06        0      3.1       170   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     25.2     1.49    -8.31  2.76e-06        0   0.0243       170 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4     25.2     1.49    -8.31  2.76e-06        0        0       170   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     25.2     1.49    -8.34  2.76e-06        0   0.0237       170   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     25.1     1.56      -10  2.76e-06 2.76e-06     1.67       171    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 187
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 49
No. of Photons Reflected == 173
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 244
Photon Angle == 0.4018847851483587
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      129     34.2      100  2.76e-06        0        0         0   physWorld initStep
    1     -500     34.2     -428  2.76e-06        0      821       821  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.6981317007977319
TRACK ID == 1
THE CURRENT EVENTID IS == 188
Energy Deposited == 0
No. of Photons Absorbed == 49
No. of Photons Reflected == 173
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 244
Photon Angle == 0.6981317007977319
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     99.6     9.93      100  2.76e-06        0        0         0   physWorld initStep
    1     26.2     9.93     38.4  2.76e-06        0     95.8      95.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8296686137548823
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.6     9.87       37  2.76e-06        0     2.13        98 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     24.6     9.87       37  2.76e-06        0        0        98   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4       25     10.6     38.9  2.76e-06        0     2.13       100   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5       85      188      500  2.76e-06        0      498       598  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 189
Energy Deposited == 0
No. of Photons Absorbed == 49
No. of Photons Reflected == 174
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 245
Photon Angle == 0.8296686137548823
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      109     31.2      100  2.76e-06        0        0         0   physWorld initStep
    1     24.2     31.2     28.7  2.76e-06        0      111       111   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.735038764069933
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.5     31.2       28  2.76e-06        0     1.03       112   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     22.2       31     26.9  2.76e-06        0     1.69       114   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     21.9     31.1     26.5  2.76e-06        0     0.55       114 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     21.9     31.1     26.5  2.76e-06        0        0       114   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     21.7     31.4       26  2.76e-06        0     0.55       115   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7       21     34.2     23.5  2.76e-06        0     3.86       119   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     -233      409     -500  2.76e-06        0      692       811  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 190
Energy Deposited == 0
No. of Photons Absorbed == 49
No. of Photons Reflected == 175
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 246
Photon Angle == 0.735038764069933
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      119    -3.99      100  2.76e-06        0        0         0   physWorld initStep
    1     37.1    -3.99     31.1  2.76e-06        0      107       107   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.709705336622839
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     35.6    -3.98     29.7  2.76e-06        0     2.01       109 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 191
Energy Deposited == 0
No. of Photons Absorbed == 50
No. of Photons Reflected == 175
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 247
Photon Angle == 0.709705336622839
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      135    -9.77      100  2.76e-06        0        0         0   physWorld initStep
    1     38.9    -9.77     19.7  2.76e-06        0      125       125   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6017678070270027
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.9    -9.67     18.3  2.76e-06        0     2.48       127   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.8    -9.67     18.2  2.76e-06        0    0.135       128 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    4     36.8    -9.67     18.2  2.76e-06        0        0       128   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     36.9    -9.72     18.1  2.76e-06        0    0.135       128   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     38.7    -10.6     16.7  2.76e-06        0     2.48       130   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      500     -271     -428  2.76e-06        0      692       822  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 192
Energy Deposited == 0
No. of Photons Absorbed == 50
No. of Photons Reflected == 176
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 248
Photon Angle == 0.6017678070270027
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      131     31.7      100  2.76e-06        0        0         0   physWorld initStep
    1     24.7     31.7       11  2.76e-06        0      138       138   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6314996552085392
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     19.9     30.6     7.65  2.76e-06        0        6       144   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     19.9     30.6     7.65  2.76e-06        0        0       144   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4       14       31     1.22  2.76e-06        0     8.69       153   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5       14       31     1.22  2.76e-06        0 1.21e-14       153   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     6.26     28.1     -3.3  2.76e-06        0     9.42       163   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    7     6.26     28.1     -3.3  2.76e-06        0        0       163   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8   -0.676       27    -8.66  2.76e-06        0     8.83       171   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    9   -0.676       27    -8.66  2.76e-06        0        0       171   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10     -4.1     24.6      -10  2.76e-06 2.76e-06     4.42       176    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 193
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 50
No. of Photons Reflected == 180
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 252
Photon Angle == 0.6314996552085392
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      114      9.4      100  2.76e-06        0        0         0   physWorld initStep
    1     33.8      9.4     33.1  2.76e-06        0      104       104   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7187593164697703
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     32.3     9.35     31.8  2.76e-06        0     2.05       106 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 194
Energy Deposited == 0
No. of Photons Absorbed == 51
No. of Photons Reflected == 180
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 253
Photon Angle == 0.7187593164697703
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     96.6    0.357      100  2.76e-06        0        0         0   physWorld initStep
    1     25.1    0.357     40.1  2.76e-06        0     93.3      93.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.8248901167523868
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.6    0.355     38.6  2.76e-06        0     2.12      95.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     23.6    0.355     38.6  2.76e-06        0        0      95.4   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     23.9    0.381     40.7  2.76e-06        0     2.12      97.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     64.8     6.32      500  2.76e-06        0      461       559  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 195
Energy Deposited == 0
No. of Photons Absorbed == 51
No. of Photons Reflected == 181
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 254
Photon Angle == 0.8248901167523868
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      108      6.1      100  2.76e-06        0        0         0   physWorld initStep
    1     31.6      6.1     35.5  2.76e-06        0      100       100   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.726441998215611
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       30     6.07     34.2  2.76e-06        0     2.05       102 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 196
Energy Deposited == 0
No. of Photons Absorbed == 52
No. of Photons Reflected == 181
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 255
Photon Angle == 0.726441998215611
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      129     22.6      100  2.76e-06        0        0         0   physWorld initStep
    1     33.2     22.6     19.6  2.76e-06        0      125       125   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.6108344854265169
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.9     22.4       18  2.76e-06        0     2.75       128   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.8     22.4     17.9  2.76e-06        0    0.162       128 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     30.8     22.4     17.9  2.76e-06        0        0       128   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     30.8     22.5     17.8  2.76e-06        0    0.162       128   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     31.8     24.5     16.2  2.76e-06        0     2.75       131   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      187      500     -403  2.76e-06        0      653       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 197
Energy Deposited == 0
No. of Photons Absorbed == 52
No. of Photons Reflected == 182
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 256
Photon Angle == 0.6108344854265169
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      146     18.6      100  2.76e-06        0        0         0   physWorld initStep
    1     29.9     18.6     2.93  2.76e-06        0      151       151   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  1.000921327990288
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     29.9     18.6     2.93  2.76e-06        0        0       151   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3     -297      104     -500  2.76e-06        0      606       757  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 198
Energy Deposited == 0
No. of Photons Absorbed == 52
No. of Photons Reflected == 183
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 257
Photon Angle == 1.000921327990288
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.8726646259971648
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      121     6.57      100  2.76e-06        0        0         0   physWorld initStep
    1     37.6     6.57     30.2  2.76e-06        0      109       109   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.7075242007855085
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.1     6.54     28.9  2.76e-06        0     2.02       111 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     36.1     6.54     28.9  2.76e-06        0        0       111   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     37.4     7.02     30.3  2.76e-06        0     2.02       113   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      443      170      500  2.76e-06        0      641       754  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 199
Energy Deposited == 0
No. of Photons Absorbed == 52
No. of Photons Reflected == 184
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 258
Photon Angle == 0.7075242007855085
 Run terminated.
Run Summary
  Number of events processed : 200
  User=1.06s Real=1.09s Sys=0.03s
FileName = run.mac
G4 kernel has come to Quit state.
================== Deleting memory pools ===================
Number of memory pools allocated: 9; of which, static: 0
Dynamic pools deleted: 9 / Total memory freed: 0.057 Mb
============================================================
RunManagerKernel is deleted. Good bye :)
Graphics systems deleted.
Visualization Manager deleting...
