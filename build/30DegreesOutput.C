
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
THE VALUE OF ANGLE IN RADIANS == 0.523599
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
    0     41.4     4.06      100  2.76e-06        0        0         0   physWorld initStep
    1     9.79     4.06     45.3  2.76e-06        0     63.1      63.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4814874573980985
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     8.82     4.04     43.5  2.76e-06        0      2.1      65.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 0
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 0
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 1
Photon Angle == 0.4814874573980985
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
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
    0     86.6    -9.49      100  2.76e-06        0        0         0   physWorld initStep
    1       39    -9.49     17.5  2.76e-06        0     95.2      95.2   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477401
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       37    -9.33     15.2  2.76e-06        0     3.13      98.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.9    -9.33       15  2.76e-06        0    0.207      98.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     36.9    -9.33       15  2.76e-06        0        0      98.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5       37    -9.38     14.8  2.76e-06        0    0.207      98.8   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     38.8    -10.2     12.4  2.76e-06        0     3.13       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      299     -151     -500  2.76e-06        0      592       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 1
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 1
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 2
Photon Angle == 0.7059551846477401
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
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
    0     52.3     3.94      100  2.76e-06        0        0         0   physWorld initStep
    1     19.2     3.94     42.6  2.76e-06        0     66.2      66.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5051618487018525
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     18.2     3.92     40.9  2.76e-06        0     2.02      68.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     9.81     4.34       28  2.76e-06        0     15.4      83.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -15     5.58      -10  2.76e-06 2.76e-06     45.4       129    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 2
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 1
No. of Photons Reflected == 1
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 3
Photon Angle == 0.5051618487018525
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
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
    0     76.1    -28.4      100  2.76e-06        0        0         0   physWorld initStep
    1     28.4    -28.4     17.3  2.76e-06        0     95.5      95.5   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477401
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.2    -27.7     14.6  2.76e-06        0     3.54        99   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       26    -27.7     14.4  2.76e-06        0      0.3      99.3 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4       26    -27.7     14.4  2.76e-06        0        0      99.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5       26    -27.9     14.1  2.76e-06        0      0.3      99.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     26.5    -30.1     11.4  2.76e-06        0     3.54       103   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     7.84     -325     -500  2.76e-06        0      591       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 3
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 4
Photon Angle == 0.7059551846477401
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
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
    0     39.7    -19.9      100  2.76e-06        0        0         0   physWorld initStep
    1     6.28    -19.9     42.1  2.76e-06        0     66.8      66.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4765992524867944
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     5.25    -19.8     40.1  2.76e-06        0     2.26      69.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 4
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 5
Photon Angle == 0.4765992524867944
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
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
    0       68     14.2      100  2.76e-06        0        0         0   physWorld initStep
    1     30.2     14.2     34.6  2.76e-06        0     75.6      75.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5378973100999991
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     29.2     14.1     32.8  2.76e-06        0     2.07      77.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 5
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 6
Photon Angle == 0.5378973100999991
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
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
    0     90.5    -13.6      100  2.76e-06        0        0         0   physWorld initStep
    1     -256    -13.6     -500  2.76e-06        0      693       693  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.5235987755982987
TRACK ID == 1
THE CURRENT EVENTID IS == 6
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 6
Photon Angle == 0.5235987755982987
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
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
    0     69.1      -15      100  2.76e-06        0        0         0   physWorld initStep
    1     30.9      -15     33.8  2.76e-06        0     76.5      76.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5403923883101034
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     29.8    -14.9       32  2.76e-06        0     2.08      78.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 7
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 7
Photon Angle == 0.5403923883101034
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
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
    0     51.8     24.4      100  2.76e-06        0        0         0   physWorld initStep
    1     15.9     24.4     37.7  2.76e-06        0       72        72   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5055378885038437
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     14.8     24.3     35.7  2.76e-06        0     2.22      74.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     9.56     26.3       28  2.76e-06        0     9.54      83.7 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -7.21     32.5     3.26  2.76e-06        0     30.5       114 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -7.21     32.5     3.26  2.76e-06        0        0       114 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -24.5    -24.1     4.77  2.76e-06        0     59.2       174 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -24.5    -24.1     4.77  2.76e-06        0        0       174 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -9.76    -28.2       28  2.76e-06        0     27.8       201 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     -5.5    -29.4     34.7  2.76e-06        0     8.03       209   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    -4.82    -30.2     36.7  2.76e-06        0     2.25       212   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      182     -186      500  2.76e-06        0      523       735  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 8
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 4
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 10
Photon Angle == 0.5055378885038437
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
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
    0     67.2    -22.5      100  2.76e-06        0        0         0   physWorld initStep
    1     28.1    -22.5     32.3  2.76e-06        0     78.1      78.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5384638932944803
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       27    -22.3     30.5  2.76e-06        0     2.17      80.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 9
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 4
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 11
Photon Angle == 0.5384638932944803
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     35.3     24.9      100  2.76e-06        0        0         0   physWorld initStep
    1    0.789     24.9     40.2  2.76e-06        0       69        69   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4636984730118838
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2   -0.285     24.7       38  2.76e-06        0     2.43      71.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -10.2     28.6       28  2.76e-06        0     14.6      86.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -19.9     32.4     18.2  2.76e-06        0     14.3       100   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      -20     32.5     18.2  2.76e-06        0    0.126       101   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -21.6     33.8     17.1  2.76e-06        0     2.36       103   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500      386     -336  2.76e-06        0      691       794  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 10
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 4
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 12
Photon Angle == 0.4636984730118838
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     38.9    -6.01      100  2.76e-06        0        0         0   physWorld initStep
    1     7.45    -6.01     45.5  2.76e-06        0     62.9      62.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4756265328863782
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     6.48    -5.98     43.6  2.76e-06        0     2.13        65 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 11
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 4
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 13
Photon Angle == 0.4756265328863782
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     21.8     6.14      100  2.76e-06        0        0         0   physWorld initStep
    1    -9.94     6.14     45.1  2.76e-06        0     63.4      63.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4232936183756153
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2      -11      6.1     42.8  2.76e-06        0     2.48      65.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -31.1     7.89       28  2.76e-06        0     25.1        91 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -37.1     8.42     23.6  2.76e-06        0     7.48      98.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -37.2     8.43     23.5  2.76e-06        0    0.112      98.5   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -39.2     8.72     22.7  2.76e-06        0     2.18       101   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500     70.7     -206  2.76e-06        0      518       619  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 12
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 4
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 14
Photon Angle == 0.4232936183756153
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     58.3     21.6      100  2.76e-06        0        0         0   physWorld initStep
    1     21.7     21.6     36.6  2.76e-06        0     73.2      73.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5191837047539321
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     20.7     21.5     34.8  2.76e-06        0     2.15      75.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     16.6     22.8       28  2.76e-06        0     8.05      83.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -2.13       29    -2.79  2.76e-06        0     36.5       120 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -2.13       29    -2.79  2.76e-06        0        0       120 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -22.5    -13.1    -7.13  2.76e-06        0     46.9       167 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -22.5    -13.1    -7.13  2.76e-06        0        0       167 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     5.67      -27       28  2.76e-06        0     47.1       214 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     10.3    -29.3     33.8  2.76e-06        0      7.8       222   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     11.3    -30.2     35.5  2.76e-06        0      2.1       224   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      311     -258      500  2.76e-06        0      598       822  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 13
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 6
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 17
Photon Angle == 0.5191837047539321
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     44.5     9.02      100  2.76e-06        0        0         0   physWorld initStep
    1     12.3     9.02     44.2  2.76e-06        0     64.5      64.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.488625767348859
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     11.3     8.98     42.3  2.76e-06        0     2.09      66.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     11.3     8.98     42.3  2.76e-06        0        0      66.6   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     11.2     9.64     44.3  2.76e-06        0     2.09      68.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -28.6      170      500  2.76e-06        0      485       554  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 14
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 7
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 18
Photon Angle == 0.488625767348859
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     33.9     21.8      100  2.76e-06        0        0         0   physWorld initStep
    1    0.306     21.8     41.7  2.76e-06        0     67.3      67.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4604833095169831
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2   -0.745     21.6     39.6  2.76e-06        0     2.39      69.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 15
Energy Deposited == 0
No. of Photons Absorbed == 7
No. of Photons Reflected == 7
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 19
Photon Angle == 0.4604833095169831
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     55.4    -17.9      100  2.76e-06        0        0         0   physWorld initStep
    1     20.2    -17.9       39  2.76e-06        0     70.4      70.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5123682378708758
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     19.2    -17.8     37.2  2.76e-06        0     2.11      72.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     13.4    -19.3       28  2.76e-06        0       11      83.5 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -8.62    -24.8    -6.76  2.76e-06        0     41.5       125 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -8.62    -24.8    -6.76  2.76e-06        0        0       125 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -15.1     21.4    -6.85  2.76e-06        0     46.7       172 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -15.1     21.4    -6.85  2.76e-06        0        0       172 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     7.74     22.1       28  2.76e-06        0     41.7       213 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     13.8     22.3     37.2  2.76e-06        0       11       224   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     14.7     22.6       39  2.76e-06        0     2.11       226   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      273     95.2      500  2.76e-06        0      533       760  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 16
Energy Deposited == 0
No. of Photons Absorbed == 7
No. of Photons Reflected == 9
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 22
Photon Angle == 0.5123682378708758
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     49.9     1.84      100  2.76e-06        0        0         0   physWorld initStep
    1     17.3     1.84     43.5  2.76e-06        0     65.3      65.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5001321152630278
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     16.3     1.83     41.7  2.76e-06        0     2.03      67.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 17
Energy Deposited == 0
No. of Photons Absorbed == 8
No. of Photons Reflected == 9
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 23
Photon Angle == 0.5001321152630278
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     51.5     29.4      100  2.76e-06        0        0         0   physWorld initStep
    1       14     29.4     35.2  2.76e-06        0     74.8      74.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5055890911883059
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     12.9     29.2     33.1  2.76e-06        0     2.34      77.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     9.33     31.1       28  2.76e-06        0     6.54      83.7 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -3.52     37.6     9.65  2.76e-06        0     23.3       107 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -3.52     37.6     9.65  2.76e-06        0        0       107 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -32.1    -20.5     12.6  2.76e-06        0     64.8       172   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -32.1    -20.6     12.6  2.76e-06        0    0.108       172   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8    -33.4    -22.3     12.6  2.76e-06        0     2.12       174   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     -365     -500     32.1  2.76e-06        0      582       756  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 18
Energy Deposited == 0
No. of Photons Absorbed == 8
No. of Photons Reflected == 10
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 25
Photon Angle == 0.5055890911883059
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     68.8     6.52      100  2.76e-06        0        0         0   physWorld initStep
    1     31.5     6.52     35.5  2.76e-06        0     74.5      74.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5383100504952218
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     30.5     6.49     33.8  2.76e-06        0     2.02      76.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 19
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 10
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 26
Photon Angle == 0.5383100504952218
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     60.4    -30.7      100  2.76e-06        0        0         0   physWorld initStep
    1     20.7    -30.7     31.3  2.76e-06        0     79.3      79.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5269240364576211
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     19.6    -30.5     29.3  2.76e-06        0     2.34      81.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     18.8    -30.9       28  2.76e-06        0     1.58      83.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     8.67      -37     10.8  2.76e-06        0     20.8       104   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    5     8.67      -37     10.8  2.76e-06        0        0       104 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     7.85      -37     9.65  2.76e-06        0     1.45       106 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7     7.85      -37     9.65  2.76e-06        0        0       106 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -21.8    -11.3     -9.2  2.76e-06        0     43.6       149 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    9    -21.8    -11.3     -9.2  2.76e-06        0        0       149 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   10    -19.2     20.9    -3.68  2.76e-06        0     32.8       182 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
   11    -19.2     20.9    -3.68  2.76e-06        0        0       182 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   12     3.19     37.9     22.9  2.76e-06        0     38.7       221   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13     3.25       38       23  2.76e-06        0    0.132       221   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   14     4.27     39.9     24.1  2.76e-06        0     2.43       223   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   15      298      500      350  2.76e-06        0      636       859  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 20
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 14
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 31
Photon Angle == 0.5269240364576211
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     39.5    -13.2      100  2.76e-06        0        0         0   physWorld initStep
    1     7.27    -13.2     44.2  2.76e-06        0     64.4      64.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4766505363777633
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     6.27    -13.2     42.3  2.76e-06        0     2.17      66.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 21
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 14
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 32
Photon Angle == 0.4766505363777633
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     65.2     35.3      100  2.76e-06        0        0         0   physWorld initStep
    1     19.2     35.3     20.3  2.76e-06        0       92        92   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477405
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     16.9     34.2     17.4  2.76e-06        0     3.89      95.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     16.6     34.2     16.9  2.76e-06        0    0.528      96.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     16.6     34.2     16.9  2.76e-06        0        0      96.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     16.5     34.4     16.5  2.76e-06        0    0.528      96.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     15.9     36.9     13.5  2.76e-06        0     3.89       101   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -167      270     -500  2.76e-06        0      593       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 22
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 15
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 33
Photon Angle == 0.7059551846477405
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     37.8    -7.98      100  2.76e-06        0        0         0   physWorld initStep
    1     6.31    -7.98     45.4  2.76e-06        0       63        63   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4729095693740799
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     5.33    -7.94     43.5  2.76e-06        0     2.16      65.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 23
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 15
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 34
Photon Angle == 0.4729095693740799
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       46       29      100  2.76e-06        0        0         0   physWorld initStep
    1     9.48       29     36.8  2.76e-06        0       73        73   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4921760268121287
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     8.37     28.8     34.7  2.76e-06        0     2.38      75.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     3.15     31.3       28  2.76e-06        0     8.85      84.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -8.56     37.1     13.1  2.76e-06        0     19.8       104   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -8.64     37.2       13  2.76e-06        0    0.136       104   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -9.89     38.9     11.8  2.76e-06        0     2.48       107   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -398      500     -398  2.76e-06        0      729       836  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 24
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 15
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 35
Photon Angle == 0.4921760268121287
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     36.4     27.8      100  2.76e-06        0        0         0   physWorld initStep
    1    0.878     27.8     38.5  2.76e-06        0       71        71   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4661241965929874
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2   -0.224     27.6     36.3  2.76e-06        0     2.49      73.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -8.75     31.8       28  2.76e-06        0     12.6      86.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -15.1     34.9     21.8  2.76e-06        0     9.42      95.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -15.2       35     21.8  2.76e-06        0    0.126      95.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -16.7     36.5     20.7  2.76e-06        0     2.36        98   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500      471     -345  2.76e-06        0      746       844  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 25
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 15
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 36
Photon Angle == 0.4661241965929874
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     39.6    -24.9      100  2.76e-06        0        0         0   physWorld initStep
    1     4.93    -24.9     39.9  2.76e-06        0     69.4      69.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4758355318862484
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     3.86    -24.8     37.8  2.76e-06        0     2.36      71.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 26
Energy Deposited == 0
No. of Photons Absorbed == 12
No. of Photons Reflected == 15
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 37
Photon Angle == 0.4758355318862484
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     42.1     1.74      100  2.76e-06        0        0         0   physWorld initStep
    1     10.5     1.74     45.3  2.76e-06        0     63.1      63.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4831571690708398
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     9.54     1.73     43.5  2.76e-06        0     2.09      65.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 27
Energy Deposited == 0
No. of Photons Absorbed == 13
No. of Photons Reflected == 15
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 38
Photon Angle == 0.4831571690708398
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     76.2    -23.5      100  2.76e-06        0        0         0   physWorld initStep
    1     32.6    -23.5     24.4  2.76e-06        0     87.3      87.3   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477401
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.4      -23     21.8  2.76e-06        0     3.37      90.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.3      -23     21.6  2.76e-06        0    0.254        91 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     30.3      -23     21.6  2.76e-06        0        0        91   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     30.3    -23.2     21.4  2.76e-06        0    0.254      91.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     31.3    -25.1     18.8  2.76e-06        0     3.37      94.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      111     -314     -500  2.76e-06        0      599       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 28
Energy Deposited == 0
No. of Photons Absorbed == 13
No. of Photons Reflected == 16
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 39
Photon Angle == 0.7059551846477401
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     47.9     22.4      100  2.76e-06        0        0         0   physWorld initStep
    1     13.1     22.4     39.6  2.76e-06        0     69.7      69.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4964303774945984
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       12     22.3     37.7  2.76e-06        0     2.21        72 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 29
Energy Deposited == 0
No. of Photons Absorbed == 14
No. of Photons Reflected == 16
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 40
Photon Angle == 0.4964303774945984
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     68.4     25.9      100  2.76e-06        0        0         0   physWorld initStep
    1       28     25.9     30.2  2.76e-06        0     80.6      80.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5427043057927685
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     26.9     25.8     28.2  2.76e-06        0     2.24      82.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 30
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 16
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 41
Photon Angle == 0.5427043057927685
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     71.7    -31.1      100  2.76e-06        0        0         0   physWorld initStep
    1     25.4    -31.1     19.8  2.76e-06        0     92.6      92.6   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477401
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.1    -30.3       17  2.76e-06        0     3.66      96.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       23    -30.3     16.7  2.76e-06        0    0.347      96.7 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4       23    -30.3     16.7  2.76e-06        0        0      96.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     22.9    -30.5     16.4  2.76e-06        0    0.347        97   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       23    -32.9     13.6  2.76e-06        0     3.66       101   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -57.6     -318     -500  2.76e-06        0      593       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 31
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 17
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 42
Photon Angle == 0.7059551846477401
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     74.2      -30      100  2.76e-06        0        0         0   physWorld initStep
    1     26.7      -30     17.8  2.76e-06        0     94.9      94.9   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477405
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.5    -29.2       15  2.76e-06        0      3.6      98.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     24.4    -29.2     14.8  2.76e-06        0    0.324      98.9 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     24.4    -29.2     14.8  2.76e-06        0        0      98.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     24.3    -29.4     14.5  2.76e-06        0    0.324      99.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     24.6    -31.7     11.7  2.76e-06        0      3.6       103   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -28.8     -322     -500  2.76e-06        0      591       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 32
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 18
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 43
Photon Angle == 0.7059551846477405
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     69.4    -9.54      100  2.76e-06        0        0         0   physWorld initStep
    1     31.7    -9.54     34.8  2.76e-06        0     75.3      75.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5399056526461985
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     30.7     -9.5       33  2.76e-06        0     2.04      77.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 33
Energy Deposited == 0
No. of Photons Absorbed == 16
No. of Photons Reflected == 18
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 44
Photon Angle == 0.5399056526461985
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     49.1     19.4      100  2.76e-06        0        0         0   physWorld initStep
    1     14.7     19.4     40.5  2.76e-06        0     68.8      68.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4989070837452321
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     13.7     19.3     38.6  2.76e-06        0     2.16      70.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 34
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 18
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 45
Photon Angle == 0.4989070837452321
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     59.6    -8.65      100  2.76e-06        0        0         0   physWorld initStep
    1     24.7    -8.65     39.5  2.76e-06        0     69.9      69.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5200591475055325
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     23.7    -8.61     37.7  2.76e-06        0     2.02      71.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 35
Energy Deposited == 0
No. of Photons Absorbed == 18
No. of Photons Reflected == 18
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 46
Photon Angle == 0.5200591475055325
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     36.9     5.96      100  2.76e-06        0        0         0   physWorld initStep
    1     5.63     5.96     45.8  2.76e-06        0     62.6      62.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4708032649459861
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     4.65     5.92     43.8  2.76e-06        0     2.16      64.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 36
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 18
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 47
Photon Angle == 0.4708032649459861
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     46.1    -2.61      100  2.76e-06        0        0         0   physWorld initStep
    1     14.1    -2.61     44.4  2.76e-06        0     64.2      64.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4922001726133525
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     13.1     -2.6     42.6  2.76e-06        0     2.05      66.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     2.69    -2.93       28  2.76e-06        0       18      84.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -24    -3.78    -9.54  2.76e-06        0     46.1       130 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5      -24    -3.78    -9.54  2.76e-06        0        0       130 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     34.5     9.98     7.02  2.76e-06        0     62.4       193 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7     34.5     9.98     7.02  2.76e-06        0        0       193 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     33.3     8.55       28  2.76e-06        0     21.1       214 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     33.1     8.32     31.3  2.76e-06        0     3.35       217   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     33.6     8.38     33.5  2.76e-06        0     2.26       219   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      114     10.1      500  2.76e-06        0      473       693  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 37
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 20
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 50
Photon Angle == 0.4922001726133525
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     48.3    -13.1      100  2.76e-06        0        0         0   physWorld initStep
    1     15.1    -13.1     42.5  2.76e-06        0     66.4      66.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.496892878553457
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     14.1      -13     40.7  2.76e-06        0     2.09      68.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 38
Energy Deposited == 0
No. of Photons Absorbed == 20
No. of Photons Reflected == 20
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 51
Photon Angle == 0.496892878553457
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     60.1     18.1      100  2.76e-06        0        0         0   physWorld initStep
    1     23.8     18.1     37.1  2.76e-06        0     72.6      72.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5222887401440341
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     22.8       18     35.3  2.76e-06        0      2.1      74.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 39
Energy Deposited == 0
No. of Photons Absorbed == 21
No. of Photons Reflected == 20
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 52
Photon Angle == 0.5222887401440341
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     38.8     17.2      100  2.76e-06        0        0         0   physWorld initStep
    1     5.98     17.2     43.2  2.76e-06        0     65.6      65.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4745537866636291
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     4.97     17.1     41.2  2.76e-06        0     2.23      67.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3       -6     19.6       28  2.76e-06        0     17.3      85.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -25     23.9      5.1  2.76e-06        0     30.1       115 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5      -25     23.9      5.1  2.76e-06        0        0       115 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     5.19    -37.7       24  2.76e-06        0     71.2       186   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     5.22    -37.8       24  2.76e-06        0    0.105       187   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8      5.9    -39.7     24.4  2.76e-06        0     2.07       189   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      183     -500      124  2.76e-06        0      503       692  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 40
Energy Deposited == 0
No. of Photons Absorbed == 21
No. of Photons Reflected == 21
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 54
Photon Angle == 0.4745537866636291
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     49.7     16.3      100  2.76e-06        0        0         0   physWorld initStep
    1     15.8     16.3     41.3  2.76e-06        0     67.8      67.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4999832005696381
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     14.8     16.2     39.5  2.76e-06        0     2.11      69.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 41
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 21
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 55
Photon Angle == 0.4999832005696381
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       51    -14.2      100  2.76e-06        0        0         0   physWorld initStep
    1     17.2    -14.2     41.5  2.76e-06        0     67.6      67.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5026454764811326
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     16.2    -14.2     39.7  2.76e-06        0     2.09      69.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     8.34    -15.6       28  2.76e-06        0     14.1      83.8 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -15.7    -20.1     -7.8  2.76e-06        0     43.4       127 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -15.7    -20.1     -7.8  2.76e-06        0        0       127 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -1.51     29.8    -1.63  2.76e-06        0     52.3       179 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -1.51     29.8    -1.63  2.76e-06        0        0       179 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     9.04     23.7       28  2.76e-06        0       32       212 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     12.5     21.7     37.8  2.76e-06        0     10.6       222   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     13.2     21.8     39.9  2.76e-06        0     2.16       224   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      168     14.7      500  2.76e-06        0      485       710  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 42
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 23
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 58
Photon Angle == 0.5026454764811326
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     47.2    -19.5      100  2.76e-06        0        0         0   physWorld initStep
    1     13.1    -19.5     40.9  2.76e-06        0     68.2      68.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4946577237946097
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     12.1    -19.4       39  2.76e-06        0     2.17      70.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 43
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 23
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 59
Photon Angle == 0.4946577237946097
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     68.5     8.91      100  2.76e-06        0        0         0   physWorld initStep
    1     31.2     8.91     35.3  2.76e-06        0     74.7      74.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5380945699932189
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.2     8.86     33.6  2.76e-06        0     2.03      76.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     30.2     8.86     33.6  2.76e-06        0        0      76.7   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     31.5     9.52       35  2.76e-06        0     2.03      78.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      484      244      500  2.76e-06        0      690       769  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 44
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 24
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 60
Photon Angle == 0.5380945699932189
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     56.7    -27.7      100  2.76e-06        0        0         0   physWorld initStep
    1     18.9    -27.7     34.5  2.76e-06        0     75.7      75.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.517195005138626
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     17.7    -27.5     32.5  2.76e-06        0     2.27      77.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     14.9    -28.9       28  2.76e-06        0     5.49      83.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     1.17    -35.3     6.18  2.76e-06        0     26.6       110 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     1.17    -35.3     6.18  2.76e-06        0        0       110 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -30.4     12.2     2.47  2.76e-06        0     57.2       167 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -30.4     12.2     2.47  2.76e-06        0        0       167 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -12.5     25.8       28  2.76e-06        0       34       201 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9    -8.02     29.2     34.5  2.76e-06        0     8.59       210   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     -7.4     30.3     36.3  2.76e-06        0     2.21       212   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      187      303      500  2.76e-06        0      572       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 45
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 26
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 63
Photon Angle == 0.517195005138626
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       51     32.5      100  2.76e-06        0        0         0   physWorld initStep
    1     12.5     32.5     33.4  2.76e-06        0     76.9      76.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5052860440381175
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     11.4     32.2     31.2  2.76e-06        0     2.43      79.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 46
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 26
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 64
Photon Angle == 0.5052860440381175
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     26.5     18.6      100  2.76e-06        0        0         0   physWorld initStep
    1    -6.64     18.6     42.6  2.76e-06        0     66.3      66.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4371650544033336
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -7.69     18.5     40.3  2.76e-06        0      2.5      68.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 47
Energy Deposited == 0
No. of Photons Absorbed == 25
No. of Photons Reflected == 26
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 65
Photon Angle == 0.4371650544033336
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       71     32.7      100  2.76e-06        0        0         0   physWorld initStep
    1     23.3     32.7     17.3  2.76e-06        0     95.5      95.5   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477401
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       21     31.8     14.4  2.76e-06        0     3.74      99.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     20.8     31.8     14.1  2.76e-06        0     0.39      99.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     20.8     31.8     14.1  2.76e-06        0        0      99.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     20.7       32     13.8  2.76e-06        0     0.39       100   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     20.6     34.4     10.9  2.76e-06        0     3.74       104   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -97.6      305     -500  2.76e-06        0      590       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 48
Energy Deposited == 0
No. of Photons Absorbed == 25
No. of Photons Reflected == 27
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 66
Photon Angle == 0.7059551846477401
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     54.5    -26.7      100  2.76e-06        0        0         0   physWorld initStep
    1     17.4    -26.7     35.7  2.76e-06        0     74.2      74.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5118974731080335
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     16.3    -26.6     33.8  2.76e-06        0     2.26      76.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 49
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 27
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 67
Photon Angle == 0.5118974731080335
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     55.9     23.7      100  2.76e-06        0        0         0   physWorld initStep
    1     19.4     23.7     36.7  2.76e-06        0     73.1      73.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5144254263757846
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     18.3     23.5     34.8  2.76e-06        0     2.19      75.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 50
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 27
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 68
Photon Angle == 0.5144254263757846
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     32.9    0.969      100  2.76e-06        0        0         0   physWorld initStep
    1     1.91    0.969     46.4  2.76e-06        0     61.9      61.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4603172877361703
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    0.931    0.963     44.4  2.76e-06        0      2.2      64.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 51
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 27
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 69
Photon Angle == 0.4603172877361703
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     78.9     8.13      100  2.76e-06        0        0         0   physWorld initStep
    1     38.1     8.13     29.4  2.76e-06        0     81.6      81.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5599223154543966
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.2      8.1       28  2.76e-06        0      1.6      83.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.2      8.1     27.9  2.76e-06        0   0.0828      83.3 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     37.2      8.1     27.9  2.76e-06        0        0      83.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     37.3     8.13     27.8  2.76e-06        0    0.168      83.4   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     39.2     8.82     25.8  2.76e-06        0     2.82      86.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      408      160     -500  2.76e-06        0      660       746  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 52
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 28
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 70
Photon Angle == 0.5599223154543966
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     26.9    -3.68      100  2.76e-06        0        0         0   physWorld initStep
    1    -4.23    -3.68     46.1  2.76e-06        0     62.2      62.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4423005532259534
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -5.22    -3.65       44  2.76e-06        0     2.33      64.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 53
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 28
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 71
Photon Angle == 0.4423005532259534
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       78     31.5      100  2.76e-06        0        0         0   physWorld initStep
    1     -268     31.5     -500  2.76e-06        0      693       693  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.5235987755982987
TRACK ID == 1
THE CURRENT EVENTID IS == 54
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 28
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 71
Photon Angle == 0.5235987755982987
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     62.6     14.8      100  2.76e-06        0        0         0   physWorld initStep
    1     26.2     14.8       37  2.76e-06        0     72.7      72.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5268458353342163
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     25.2     14.7     35.2  2.76e-06        0     2.07      74.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 55
Energy Deposited == 0
No. of Photons Absorbed == 30
No. of Photons Reflected == 28
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 72
Photon Angle == 0.5268458353342163
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     67.5     33.4      100  2.76e-06        0        0         0   physWorld initStep
    1     22.3     33.4     21.8  2.76e-06        0     90.3      90.3   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477405
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     20.1     32.4       19  2.76e-06        0     3.78        94   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     19.9     32.5     18.6  2.76e-06        0    0.414      94.5 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     19.9     32.5     18.6  2.76e-06        0        0      94.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     19.8     32.6     18.2  2.76e-06        0    0.414      94.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     19.5     35.1     15.4  2.76e-06        0     3.78      98.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -116      300     -500  2.76e-06        0      595       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 56
Energy Deposited == 0
No. of Photons Absorbed == 30
No. of Photons Reflected == 29
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 73
Photon Angle == 0.7059551846477405
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     63.1    -12.6      100  2.76e-06        0        0         0   physWorld initStep
    1     26.9    -12.6     37.3  2.76e-06        0     72.4      72.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5276034080382566
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.9    -12.5     35.5  2.76e-06        0     2.05      74.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     21.7    -13.3       28  2.76e-06        0     8.66      83.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    0.222    -17.2      -10  2.76e-06 2.76e-06     43.8       127    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 57
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 30
No. of Photons Reflected == 29
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 74
Photon Angle == 0.5276034080382566
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     55.5    -33.8      100  2.76e-06        0        0         0   physWorld initStep
    1     15.7    -33.8     31.1  2.76e-06        0     79.5      79.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5168874957289358
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     14.5    -33.5       29  2.76e-06        0     2.45        82 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 58
Energy Deposited == 0
No. of Photons Absorbed == 31
No. of Photons Reflected == 29
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 75
Photon Angle == 0.5168874957289358
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     61.7     23.4      100  2.76e-06        0        0         0   physWorld initStep
    1     23.9     23.4     34.5  2.76e-06        0     75.6      75.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5270096023850535
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.8     23.3     32.6  2.76e-06        0     2.18      77.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     20.2     24.3       28  2.76e-06        0     5.43      83.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     3.85     30.5   -0.376  2.76e-06        0     33.3       117 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     3.85     30.5   -0.376  2.76e-06        0        0       117 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -24.6    -5.42    -8.35  2.76e-06        0     46.5       163 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -24.6    -5.42    -8.35  2.76e-06        0        0       163 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     5.44      -34       28  2.76e-06        0     55.1       218 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     6.79    -35.2     29.6  2.76e-06        0     2.48       221   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     7.64    -36.5     31.1  2.76e-06        0     2.08       223   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      309     -430      500  2.76e-06        0      682       905  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 59
Energy Deposited == 0
No. of Photons Absorbed == 31
No. of Photons Reflected == 31
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 78
Photon Angle == 0.5270096023850535
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     68.4     13.8      100  2.76e-06        0        0         0   physWorld initStep
    1     30.5     13.8     34.5  2.76e-06        0     75.7      75.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5384997138988505
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     29.5     13.7     32.7  2.76e-06        0     2.07      77.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3       27     14.2       28  2.76e-06        0     5.33      83.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     7.18     18.5      -10  2.76e-06 2.76e-06     43.1       126    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 60
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 31
No. of Photons Reflected == 31
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 79
Photon Angle == 0.5384997138988505
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     34.5      -25      100  2.76e-06        0        0         0   physWorld initStep
    1  -0.0716      -25     40.2  2.76e-06        0     69.1      69.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.461157351476043
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -1.15    -24.8       38  2.76e-06        0     2.45      71.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 61
Energy Deposited == 0
No. of Photons Absorbed == 32
No. of Photons Reflected == 31
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 80
Photon Angle == 0.461157351476043
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     33.5     19.4      100  2.76e-06        0        0         0   physWorld initStep
    1    0.395     19.4     42.7  2.76e-06        0     66.1      66.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4596387557960862
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -0.64     19.2     40.6  2.76e-06        0     2.35      68.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 62
Energy Deposited == 0
No. of Photons Absorbed == 33
No. of Photons Reflected == 31
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 81
Photon Angle == 0.4596387557960862
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     48.7     34.4      100  2.76e-06        0        0         0   physWorld initStep
    1     9.71     34.4     32.5  2.76e-06        0     77.9      77.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5000324228255373
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     8.53     34.2     30.3  2.76e-06        0     2.53      80.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     8.53     34.2     30.3  2.76e-06        0        0      80.5   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4        8     36.6     30.9  2.76e-06        0     2.53        83   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -120      500      109  2.76e-06        0      487       570  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 63
Energy Deposited == 0
No. of Photons Absorbed == 33
No. of Photons Reflected == 32
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 82
Photon Angle == 0.5000324228255373
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     71.7     27.9      100  2.76e-06        0        0         0   physWorld initStep
    1     28.9     27.9     25.8  2.76e-06        0     85.7      85.7   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477401
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.7     27.3     23.1  2.76e-06        0     3.52      89.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     26.5     27.3     22.9  2.76e-06        0    0.294      89.5 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     26.5     27.3     22.9  2.76e-06        0        0      89.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.5     27.4     22.6  2.76e-06        0    0.294      89.8   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     27.1     29.6       20  2.76e-06        0     3.52      93.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     18.4      330     -500  2.76e-06        0      600       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 64
Energy Deposited == 0
No. of Photons Absorbed == 33
No. of Photons Reflected == 33
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 83
Photon Angle == 0.7059551846477401
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     66.1     18.1      100  2.76e-06        0        0         0   physWorld initStep
    1     28.2     18.1     34.5  2.76e-06        0     75.7      75.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.534704187095171
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     27.1       18     32.6  2.76e-06        0     2.11      77.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 65
Energy Deposited == 0
No. of Photons Absorbed == 34
No. of Photons Reflected == 33
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 84
Photon Angle == 0.534704187095171
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       29     23.3      100  2.76e-06        0        0         0   physWorld initStep
    1    -5.24     23.3     40.7  2.76e-06        0     68.5      68.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4437788203210138
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -6.32     23.1     38.4  2.76e-06        0     2.55        71 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 66
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 33
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 85
Photon Angle == 0.4437788203210138
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     60.8       26      100  2.76e-06        0        0         0   physWorld initStep
    1     22.5       26     33.7  2.76e-06        0     76.5      76.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5257861785451956
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     21.4     25.8     31.8  2.76e-06        0     2.23      78.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     19.2     26.8       28  2.76e-06        0     4.54      83.3 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     4.87     33.1     3.52  2.76e-06        0     29.1       112 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     4.87     33.1     3.52  2.76e-06        0        0       112 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -27.6    -5.48    -4.13  2.76e-06        0       51       163 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -27.6    -5.48    -4.13  2.76e-06        0        0       163 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8    -3.04    -30.6       28  2.76e-06        0     47.6       211 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9   -0.152    -33.6     31.8  2.76e-06        0      5.6       217   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    0.563    -34.9     33.3  2.76e-06        0     2.12       219   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      249     -413      500  2.76e-06        0      650       869  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 67
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 35
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 88
Photon Angle == 0.5257861785451956
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     64.6      -37      100  2.76e-06        0        0         0   physWorld initStep
    1     15.7      -37     15.4  2.76e-06        0     97.7      97.7   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477405
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     13.4    -35.7     12.3  2.76e-06        0     4.01       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       13    -35.8     11.6  2.76e-06        0    0.821       103 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4       13    -35.8     11.6  2.76e-06        0        0       103   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     12.7      -36     10.9  2.76e-06        0    0.821       103   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     12.1    -37.5     8.95  2.76e-06        0     2.55       106   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -195     -405     -500  2.76e-06        0      661       767  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 68
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 36
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 89
Photon Angle == 0.7059551846477405
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     75.7     24.1      100  2.76e-06        0        0         0   physWorld initStep
    1     32.1     24.1     24.6  2.76e-06        0       87        87   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477401
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       30     23.6       22  2.76e-06        0     3.39      90.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     29.9     23.6     21.8  2.76e-06        0    0.258      90.7 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     29.9     23.6     21.8  2.76e-06        0        0      90.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     29.9     23.7     21.6  2.76e-06        0    0.258      90.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     30.9     25.7       19  2.76e-06        0     3.39      94.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      100      317     -500  2.76e-06        0      599       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 69
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 37
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 90
Photon Angle == 0.7059551846477401
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     25.7      -18      100  2.76e-06        0        0         0   physWorld initStep
    1    -7.34      -18     42.7  2.76e-06        0     66.2      66.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4345555670497561
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -8.39    -17.9     40.4  2.76e-06        0     2.51      68.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 70
Energy Deposited == 0
No. of Photons Absorbed == 36
No. of Photons Reflected == 37
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 91
Photon Angle == 0.4345555670497561
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     59.1     32.6      100  2.76e-06        0        0         0   physWorld initStep
    1       19     32.6     30.6  2.76e-06        0     80.2      80.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5250059777249856
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     17.8     32.4     28.5  2.76e-06        0      2.4      82.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     17.5     32.6       28  2.76e-06        0    0.614      83.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4       13     35.8     20.5  2.76e-06        0     9.34      92.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     12.9     35.9     20.4  2.76e-06        0    0.148      92.7   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     12.7     38.1       19  2.76e-06        0     2.61      95.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -86.4      500     -335  2.76e-06        0      591       686  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 71
Energy Deposited == 0
No. of Photons Absorbed == 36
No. of Photons Reflected == 37
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 92
Photon Angle == 0.5250059777249856
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       68     19.5      100  2.76e-06        0        0         0   physWorld initStep
    1     29.3     19.5       33  2.76e-06        0     77.3      77.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5392578873855447
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     28.3     19.4     31.2  2.76e-06        0     2.13      79.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     28.3     19.4     31.2  2.76e-06        0        0      79.5   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     29.4     20.8     32.3  2.76e-06        0     2.13      81.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      385      500      372  2.76e-06        0      687       769  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 72
Energy Deposited == 0
No. of Photons Absorbed == 36
No. of Photons Reflected == 38
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 93
Photon Angle == 0.5392578873855447
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     84.6     17.3      100  2.76e-06        0        0         0   physWorld initStep
    1     36.2     17.3     16.3  2.76e-06        0     96.7      96.7   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477401
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.2       17     13.8  2.76e-06        0     3.23      99.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     34.1       17     13.6  2.76e-06        0    0.224       100 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     34.1       17     13.6  2.76e-06        0        0       100   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     34.1     17.1     13.4  2.76e-06        0    0.224       100   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     35.6     18.5       11  2.76e-06        0     3.23       104   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      213      254     -500  2.76e-06        0      590       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 73
Energy Deposited == 0
No. of Photons Absorbed == 36
No. of Photons Reflected == 39
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 94
Photon Angle == 0.7059551846477401
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     80.3    -20.7      100  2.76e-06        0        0         0   physWorld initStep
    1     34.4    -20.7     20.5  2.76e-06        0     91.8      91.8   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477405
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.3    -20.3       18  2.76e-06        0      3.3      95.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     32.2    -20.3     17.8  2.76e-06        0    0.238      95.3 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     32.2    -20.3     17.8  2.76e-06        0        0      95.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     32.2    -20.5     17.6  2.76e-06        0    0.238      95.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     33.5    -22.2     15.1  2.76e-06        0      3.3      98.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      161     -291     -500  2.76e-06        0      595       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 74
Energy Deposited == 0
No. of Photons Absorbed == 36
No. of Photons Reflected == 40
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 95
Photon Angle == 0.7059551846477405
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     63.1     17.3      100  2.76e-06        0        0         0   physWorld initStep
    1     26.2     17.3     36.1  2.76e-06        0     73.8      73.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5282960785613477
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     25.2     17.2     34.3  2.76e-06        0     2.09      75.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 75
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 40
No. of Photons Transmitted == 19
No. of Photons Detected == 0
Total no. of Photons == 96
Photon Angle == 0.5282960785613477
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     43.3     26.7      100  2.76e-06        0        0         0   physWorld initStep
    1     7.84     26.7     38.5  2.76e-06        0       71        71   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4854439575794145
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     6.76     26.5     36.4  2.76e-06        0     2.35      73.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3  -0.0755     29.4       28  2.76e-06        0     11.2      84.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -14.1     35.4     10.8  2.76e-06        0       23       108   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -14.1     35.4     10.7  2.76e-06        0    0.133       108   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -15.4     36.8     9.64  2.76e-06        0     2.14       110   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -480      500     -345  2.76e-06        0      746       856  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 76
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 40
No. of Photons Transmitted == 20
No. of Photons Detected == 0
Total no. of Photons == 97
Photon Angle == 0.4854439575794145
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     60.9     1.75      100  2.76e-06        0        0         0   physWorld initStep
    1       26     1.75     39.6  2.76e-06        0     69.8      69.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.522282592091416
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       25     1.74     37.8  2.76e-06        0        2      71.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3       25     1.74     37.8  2.76e-06        0        0      71.8   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     25.9     1.87     39.6  2.76e-06        0        2      73.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      278     37.8      500  2.76e-06        0      526       600  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 77
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 41
No. of Photons Transmitted == 20
No. of Photons Detected == 0
Total no. of Photons == 98
Photon Angle == 0.522282592091416
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     22.6    -11.7      100  2.76e-06        0        0         0   physWorld initStep
    1    -9.67    -11.7     44.2  2.76e-06        0     64.5      64.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4248959640402599
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -10.7    -11.6     41.9  2.76e-06        0     2.51        67 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -30.3    -15.1       28  2.76e-06        0     24.2      91.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -34.6    -15.9     24.9  2.76e-06        0     5.37      96.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -34.7    -15.9     24.9  2.76e-06        0    0.112      96.7   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -36.6    -16.5     24.1  2.76e-06        0     2.18      98.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500     -140     -203  2.76e-06        0      530       629  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 78
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 41
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 99
Photon Angle == 0.4248959640402599
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     48.8     4.01      100  2.76e-06        0        0         0   physWorld initStep
    1     16.2     4.01     43.7  2.76e-06        0       65        65   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4977610536884365
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     15.3     3.99     41.9  2.76e-06        0     2.04      67.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     15.3     3.99     41.9  2.76e-06        0        0      67.1   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     15.5     4.28     43.9  2.76e-06        0     2.04      69.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     53.8     74.8      500  2.76e-06        0      463       532  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 79
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 42
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 100
Photon Angle == 0.4977610536884365
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     28.6    -10.2      100  2.76e-06        0        0         0   physWorld initStep
    1    -2.99    -10.2     45.3  2.76e-06        0     63.1      63.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4468791109702992
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -3.99    -10.2     43.2  2.76e-06        0     2.33      65.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3    -3.99    -10.2     43.2  2.76e-06        0        0      65.5   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     -5.3    -10.9       45  2.76e-06        0     2.33      67.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -406     -217      500  2.76e-06        0      641       708  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 80
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 43
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 101
Photon Angle == 0.4468791109702992
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     33.1    -6.07      100  2.76e-06        0        0         0   physWorld initStep
    1     1.96    -6.07       46  2.76e-06        0     62.3      62.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4607727033100439
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    0.973    -6.04       44  2.76e-06        0     2.21      64.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 81
Energy Deposited == 0
No. of Photons Absorbed == 38
No. of Photons Reflected == 43
No. of Photons Transmitted == 21
No. of Photons Detected == 0
Total no. of Photons == 102
Photon Angle == 0.4607727033100439
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     50.7     17.5      100  2.76e-06        0        0         0   physWorld initStep
    1     16.5     17.5     40.7  2.76e-06        0     68.5      68.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5023545668414706
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     15.4     17.4     38.8  2.76e-06        0     2.12      70.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     8.14     19.1       28  2.76e-06        0     13.2      83.8 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -13.8     24.3    -4.34  2.76e-06        0     39.4       123 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -13.8     24.3    -4.34  2.76e-06        0        0       123 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -9.36    -29.9    0.445  2.76e-06        0     54.6       178 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -9.36    -29.9    0.445  2.76e-06        0        0       178 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     3.69    -26.6       28  2.76e-06        0     30.7       209 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     7.88    -25.5     36.9  2.76e-06        0     9.86       218   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     8.63    -25.8     38.9  2.76e-06        0     2.19       221   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      189    -62.2      500  2.76e-06        0      496       717  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 82
Energy Deposited == 0
No. of Photons Absorbed == 38
No. of Photons Reflected == 45
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 105
Photon Angle == 0.5023545668414706
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     65.2     25.3      100  2.76e-06        0        0         0   physWorld initStep
    1       26     25.3       32  2.76e-06        0     78.5      78.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5353791929740406
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.9     25.2     30.1  2.76e-06        0     2.22      80.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     24.9     25.2     30.1  2.76e-06        0        0      80.7   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     25.7       27     31.1  2.76e-06        0     2.22      82.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      217      500      243  2.76e-06        0      552       635  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 83
Energy Deposited == 0
No. of Photons Absorbed == 38
No. of Photons Reflected == 46
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 106
Photon Angle == 0.5353791929740406
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     64.9     36.8      100  2.76e-06        0        0         0   physWorld initStep
    1       16     36.8     15.3  2.76e-06        0     97.8      97.8   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477405
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     13.7     35.6     12.3  2.76e-06        0        4       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    3     13.7     35.6     12.3  2.76e-06        0       -0       102   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     12.9     37.7     9.62  2.76e-06        0     3.47       105   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -182      412     -500  2.76e-06        0      662       767  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 84
Energy Deposited == 0
No. of Photons Absorbed == 38
No. of Photons Reflected == 47
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 107
Photon Angle == 0.7059551846477405
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     89.8     8.87      100  2.76e-06        0        0         0   physWorld initStep
    1     39.2     8.87     12.3  2.76e-06        0      101       101   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477405
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     36.7     8.69     9.42  2.76e-06        0     3.75       105   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    3     36.7     8.69     9.42  2.76e-06        0        0       105   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     27.4     8.43    -6.33  2.76e-06        0     18.3       123   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    5     27.4     8.43    -6.33  2.76e-06        0        0       123   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     24.2     8.14      -10  2.76e-06 2.76e-06     4.87       128    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 85
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 38
No. of Photons Reflected == 49
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 109
Photon Angle == 0.7059551846477405
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     67.4     27.4      100  2.76e-06        0        0         0   physWorld initStep
    1     26.9     27.4     29.9  2.76e-06        0     80.9      80.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5412845840163758
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     25.8     27.3       28  2.76e-06        0     2.22      83.2 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3    -16.7     21.3    -5.71  2.76e-06        0     54.5       138 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    4    -16.7     21.3    -5.71  2.76e-06        0        0       138 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5    -21.1    -24.4     1.72  2.76e-06        0     46.5       184 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    6    -21.1    -24.4     1.72  2.76e-06        0        0       184 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7    -4.52    -33.5       28  2.76e-06        0     32.4       217 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    8    -2.69    -34.5     30.9  2.76e-06        0     3.58       220   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9    -1.99    -35.5     32.7  2.76e-06        0      2.2       222   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10      202     -271      500  2.76e-06        0      561       784  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 86
Energy Deposited == 0
No. of Photons Absorbed == 38
No. of Photons Reflected == 51
No. of Photons Transmitted == 22
No. of Photons Detected == 0
Total no. of Photons == 111
Photon Angle == 0.5412845840163758
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     31.6     3.47      100  2.76e-06        0        0         0   physWorld initStep
    1     0.63     3.47     46.3  2.76e-06        0       62        62   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4567976882485651
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2   -0.353     3.45     44.3  2.76e-06        0     2.23      64.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -15.3      4.1       28  2.76e-06        0     22.1      86.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -35.2     4.96     6.44  2.76e-06        0     29.3       116 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -35.2     4.96     6.44  2.76e-06        0        0       116 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     15.3    -5.86       28  2.76e-06        0       56       172 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    7     29.5     -8.9       34  2.76e-06        0     15.7       187   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     31.2    -9.31     35.2  2.76e-06        0     2.12       190   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      500     -118      324  2.76e-06        0      561       751  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 87
Energy Deposited == 0
No. of Photons Absorbed == 38
No. of Photons Reflected == 52
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 113
Photon Angle == 0.4567976882485651
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     89.2     5.11      100  2.76e-06        0        0         0   physWorld initStep
    1     39.8     5.11     14.5  2.76e-06        0     98.7      98.7   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477401
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.8     5.03     12.2  2.76e-06        0     3.09       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.7     5.03       12  2.76e-06        0    0.202       102 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     37.7     5.03       12  2.76e-06        0        0       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     37.8     5.06     11.8  2.76e-06        0    0.202       102   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     39.6     5.45      9.7  2.76e-06        0     2.77       105   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      432      102     -500  2.76e-06        0      651       756  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 88
Energy Deposited == 0
No. of Photons Absorbed == 38
No. of Photons Reflected == 53
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 114
Photon Angle == 0.7059551846477401
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     59.8    -26.3      100  2.76e-06        0        0         0   physWorld initStep
    1     21.6    -26.3       34  2.76e-06        0     76.2      76.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5236181928235322
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     20.5    -26.2     32.1  2.76e-06        0     2.23      78.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 89
Energy Deposited == 0
No. of Photons Absorbed == 39
No. of Photons Reflected == 53
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 115
Photon Angle == 0.5236181928235322
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     73.3    -12.7      100  2.76e-06        0        0         0   physWorld initStep
    1       34    -12.7       32  2.76e-06        0     78.5      78.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5486761878833222
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.9    -12.7     30.2  2.76e-06        0     2.08      80.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     32.9    -12.7     30.2  2.76e-06        0        0      80.6   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     34.4    -13.6     31.3  2.76e-06        0     2.08      82.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      500     -316      354  2.76e-06        0      642       725  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 90
Energy Deposited == 0
No. of Photons Absorbed == 39
No. of Photons Reflected == 54
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 116
Photon Angle == 0.5486761878833222
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       68    -34.2      100  2.76e-06        0        0         0   physWorld initStep
    1     21.1    -34.2     18.7  2.76e-06        0     93.8      93.8   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.7059551846477401
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     18.8    -33.2     15.8  2.76e-06        0     3.82      97.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     18.6    -33.2     15.4  2.76e-06        0    0.451      98.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     18.6    -33.2     15.4  2.76e-06        0        0      98.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     18.5    -33.4     15.1  2.76e-06        0    0.451      98.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     18.1    -35.8     12.1  2.76e-06        0     3.82       102   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -136     -288     -500  2.76e-06        0      591       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 91
Energy Deposited == 0
No. of Photons Absorbed == 39
No. of Photons Reflected == 55
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 117
Photon Angle == 0.7059551846477401
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       48    -24.6      100  2.76e-06        0        0         0   physWorld initStep
    1     12.6    -24.6     38.6  2.76e-06        0     70.9      70.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4967854123663527
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     11.5    -24.4     36.7  2.76e-06        0     2.25      73.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 92
Energy Deposited == 0
No. of Photons Absorbed == 40
No. of Photons Reflected == 55
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 118
Photon Angle == 0.4967854123663527
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     73.1     14.8      100  2.76e-06        0        0         0   physWorld initStep
    1     33.6     14.8     31.6  2.76e-06        0       79        79   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5488233877964008
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     32.5     14.7     29.8  2.76e-06        0      2.1      81.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 93
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 55
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 119
Photon Angle == 0.5488233877964008
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     40.1     5.79      100  2.76e-06        0        0         0   physWorld initStep
    1     8.54     5.79     45.4  2.76e-06        0     63.1      63.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4784405482659442
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     7.57     5.76     43.5  2.76e-06        0     2.12      65.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 94
Energy Deposited == 0
No. of Photons Absorbed == 42
No. of Photons Reflected == 55
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 120
Photon Angle == 0.4784405482659442
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     68.9    -27.7      100  2.76e-06        0        0         0   physWorld initStep
    1     27.9    -27.7       29  2.76e-06        0       82        82   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5449021238604934
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     27.3    -27.6       28  2.76e-06        0     1.14      83.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     26.4    -27.5     26.6  2.76e-06        0     1.61      84.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     26.4    -27.5     26.6  2.76e-06        0        0      84.8   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.7      -30     22.5  2.76e-06        0     4.82      89.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     26.7      -30     22.5  2.76e-06        0        0      89.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     24.3    -29.4     18.4  2.76e-06        0     4.82      94.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8     24.3    -29.4     18.4  2.76e-06        0        0      94.4   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     24.3    -31.9     14.2  2.76e-06        0     4.82      99.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   10     24.3    -31.9     14.2  2.76e-06        0        0      99.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11     21.9    -31.2     10.1  2.76e-06        0     4.82       104   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   12     21.9    -31.2     10.1  2.76e-06        0       -0       104   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   13     21.9    -32.3     8.36  2.76e-06        0     2.06       106   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   14    -41.2     -307     -500  2.76e-06        0      581       687  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 95
Energy Deposited == 0
No. of Photons Absorbed == 42
No. of Photons Reflected == 60
No. of Photons Transmitted == 23
No. of Photons Detected == 0
Total no. of Photons == 125
Photon Angle == 0.5449021238604934
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     43.9      -27      100  2.76e-06        0        0         0   physWorld initStep
    1     8.23      -27     38.3  2.76e-06        0     71.3      71.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4867923952351654
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     7.15    -26.8     36.2  2.76e-06        0     2.35      73.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    0.569    -29.7       28  2.76e-06        0     10.9      84.5 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -13.3    -35.7     10.8  2.76e-06        0     22.9       107   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -13.4    -35.7     10.7  2.76e-06        0    0.134       108   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -14.6    -37.1     9.63  2.76e-06        0     2.14       110   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -464     -500     -341  2.76e-06        0      734       844  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 96
Energy Deposited == 0
No. of Photons Absorbed == 42
No. of Photons Reflected == 60
No. of Photons Transmitted == 24
No. of Photons Detected == 0
Total no. of Photons == 126
Photon Angle == 0.4867923952351654
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     58.6     10.1      100  2.76e-06        0        0         0   physWorld initStep
    1     23.8     10.1     39.7  2.76e-06        0     69.6      69.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5181375132577841
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     22.8       10     37.9  2.76e-06        0     2.03      71.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 97
Energy Deposited == 0
No. of Photons Absorbed == 43
No. of Photons Reflected == 60
No. of Photons Transmitted == 24
No. of Photons Detected == 0
Total no. of Photons == 127
Photon Angle == 0.5181375132577841
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     49.3     5.22      100  2.76e-06        0        0         0   physWorld initStep
    1     16.7     5.22     43.4  2.76e-06        0     65.3      65.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4990082938484619
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     15.7      5.2     41.6  2.76e-06        0     2.04      67.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     15.7      5.2     41.6  2.76e-06        0        0      67.4   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4       16     5.58     43.6  2.76e-06        0     2.04      69.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     62.5     98.5      500  2.76e-06        0      468       537  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 98
Energy Deposited == 0
No. of Photons Absorbed == 43
No. of Photons Reflected == 61
No. of Photons Transmitted == 24
No. of Photons Detected == 0
Total no. of Photons == 128
Photon Angle == 0.4990082938484619
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.5235987755982988
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     64.1     23.2      100  2.76e-06        0        0         0   physWorld initStep
    1     25.8     23.2     33.5  2.76e-06        0     76.8      76.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.5321510426609897
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     24.7       23     31.6  2.76e-06        0     2.18      78.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 99
Energy Deposited == 0
No. of Photons Absorbed == 44
No. of Photons Reflected == 61
No. of Photons Transmitted == 24
No. of Photons Detected == 0
Total no. of Photons == 129
Photon Angle == 0.5321510426609897
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
  User=0.22s Real=0.24s Sys=0.01s
FileName = run.mac
G4 kernel has come to Quit state.
================== Deleting memory pools ===================
Number of memory pools allocated: 9; of which, static: 0
Dynamic pools deleted: 9 / Total memory freed: 0.033 Mb
============================================================
RunManagerKernel is deleted. Good bye :)
Graphics systems deleted.
Visualization Manager deleting...
