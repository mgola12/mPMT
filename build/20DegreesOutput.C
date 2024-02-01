
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
THE VALUE OF ANGLE IN RADIANS == 0.349066
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
    0       20     4.06      100  2.76e-06        0        0         0   physWorld initStep
    1    0.454     4.06     46.2  2.76e-06        0     57.2      57.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3065748075106534
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -0.18     4.04     44.2  2.76e-06        0      2.1      59.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 0
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 0
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 1
Photon Angle == 0.3065748075106534
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
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
    0     65.3    -9.49      100  2.76e-06        0        0         0   physWorld initStep
    1       39    -9.49     27.8  2.76e-06        0     76.8      76.8   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.5993101613670144
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2       37    -9.26     24.9  2.76e-06        0     3.58      80.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     36.9    -9.27     24.6  2.76e-06        0    0.302      80.7 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     36.9    -9.27     24.6  2.76e-06        0        0      80.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5       37    -9.31     24.3  2.76e-06        0    0.302        81   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     38.9    -10.1     21.3  2.76e-06        0     3.58      84.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      206    -99.7     -500  2.76e-06        0      555       639  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 1
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 1
No. of Photons Transmitted == 0
No. of Photons Detected == 0
Total no. of Photons == 2
Photon Angle == 0.5993101613670144
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
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
    0       31     3.94      100  2.76e-06        0        0         0   physWorld initStep
    1       11     3.94     45.1  2.76e-06        0     58.4      58.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.332191863600972
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     10.3     3.92     43.2  2.76e-06        0     2.02      60.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     3.92     4.37       28  2.76e-06        0     16.5      76.9 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -12.1     5.49      -10  2.76e-06 2.76e-06     41.3       118    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 2
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 1
No. of Photons Reflected == 1
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 3
Photon Angle == 0.332191863600972
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
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
    0     54.8    -28.4      100  2.76e-06        0        0         0   physWorld initStep
    1     28.4    -28.4     27.5  2.76e-06        0     77.2      77.2   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.599310161367014
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     26.4    -27.5     24.3  2.76e-06        0     3.84        81   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     26.2    -27.6     23.9  2.76e-06        0    0.438      81.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     26.2    -27.6     23.9  2.76e-06        0        0      81.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     26.2    -27.7     23.5  2.76e-06        0    0.438      81.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       27    -29.7     20.3  2.76e-06        0     3.84      85.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     17.8     -219     -500  2.76e-06        0      554       639  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 3
Energy Deposited == 0
No. of Photons Absorbed == 1
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 4
Photon Angle == 0.599310161367014
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
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
    0     18.4    -19.9      100  2.76e-06        0        0         0   physWorld initStep
    1    -2.59    -19.9     42.5  2.76e-06        0     61.2      61.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3029600644519927
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -3.26    -19.8     40.3  2.76e-06        0     2.26      63.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 4
Energy Deposited == 0
No. of Photons Absorbed == 2
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 5
Photon Angle == 0.3029600644519927
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
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
    0     46.7     14.2      100  2.76e-06        0        0         0   physWorld initStep
    1     24.2     14.2     38.3  2.76e-06        0     65.6      65.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3682495084844906
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     23.5     14.1     36.4  2.76e-06        0     2.08      67.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 5
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 2
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 6
Photon Angle == 0.3682495084844906
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
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
    0     69.1    -13.6      100  2.76e-06        0        0         0   physWorld initStep
    1     37.8    -13.6     13.8  2.76e-06        0     91.7      91.7   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.599310161367014
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.8    -13.3     10.9  2.76e-06        0     3.61      95.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     35.7    -13.3     10.6  2.76e-06        0    0.313      95.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     35.7    -13.3     10.6  2.76e-06        0        0      95.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     35.7    -13.4     10.3  2.76e-06        0    0.313      95.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     36.7    -13.9     8.67  2.76e-06        0     1.93      97.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      295     -188     -500  2.76e-06        0      596       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 6
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 3
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 7
Photon Angle == 0.599310161367014
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
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
    0     68.2    -19.9      100  2.76e-06        0        0         0   physWorld initStep
    1     -150    -19.9     -500  2.76e-06        0      639       639  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.3490658503988655
TRACK ID == 1
THE CURRENT EVENTID IS == 7
Energy Deposited == 0
No. of Photons Absorbed == 3
No. of Photons Reflected == 3
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 7
Photon Angle == 0.3490658503988655
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
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
    0     56.3     -7.8      100  2.76e-06        0        0         0   physWorld initStep
    1     32.4     -7.8     34.6  2.76e-06        0     69.6      69.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3891453215776868
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     31.6    -7.76     32.6  2.76e-06        0      2.1      71.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 8
Energy Deposited == 0
No. of Photons Absorbed == 4
No. of Photons Reflected == 3
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 8
Photon Angle == 0.3891453215776868
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
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
    0     1.31    -1.84      100  2.76e-06        0        0         0   physWorld initStep
    1    -19.6    -1.84     42.6  2.76e-06        0     61.1      61.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2457119934081335
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -20.2    -1.83     40.2  2.76e-06        0     2.49      63.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 9
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 3
No. of Photons Transmitted == 1
No. of Photons Detected == 0
Total no. of Photons == 9
Photon Angle == 0.2457119934081335
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     16.5     20.8      100  2.76e-06        0        0         0   physWorld initStep
    1    -4.64     20.8     41.9  2.76e-06        0     61.8      61.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2977971674793634
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -5.31     20.6     39.7  2.76e-06        0     2.31      64.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -12.5     23.3       28  2.76e-06        0       14      78.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -24.4     27.8     8.43  2.76e-06        0     23.3       101 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -24.4     27.8     8.43  2.76e-06        0        0       101 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     7.54    -37.3     20.7  2.76e-06        0     73.5       175   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     7.58    -37.4     20.7  2.76e-06        0    0.103       175   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8      8.3    -39.3       21  2.76e-06        0     2.04       177   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      196     -500     83.6  2.76e-06        0      502       679  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 10
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 4
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 11
Photon Angle == 0.2977971674793634
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     9.48    -8.28      100  2.76e-06        0        0         0   physWorld initStep
    1    -10.7    -8.28     44.7  2.76e-06        0     58.9      58.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2765970620015796
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -11.3    -8.23     42.5  2.76e-06        0     2.29      61.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3    -11.3    -8.23     42.5  2.76e-06        0        0      61.2   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4    -12.8    -8.82     44.1  2.76e-06        0     2.29      63.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -500     -193      493  2.76e-06        0      688       751  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 11
Energy Deposited == 0
No. of Photons Absorbed == 5
No. of Photons Reflected == 5
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 12
Photon Angle == 0.2765970620015796
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     30.7     6.34      100  2.76e-06        0        0         0   physWorld initStep
    1     10.7     6.34     44.9  2.76e-06        0     58.6      58.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3317535388277646
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2       10     6.31       43  2.76e-06        0     2.03      60.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 12
Energy Deposited == 0
No. of Photons Absorbed == 6
No. of Photons Reflected == 5
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 13
Photon Angle == 0.3317535388277646
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     8.86     8.21      100  2.76e-06        0        0         0   physWorld initStep
    1    -11.3     8.21     44.5  2.76e-06        0       59        59   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2745260274177195
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2      -12     8.16     42.3  2.76e-06        0      2.3      61.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 13
Energy Deposited == 0
No. of Photons Absorbed == 7
No. of Photons Reflected == 5
No. of Photons Transmitted == 2
No. of Photons Detected == 0
Total no. of Photons == 14
Photon Angle == 0.2745260274177195
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     33.2     30.5      100  2.76e-06        0        0         0   physWorld initStep
    1     9.74     30.5     35.6  2.76e-06        0     68.5      68.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3444834821139597
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     8.97     30.3     33.4  2.76e-06        0     2.35      70.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     6.67     32.2       28  2.76e-06        0     6.14        77 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4   -0.802       38     10.4  2.76e-06        0       20        97   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5   -0.843     38.1     10.3  2.76e-06        0    0.142      97.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -1.33     39.6     9.26  2.76e-06        0     1.89        99   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -175      500     -336  2.76e-06        0      601       700  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 14
Energy Deposited == 0
No. of Photons Absorbed == 7
No. of Photons Reflected == 5
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 15
Photon Angle == 0.3444834821139597
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     33.5    -33.8      100  2.76e-06        0        0         0   physWorld initStep
    1     9.22    -33.8     33.2  2.76e-06        0     71.1      71.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.348093602485537
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     8.42    -33.5     30.9  2.76e-06        0     2.45      73.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 15
Energy Deposited == 0
No. of Photons Absorbed == 8
No. of Photons Reflected == 5
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 16
Photon Angle == 0.348093602485537
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     73.2     1.04      100  2.76e-06        0        0         0   physWorld initStep
    1     -145     1.04     -500  2.76e-06        0      639       639  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.3490658503988655
TRACK ID == 1
THE CURRENT EVENTID IS == 16
Energy Deposited == 0
No. of Photons Absorbed == 8
No. of Photons Reflected == 5
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 16
Photon Angle == 0.3490658503988655
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     30.9    -25.7      100  2.76e-06        0        0         0   physWorld initStep
    1     8.67    -25.7     38.9  2.76e-06        0       65        65   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3361750018605068
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     7.95    -25.5     36.8  2.76e-06        0     2.24      67.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     7.95    -25.5     36.8  2.76e-06        0        0      67.2   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     7.84    -27.4     38.1  2.76e-06        0     2.24      69.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -34.3     -500      322  2.76e-06        0      553       622  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 17
Energy Deposited == 0
No. of Photons Absorbed == 8
No. of Photons Reflected == 6
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 17
Photon Angle == 0.3361750018605068
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     55.9    -2.74      100  2.76e-06        0        0         0   physWorld initStep
    1     32.3    -2.74     35.3  2.76e-06        0     68.8      68.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3874737178834842
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     31.5    -2.72     33.4  2.76e-06        0     2.08      70.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 18
Energy Deposited == 0
No. of Photons Absorbed == 9
No. of Photons Reflected == 6
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 18
Photon Angle == 0.3874737178834842
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     13.7     25.9      100  2.76e-06        0        0         0   physWorld initStep
    1    -8.53     25.9     38.9  2.76e-06        0     65.1      65.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2898361709300898
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -9.22     25.7     36.5  2.76e-06        0     2.48      67.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 19
Energy Deposited == 0
No. of Photons Absorbed == 10
No. of Photons Reflected == 6
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 19
Photon Angle == 0.2898361709300898
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     36.3     27.7      100  2.76e-06        0        0         0   physWorld initStep
    1     13.2     27.7     36.6  2.76e-06        0     67.5      67.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3502243433618544
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     12.5     27.5     34.5  2.76e-06        0     2.27      69.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 20
Energy Deposited == 0
No. of Photons Absorbed == 11
No. of Photons Reflected == 6
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 20
Photon Angle == 0.3502243433618544
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       17     2.67      100  2.76e-06        0        0         0   physWorld initStep
    1    -2.58     2.67     46.3  2.76e-06        0     57.2      57.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2986860649576979
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -3.21     2.66     44.2  2.76e-06        0     2.13      59.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 21
Energy Deposited == 0
No. of Photons Absorbed == 12
No. of Photons Reflected == 6
No. of Photons Transmitted == 3
No. of Photons Detected == 0
Total no. of Photons == 21
Photon Angle == 0.2986860649576979
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     30.1    -14.1      100  2.76e-06        0        0         0   physWorld initStep
    1     9.59    -14.1     43.6  2.76e-06        0       60        60   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3312097231437372
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     8.91      -14     41.6  2.76e-06        0     2.08      62.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     3.01    -15.5       28  2.76e-06        0     14.9        77 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -13.5    -19.8      -10  2.76e-06 2.76e-06     41.6       119    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 22
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 12
No. of Photons Reflected == 6
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 22
Photon Angle == 0.3312097231437372
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       71    -9.38      100  2.76e-06        0        0         0   physWorld initStep
    1       39    -9.38     12.3  2.76e-06        0     93.3      93.3   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.599310161367014
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.9    -7.69      -10  2.76e-06 2.76e-06       27       120    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 23
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 12
No. of Photons Reflected == 6
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 22
Photon Angle == 0.599310161367014
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       64    -6.88      100  2.76e-06        0        0         0   physWorld initStep
    1     38.3    -6.88     29.4  2.76e-06        0     75.1      75.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4095949232311922
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.7    -6.85       28  2.76e-06        0     1.54      76.7   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     37.5    -6.85     27.7  2.76e-06        0    0.329        77   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     37.5    -6.85     27.7  2.76e-06        0       -0        77   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     39.4    -7.48     23.1  2.76e-06        0     5.07      82.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     39.4    -7.48     23.1  2.76e-06        0        0      82.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     37.4    -7.36     18.4  2.76e-06        0     5.07      87.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8     37.4    -7.36     18.4  2.76e-06        0 7.55e-15      87.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     39.3    -8.02     13.8  2.76e-06        0     5.07      92.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   10     39.3    -8.02     13.8  2.76e-06        0        0      92.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11     35.1    -7.72     4.07  2.76e-06        0     10.6       103   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   12     35.1    -7.72     4.07  2.76e-06        0        0       103   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   13     29.3    -6.91    -1.38  2.76e-06        0        8       111   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   14     29.3    -6.91    -1.38  2.76e-06        0        0       111   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   15     26.2    -6.72    -8.71  2.76e-06        0        8       119   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   16     26.2    -6.72    -8.71  2.76e-06        0        0       119   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   17     24.8    -6.52      -10  2.76e-06 2.76e-06     1.89       121    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 24
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 12
No. of Photons Reflected == 13
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 29
Photon Angle == 0.4095949232311922
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     56.7     13.2      100  2.76e-06        0        0         0   physWorld initStep
    1     32.4     13.2     33.2  2.76e-06        0       71        71   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3919137194216922
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     31.6     13.1     31.3  2.76e-06        0     2.14      73.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 25
Energy Deposited == 0
No. of Photons Absorbed == 13
No. of Photons Reflected == 13
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 30
Photon Angle == 0.3919137194216922
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     71.6    -7.13      100  2.76e-06        0        0         0   physWorld initStep
    1     39.5    -7.13     11.9  2.76e-06        0     93.8      93.8   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.599310161367014
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.6    -5.88      -10  2.76e-06 2.76e-06     26.5       120    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 26
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 13
No. of Photons Reflected == 13
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 30
Photon Angle == 0.599310161367014
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     27.7    -13.2      100  2.76e-06        0        0         0   physWorld initStep
    1     7.36    -13.2     44.2  2.76e-06        0     59.4      59.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.325477137098416
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2      6.7    -13.2     42.2  2.76e-06        0     2.09      61.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 27
Energy Deposited == 0
No. of Photons Absorbed == 14
No. of Photons Reflected == 13
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 31
Photon Angle == 0.325477137098416
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     57.6     2.54      100  2.76e-06        0        0         0   physWorld initStep
    1     33.7     2.54     34.3  2.76e-06        0       70        70   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3917047399234215
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.9     2.52     32.3  2.76e-06        0      2.1      72.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     32.9     2.52     32.3  2.76e-06        0        0      72.1   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     34.6     2.71     33.4  2.76e-06        0      2.1      74.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      500     52.6      297  2.76e-06        0      537       611  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 28
Energy Deposited == 0
No. of Photons Absorbed == 14
No. of Photons Reflected == 14
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 32
Photon Angle == 0.3917047399234215
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       19    -4.98      100  2.76e-06        0        0         0   physWorld initStep
    1   -0.639    -4.98     46.2  2.76e-06        0     57.3      57.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.303885295846968
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -1.27    -4.96     44.1  2.76e-06        0     2.12      59.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 29
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 14
No. of Photons Transmitted == 4
No. of Photons Detected == 0
Total no. of Photons == 33
Photon Angle == 0.303885295846968
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     15.1     27.8      100  2.76e-06        0        0         0   physWorld initStep
    1    -7.56     27.8     37.9  2.76e-06        0     66.1      66.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2943279933652478
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -8.26     27.6     35.5  2.76e-06        0     2.51      68.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -13.8       31       28  2.76e-06        0     9.89      78.5 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -18     33.5     22.4  2.76e-06        0     7.46        86   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -18.1     33.6     22.3  2.76e-06        0    0.127      86.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -19.5     35.1     21.1  2.76e-06        0     2.37      88.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -497      500     -432  2.76e-06        0      806       894  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 30
Energy Deposited == 0
No. of Photons Absorbed == 15
No. of Photons Reflected == 14
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 34
Photon Angle == 0.2943279933652478
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     18.3    -24.9      100  2.76e-06        0        0         0   physWorld initStep
    1    -3.54    -24.9       40  2.76e-06        0     63.8      63.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3034344516712277
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -4.23    -24.8     37.8  2.76e-06        0     2.36      66.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 31
Energy Deposited == 0
No. of Photons Absorbed == 16
No. of Photons Reflected == 14
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 35
Photon Angle == 0.3034344516712277
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     20.7     1.74      100  2.76e-06        0        0         0   physWorld initStep
    1     1.21     1.74     46.4  2.76e-06        0     57.1      57.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.308340740718454
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    0.579     1.73     44.4  2.76e-06        0     2.09      59.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 32
Energy Deposited == 0
No. of Photons Absorbed == 17
No. of Photons Reflected == 14
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 36
Photon Angle == 0.308340740718454
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     54.9    -23.5      100  2.76e-06        0        0         0   physWorld initStep
    1     29.6    -23.5     30.6  2.76e-06        0     73.9      73.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3935917861011382
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     28.7    -23.4     28.5  2.76e-06        0     2.27      76.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 33
Energy Deposited == 0
No. of Photons Absorbed == 18
No. of Photons Reflected == 14
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 37
Photon Angle == 0.3935917861011382
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     66.9    -7.04      100  2.76e-06        0        0         0   physWorld initStep
    1     39.5    -7.04     24.9  2.76e-06        0     79.9      79.9   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.599310161367014
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.5    -6.88     21.9  2.76e-06        0     3.56      83.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.4    -6.88     21.7  2.76e-06        0    0.298      83.8 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     37.4    -6.88     21.7  2.76e-06        0        0      83.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     37.5    -6.91     21.4  2.76e-06        0    0.298      84.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     39.4    -7.47     18.4  2.76e-06        0     3.56      87.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    7     39.4    -7.47     18.4  2.76e-06        0        0      87.7   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     37.4    -7.28     15.5  2.76e-06        0     3.56      91.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9     37.3    -7.28     15.2  2.76e-06        0    0.298      91.5 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   10     37.3    -7.28     15.2  2.76e-06        0        0      91.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11     37.4    -7.32     14.9  2.76e-06        0    0.298      91.8   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   12     39.4     -7.9       12  2.76e-06        0     3.56      95.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   13      213      -76     -500  2.76e-06        0      545       640  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 34
Energy Deposited == 0
No. of Photons Absorbed == 18
No. of Photons Reflected == 17
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 40
Photon Angle == 0.599310161367014
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     50.4    -31.1      100  2.76e-06        0        0         0   physWorld initStep
    1     24.4    -31.1     28.7  2.76e-06        0     75.9      75.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3893355339000668
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.1    -31.1       28  2.76e-06        0    0.746      76.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     22.6    -30.7     24.3  2.76e-06        0     4.01      80.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     22.6    -30.7     24.3  2.76e-06        0       -0      80.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     22.5    -33.3       18  2.76e-06        0     6.78      87.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     22.5    -33.3       18  2.76e-06        0        0      87.4   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7       20    -32.5     11.7  2.76e-06        0     6.78      94.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8       20    -32.5     11.7  2.76e-06        0       -0      94.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     19.8    -33.8     8.58  2.76e-06        0     3.42      97.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    -56.6     -192     -500  2.76e-06        0      538       636  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 35
Energy Deposited == 0
No. of Photons Absorbed == 18
No. of Photons Reflected == 20
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 43
Photon Angle == 0.3893355339000668
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     46.4    -25.8      100  2.76e-06        0        0         0   physWorld initStep
    1     22.4    -25.8     33.9  2.76e-06        0     70.3      70.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3735434852726485
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     21.6    -25.6     31.9  2.76e-06        0     2.24      72.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 36
Energy Deposited == 0
No. of Photons Absorbed == 19
No. of Photons Reflected == 20
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 44
Photon Angle == 0.3735434852726485
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     37.1    -12.3      100  2.76e-06        0        0         0   physWorld initStep
    1     16.1    -12.3     42.4  2.76e-06        0     61.3      61.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3464614732114826
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     15.4    -12.3     40.4  2.76e-06        0     2.05      63.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 37
Energy Deposited == 0
No. of Photons Absorbed == 20
No. of Photons Reflected == 20
No. of Photons Transmitted == 5
No. of Photons Detected == 0
Total no. of Photons == 45
Photon Angle == 0.3464614732114826
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     31.3     23.6      100  2.76e-06        0        0         0   physWorld initStep
    1     9.41     23.6     39.9  2.76e-06        0     63.9      63.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3362304035994637
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     8.69     23.4     37.9  2.76e-06        0      2.2      66.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     4.43     25.5       28  2.76e-06        0     10.9      77.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -7.06     31.2     1.43  2.76e-06        0     29.5       107 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -7.06     31.2     1.43  2.76e-06        0        0       107 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -14.2    -26.5    -1.35  2.76e-06        0     58.3       165 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -14.2    -26.5    -1.35  2.76e-06        0        0       165 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     2.45    -21.4       28  2.76e-06        0     34.1       199 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     9.05    -19.4     39.7  2.76e-06        0     13.6       213   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     9.89    -19.5     41.7  2.76e-06        0     2.16       215   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      219      -21      500  2.76e-06        0      504       718  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 38
Energy Deposited == 0
No. of Photons Absorbed == 20
No. of Photons Reflected == 22
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 48
Photon Angle == 0.3362304035994637
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     47.3     19.7      100  2.76e-06        0        0         0   physWorld initStep
    1     24.1     19.7     36.3  2.76e-06        0     67.8      67.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3719146904977815
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.4     19.6     34.3  2.76e-06        0     2.14      69.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     23.4     19.6     34.3  2.76e-06        0        0      69.9   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     24.4       21     35.5  2.76e-06        0     2.14      72.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      361      500      391  2.76e-06        0      685       757  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 39
Energy Deposited == 0
No. of Photons Absorbed == 20
No. of Photons Reflected == 23
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 49
Photon Angle == 0.3719146904977815
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     40.1    -32.2      100  2.76e-06        0        0         0   physWorld initStep
    1     15.6    -32.2     32.5  2.76e-06        0     71.8      71.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3633099364369001
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     14.7      -32     30.3  2.76e-06        0     2.38      74.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 40
Energy Deposited == 0
No. of Photons Absorbed == 21
No. of Photons Reflected == 23
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 50
Photon Angle == 0.3633099364369001
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       25    -4.99      100  2.76e-06        0        0         0   physWorld initStep
    1     5.29    -4.99     45.9  2.76e-06        0     57.6      57.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3186126484563316
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     4.65    -4.97     43.9  2.76e-06        0     2.06      59.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 41
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 23
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 51
Photon Angle == 0.3186126484563316
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     64.1    -23.3      100  2.76e-06        0        0         0   physWorld initStep
    1     32.7    -23.3     13.8  2.76e-06        0     91.7      91.7   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.599310161367014
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     30.7    -22.6     10.7  2.76e-06        0     3.74      95.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     30.6    -22.7     10.4  2.76e-06        0    0.369      95.8 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     30.6    -22.7     10.4  2.76e-06        0        0      95.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     30.6    -22.8       10  2.76e-06        0    0.369      96.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     31.2    -23.6     8.53  2.76e-06        0     1.81        98   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      188     -295     -500  2.76e-06        0      597       695  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 42
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 24
No. of Photons Transmitted == 6
No. of Photons Detected == 0
Total no. of Photons == 52
Photon Angle == 0.599310161367014
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     27.6     1.78      100  2.76e-06        0        0         0   physWorld initStep
    1     7.85     1.78     45.8  2.76e-06        0     57.7      57.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3245207567440636
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2      7.2     1.77     43.9  2.76e-06        0     2.03      59.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3   0.0656     1.99       28  2.76e-06        0     17.4      77.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -17      2.5      -10  2.76e-06 2.76e-06     41.7       119    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 43
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 22
No. of Photons Reflected == 24
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 53
Photon Angle == 0.3245207567440636
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     59.4       22      100  2.76e-06        0        0         0   physWorld initStep
    1     33.3       22     28.2  2.76e-06        0     76.4      76.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4051659049863283
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.2       22       28  2.76e-06        0    0.267      76.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     31.3     21.7     23.6  2.76e-06        0     4.76      81.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     31.3     21.7     23.6  2.76e-06        0        0      81.4   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     32.4     23.7     18.5  2.76e-06        0     5.62        87   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     32.4     23.7     18.5  2.76e-06        0        0        87   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     30.2     23.2     13.3  2.76e-06        0     5.62      92.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8     30.2     23.2     13.3  2.76e-06        0 8.42e-15      92.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9       31     24.8     9.34  2.76e-06        0     4.31      96.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     78.1      193     -500  2.76e-06        0      539       636  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 44
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 27
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 56
Photon Angle == 0.4051659049863283
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       69    -13.3      100  2.76e-06        0        0         0   physWorld initStep
    1     37.9    -13.3     14.5  2.76e-06        0       91        91   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.599310161367014
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.9      -13     11.5  2.76e-06        0     3.61      94.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     35.8      -13     11.2  2.76e-06        0    0.312      94.9 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     35.8      -13     11.2  2.76e-06        0        0      94.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     35.8    -13.1     10.9  2.76e-06        0    0.312      95.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6       37    -13.7        9  2.76e-06        0     2.34      97.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      297     -184     -500  2.76e-06        0      597       694  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 45
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 28
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 57
Photon Angle == 0.599310161367014
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     72.5    -7.83      100  2.76e-06        0        0         0   physWorld initStep
    1     -146    -7.83     -500  2.76e-06        0      639       639  OutOfWorld Transportation
THE INCIDENT ANGLE IS G 83:  0.3490658503988655
TRACK ID == 1
THE CURRENT EVENTID IS == 46
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 28
No. of Photons Transmitted == 7
No. of Photons Detected == 0
Total no. of Photons == 57
Photon Angle == 0.3490658503988655
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
FOUND THE Optical Photon!!!

THE ENERGY SET VALUE IS == 2.7552
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     14.2     16.7      100  2.76e-06        0        0         0   physWorld initStep
    1    -6.46     16.7     43.3  2.76e-06        0     60.3      60.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.290923706649648
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -7.11     16.6     41.1  2.76e-06        0     2.28      62.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -15.3     18.9       28  2.76e-06        0     15.6      78.3 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -28.3     22.6     7.35  2.76e-06        0     24.6       103 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -28.3     22.6     7.35  2.76e-06        0        0       103 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     17.3    -33.9     21.4  2.76e-06        0     73.9       177   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     17.4      -34     21.4  2.76e-06        0    0.102       177   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     18.6    -35.6     21.6  2.76e-06        0     2.03       179   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      353     -500      103  2.76e-06        0      578       757  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 47
Energy Deposited == 0
No. of Photons Absorbed == 22
No. of Photons Reflected == 29
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 59
Photon Angle == 0.290923706649648
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     14.9    -22.2      100  2.76e-06        0        0         0   physWorld initStep
    1    -6.59    -22.2     41.1  2.76e-06        0     62.7      62.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2931227004628369
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -7.26    -22.1     38.8  2.76e-06        0     2.37      65.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 48
Energy Deposited == 0
No. of Photons Absorbed == 23
No. of Photons Reflected == 29
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 60
Photon Angle == 0.2931227004628369
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0      8.3     23.6      100  2.76e-06        0        0         0   physWorld initStep
    1      -14     23.6     38.7  2.76e-06        0     65.2      65.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2711113267198275
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -14.7     23.5     36.3  2.76e-06        0     2.57      67.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 49
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 29
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 61
Photon Angle == 0.2711113267198275
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     70.2    0.291      100  2.76e-06        0        0         0   physWorld initStep
    1     40.1    0.291     17.4  2.76e-06        0     87.9      87.9   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.599310161367014
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     38.1    0.285     14.5  2.76e-06        0     3.55      91.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3       38    0.285     14.2  2.76e-06        0    0.292      91.8 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4       38    0.285     14.2  2.76e-06        0        0      91.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     38.1    0.286     13.9  2.76e-06        0    0.292      92.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     40.1    0.309       11  2.76e-06        0     3.55      95.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7      226     3.09     -500  2.76e-06        0      544       639  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 50
Energy Deposited == 0
No. of Photons Absorbed == 24
No. of Photons Reflected == 30
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 62
Photon Angle == 0.599310161367014
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     5.18     18.6      100  2.76e-06        0        0         0   physWorld initStep
    1    -16.6     18.6     40.2  2.76e-06        0     63.7      63.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2596872364369314
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -17.2     18.5     37.7  2.76e-06        0     2.55      66.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 51
Energy Deposited == 0
No. of Photons Absorbed == 25
No. of Photons Reflected == 30
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 63
Photon Angle == 0.2596872364369314
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     49.7     32.7      100  2.76e-06        0        0         0   physWorld initStep
    1     23.3     32.7     27.4  2.76e-06        0     77.2      77.2   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.599310161367014
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     21.3     31.6     24.2  2.76e-06        0     3.96      81.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     21.1     31.6     23.6  2.76e-06        0     0.57      81.8 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     21.1     31.6     23.6  2.76e-06        0        0      81.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5       21     31.8     23.1  2.76e-06        0     0.57      82.3   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6     21.3       34     19.8  2.76e-06        0     3.96      86.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7    -51.2      209     -500  2.76e-06        0      553       639  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 52
Energy Deposited == 0
No. of Photons Absorbed == 25
No. of Photons Reflected == 31
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 64
Photon Angle == 0.599310161367014
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     33.1    -26.7      100  2.76e-06        0        0         0   physWorld initStep
    1     10.5    -26.7     37.9  2.76e-06        0     66.1      66.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3420486831655301
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     9.79    -26.6     35.8  2.76e-06        0     2.25      68.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 53
Energy Deposited == 0
No. of Photons Absorbed == 26
No. of Photons Reflected == 31
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 65
Photon Angle == 0.3420486831655301
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     34.6     23.7      100  2.76e-06        0        0         0   physWorld initStep
    1     12.4     23.7     39.2  2.76e-06        0     64.7      64.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3440579730637747
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     11.7     23.5     37.1  2.76e-06        0     2.19      66.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 54
Energy Deposited == 0
No. of Photons Absorbed == 27
No. of Photons Reflected == 31
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 66
Photon Angle == 0.3440579730637747
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     11.5    0.969      100  2.76e-06        0        0         0   physWorld initStep
    1     -8.2    0.969     45.8  2.76e-06        0     57.7      57.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2832632937914079
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -8.82    0.963     43.6  2.76e-06        0     2.22      59.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 55
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 31
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 67
Photon Angle == 0.2832632937914079
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     57.5     8.13      100  2.76e-06        0        0         0   physWorld initStep
    1     33.4     8.13     33.7  2.76e-06        0     70.5      70.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3924346739488627
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.6     8.09     31.8  2.76e-06        0     2.12      72.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     32.6     8.09     31.8  2.76e-06        0        0      72.6   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     34.3     8.68     32.8  2.76e-06        0     2.12      74.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      500      171      284  2.76e-06        0      553       628  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 56
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 32
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 68
Photon Angle == 0.3924346739488627
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     28.8     22.3      100  2.76e-06        0        0         0   physWorld initStep
    1      7.3     22.3     40.9  2.76e-06        0     62.8      62.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3299012071090521
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2      6.6     22.1     38.9  2.76e-06        0     2.19        65 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3      6.6     22.1     38.9  2.76e-06        0        0        65   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     6.41     23.7     40.4  2.76e-06        0     2.19      67.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -64.4      500      434  2.76e-06        0      622       689  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 57
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 33
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 69
Photon Angle == 0.3299012071090521
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     15.2    -8.54      100  2.76e-06        0        0         0   physWorld initStep
    1    -4.66    -8.54     45.5  2.76e-06        0       58        58   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2937864197449622
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -5.29    -8.49     43.4  2.76e-06        0     2.18      60.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3    -5.29    -8.49     43.4  2.76e-06        0        0      60.2   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4    -6.34    -9.11     45.2  2.76e-06        0     2.18      62.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -306     -177      500  2.76e-06        0      570       632  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 58
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 34
No. of Photons Transmitted == 8
No. of Photons Detected == 0
Total no. of Photons == 70
Photon Angle == 0.2937864197449622
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     18.3    -21.8      100  2.76e-06        0        0         0   physWorld initStep
    1    -2.93    -21.8     41.6  2.76e-06        0     62.1      62.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3030640904180775
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     -3.6    -21.7     39.4  2.76e-06        0      2.3      64.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -10.3    -24.3       28  2.76e-06        0     13.5      77.9 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -22.1    -29.1      7.8  2.76e-06        0     23.9       102 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5    -22.1    -29.1      7.8  2.76e-06        0        0       102 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     3.81     37.9     18.1  2.76e-06        0     72.5       174   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     3.84       38     18.1  2.76e-06        0    0.103       174   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    8     4.38     39.9     18.3  2.76e-06        0     2.04       176   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    9      145      500     69.8  2.76e-06        0      484       660  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 59
Energy Deposited == 0
No. of Photons Absorbed == 28
No. of Photons Reflected == 35
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 72
Photon Angle == 0.3030640904180775
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     52.5     4.62      100  2.76e-06        0        0         0   physWorld initStep
    1     29.6     4.62     37.1  2.76e-06        0     66.9      66.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3794920223579075
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     28.8      4.6     35.2  2.76e-06        0     2.06        69 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 60
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 35
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 73
Photon Angle == 0.3794920223579075
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     20.2     0.76      100  2.76e-06        0        0         0   physWorld initStep
    1    0.713     0.76     46.4  2.76e-06        0       57        57   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3070638332004525
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2   0.0806    0.757     44.4  2.76e-06        0     2.09      59.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3   0.0806    0.757     44.4  2.76e-06        0        0      59.1   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4   -0.546    0.812     46.4  2.76e-06        0     2.09      61.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -164     14.3      500  2.76e-06        0      482       544  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 61
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 36
No. of Photons Transmitted == 9
No. of Photons Detected == 0
Total no. of Photons == 74
Photon Angle == 0.3070638332004525
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     40.4     23.4      100  2.76e-06        0        0         0   physWorld initStep
    1     17.7     23.4     37.6  2.76e-06        0     66.5      66.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3575312826515722
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     16.9     23.3     35.5  2.76e-06        0     2.18      68.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     14.3     24.8       28  2.76e-06        0     8.11      76.7 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     4.38     30.5     -0.3  2.76e-06        0     30.5       107 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     4.38     30.5     -0.3  2.76e-06        0        0       107 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6      -20    -13.6     -9.7  2.76e-06        0     51.3       159 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7      -20    -13.6     -9.7  2.76e-06        0        0       159 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     11.5    -18.6       28  2.76e-06        0     49.4       208 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9     18.7    -19.8     36.6  2.76e-06        0     11.2       219   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     19.8    -20.2     38.2  2.76e-06        0     2.07       221   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      352     -125      500  2.76e-06        0      578       799  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 62
Energy Deposited == 0
No. of Photons Absorbed == 29
No. of Photons Reflected == 38
No. of Photons Transmitted == 10
No. of Photons Detected == 0
Total no. of Photons == 77
Photon Angle == 0.3575312826515722
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       47     13.8      100  2.76e-06        0        0         0   physWorld initStep
    1     24.6     13.8     38.3  2.76e-06        0     65.7      65.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3688796029075943
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.8     13.7     36.4  2.76e-06        0     2.08      67.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     21.3     14.6       28  2.76e-06        0     8.78      76.5 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     9.84     18.6      -10  2.76e-06 2.76e-06     39.9       116    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 63
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 29
No. of Photons Reflected == 38
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 78
Photon Angle == 0.3688796029075943
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     13.1      -25      100  2.76e-06        0        0         0   physWorld initStep
    1    -8.96      -25     39.3  2.76e-06        0     64.6      64.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2879024620059036
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -9.63    -24.8     36.9  2.76e-06        0     2.47      67.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 64
Energy Deposited == 0
No. of Photons Absorbed == 30
No. of Photons Reflected == 38
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 79
Photon Angle == 0.2879024620059036
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     12.1     19.4      100  2.76e-06        0        0         0   physWorld initStep
    1    -9.03     19.4     41.9  2.76e-06        0     61.8      61.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2845570038168703
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -9.68     19.2     39.6  2.76e-06        0     2.37      64.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 65
Energy Deposited == 0
No. of Photons Absorbed == 31
No. of Photons Reflected == 38
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 80
Photon Angle == 0.2845570038168703
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     27.3     34.4      100  2.76e-06        0        0         0   physWorld initStep
    1     3.17     34.4     33.6  2.76e-06        0     70.7      70.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3325611468241556
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     2.38     34.2     31.2  2.76e-06        0     2.52      73.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     2.38     34.2     31.2  2.76e-06        0        0      73.2   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     1.79     36.6     31.7  2.76e-06        0     2.52      75.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -132      500     87.4  2.76e-06        0      486       561  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 66
Energy Deposited == 0
No. of Photons Absorbed == 31
No. of Photons Reflected == 39
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 81
Photon Angle == 0.3325611468241556
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     50.3     27.9      100  2.76e-06        0        0         0   physWorld initStep
    1     25.2     27.9     30.8  2.76e-06        0     73.7      73.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3855314194129127
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     24.3     27.7     28.6  2.76e-06        0     2.32        76 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     24.3     27.7     28.6  2.76e-06        0        0        76   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     25.3     29.7     29.2  2.76e-06        0     2.32      78.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      255      500      126  2.76e-06        0      532       611  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 67
Energy Deposited == 0
No. of Photons Absorbed == 31
No. of Photons Reflected == 40
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 82
Photon Angle == 0.3855314194129127
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     15.7     10.9      100  2.76e-06        0        0         0   physWorld initStep
    1    -4.26     10.9     45.1  2.76e-06        0     58.4      58.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.295343753231986
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -4.89     10.9       43  2.76e-06        0     2.19      60.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3    -4.89     10.9       43  2.76e-06        0        0      60.6   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4    -5.91     11.6     44.8  2.76e-06        0     2.19      62.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -307      232      500  2.76e-06        0      589       651  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 68
Energy Deposited == 0
No. of Photons Absorbed == 31
No. of Photons Reflected == 41
No. of Photons Transmitted == 11
No. of Photons Detected == 0
Total no. of Photons == 83
Photon Angle == 0.295343753231986
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     15.4    -27.8      100  2.76e-06        0        0         0   physWorld initStep
    1    -7.22    -27.8       38  2.76e-06        0       66        66   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2952639800137469
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -7.92    -27.6     35.6  2.76e-06        0      2.5      68.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -13.5    -30.9       28  2.76e-06        0     9.95      78.5 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -18    -33.5     21.8  2.76e-06        0     8.08      86.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      -18    -33.6     21.8  2.76e-06        0    0.127      86.7   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -19.4    -35.1     20.6  2.76e-06        0     2.38      89.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -495     -500     -439  2.76e-06        0      808       897  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 69
Energy Deposited == 0
No. of Photons Absorbed == 31
No. of Photons Reflected == 41
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 84
Photon Angle == 0.2952639800137469
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     34.4    -29.1      100  2.76e-06        0        0         0   physWorld initStep
    1     11.2    -29.1     36.3  2.76e-06        0     67.8      67.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3465108814615054
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     10.5    -28.9     34.1  2.76e-06        0      2.3      70.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     10.5    -28.9     34.1  2.76e-06        0        0      70.1   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     10.5      -31     35.1  2.76e-06        0      2.3      72.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     7.55     -500      222  2.76e-06        0      505       577  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 70
Energy Deposited == 0
No. of Photons Absorbed == 31
No. of Photons Reflected == 42
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 85
Photon Angle == 0.3465108814615054
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     26.6     23.7      100  2.76e-06        0        0         0   physWorld initStep
    1     4.98     23.7     40.5  2.76e-06        0     63.3      63.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3250802469718033
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     4.28     23.6     38.4  2.76e-06        0     2.23      65.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     4.28     23.6     38.4  2.76e-06        0        0      65.5   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     3.91     25.3     39.8  2.76e-06        0     2.23      67.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -114      500      383  2.76e-06        0      598       665  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 71
Energy Deposited == 0
No. of Photons Absorbed == 31
No. of Photons Reflected == 43
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 86
Photon Angle == 0.3250802469718033
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     40.3     16.5      100  2.76e-06        0        0         0   physWorld initStep
    1     18.5     16.5     40.2  2.76e-06        0     63.6      63.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3545267230936204
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     17.8     16.4     38.3  2.76e-06        0     2.08      65.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 72
Energy Deposited == 0
No. of Photons Absorbed == 32
No. of Photons Reflected == 43
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 87
Photon Angle == 0.3545267230936204
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       52     31.9      100  2.76e-06        0        0         0   physWorld initStep
    1     24.4     31.9     24.2  2.76e-06        0     80.7      80.7   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.3490658503988655
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    2     24.4     31.9     24.2  2.76e-06        0        0      80.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    3    -25.4      216     -500  2.76e-06        0      558       639  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 73
Energy Deposited == 0
No. of Photons Absorbed == 32
No. of Photons Reflected == 44
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 88
Photon Angle == 0.3490658503988655
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     19.8     21.5      100  2.76e-06        0        0         0   physWorld initStep
    1    -1.39     21.5     41.8  2.76e-06        0     61.9      61.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3070566493965008
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -2.06     21.4     39.6  2.76e-06        0     2.27      64.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3    -2.06     21.4     39.6  2.76e-06        0        0      64.2   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     -2.9       23     41.1  2.76e-06        0     2.27      66.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -281      500      434  2.76e-06        0      678       744  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 74
Energy Deposited == 0
No. of Photons Absorbed == 32
No. of Photons Reflected == 45
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 89
Photon Angle == 0.3070566493965008
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     29.3    -28.2      100  2.76e-06        0        0         0   physWorld initStep
    1     6.65    -28.2     37.8  2.76e-06        0     66.2      66.2   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3334305543921126
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     5.91      -28     35.6  2.76e-06        0     2.31      68.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 75
Energy Deposited == 0
No. of Photons Absorbed == 33
No. of Photons Reflected == 45
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 90
Photon Angle == 0.3334305543921126
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     36.5     35.7      100  2.76e-06        0        0         0   physWorld initStep
    1     11.4     35.7     30.9  2.76e-06        0     73.5      73.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.357974406978169
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     10.5     35.4     28.6  2.76e-06        0     2.51        76 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 76
Energy Deposited == 0
No. of Photons Absorbed == 34
No. of Photons Reflected == 45
No. of Photons Transmitted == 12
No. of Photons Detected == 0
Total no. of Photons == 91
Photon Angle == 0.357974406978169
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     20.9       26      100  2.76e-06        0        0         0   physWorld initStep
    1    -1.09       26     39.6  2.76e-06        0     64.3      64.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3109130279260683
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -1.78     25.8     37.4  2.76e-06        0     2.35      66.6 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -7.11     28.6       28  2.76e-06        0     11.1      77.8 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -17.3     33.9     10.1  2.76e-06        0     21.3        99   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -17.4       34       10  2.76e-06        0    0.135      99.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -18.3       35      9.1  2.76e-06        0     1.69       101   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -454      500     -407  2.76e-06        0      761       862  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 77
Energy Deposited == 0
No. of Photons Absorbed == 34
No. of Photons Reflected == 45
No. of Photons Transmitted == 13
No. of Photons Detected == 0
Total no. of Photons == 92
Photon Angle == 0.3109130279260683
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     15.2     26.9      100  2.76e-06        0        0         0   physWorld initStep
    1    -7.15     26.9     38.5  2.76e-06        0     65.4      65.4   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2947467054741981
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -7.84     26.7     36.1  2.76e-06        0     2.47      67.9 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -13.6       30       28  2.76e-06        0     10.5      78.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4      -19       33     20.5  2.76e-06        0      9.7      88.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -19.1       33     20.4  2.76e-06        0    0.128      88.3   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -20.5     34.5     19.2  2.76e-06        0     2.39      90.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500      481     -444  2.76e-06        0      803       893  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 78
Energy Deposited == 0
No. of Photons Absorbed == 34
No. of Photons Reflected == 45
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 93
Photon Angle == 0.2947467054741981
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     60.3    -21.1      100  2.76e-06        0        0         0   physWorld initStep
    1     34.1    -21.1       28  2.76e-06        0     76.6      76.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4069944511570869
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     34.1    -21.1       28  2.76e-06        0   0.0327      76.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3       32    -20.8       23  2.76e-06        0     5.43      82.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4       32    -20.8       23  2.76e-06        0       -0      82.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     33.2    -22.6     17.9  2.76e-06        0     5.54      87.6   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     33.2    -22.6     17.9  2.76e-06        0        0      87.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7       31    -22.2     12.8  2.76e-06        0     5.54      93.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8       31    -22.2     12.8  2.76e-06        0        0      93.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     31.8    -23.6     9.19  2.76e-06        0     3.97      97.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     90.1     -189     -500  2.76e-06        0      539       636  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 79
Energy Deposited == 0
No. of Photons Absorbed == 34
No. of Photons Reflected == 48
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 96
Photon Angle == 0.4069944511570869
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     10.1     21.9      100  2.76e-06        0        0         0   physWorld initStep
    1    -11.7     21.9     40.2  2.76e-06        0     63.6      63.6   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2777446727500341
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -12.3     21.8     37.9  2.76e-06        0     2.47      66.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 80
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 48
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 97
Photon Angle == 0.2777446727500341
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     71.4     5.35      100  2.76e-06        0        0         0   physWorld initStep
    1     39.8     5.35     13.1  2.76e-06        0     92.5      92.5   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.599310161367014
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     37.8     5.22     10.1  2.76e-06        0     3.56      96.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     37.7     5.22     9.87  2.76e-06        0    0.272      96.3   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    4     37.5     5.33     6.79  2.76e-06        0     3.09      99.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5     -147     5.44     -500  2.76e-06        0      539       639  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 81
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 48
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 97
Photon Angle == 0.599310161367014
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     60.1    -20.8      100  2.76e-06        0        0         0   physWorld initStep
    1       34    -20.8     28.3  2.76e-06        0     76.3      76.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.4061887793934966
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     33.9    -20.8       28  2.76e-06        0    0.317      76.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     32.2    -20.5     23.8  2.76e-06        0     4.52      81.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     32.2    -20.5     23.8  2.76e-06        0        0      81.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     33.3    -22.4     18.8  2.76e-06        0     5.53      86.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     33.3    -22.4     18.8  2.76e-06        0        0      86.7   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     31.2      -22     13.7  2.76e-06        0     5.53      92.2   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8     31.2      -22     13.7  2.76e-06        0 8.29e-15      92.2   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     32.1    -23.5     9.49  2.76e-06        0     4.56      96.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     92.9     -187     -500  2.76e-06        0      539       635  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 82
Energy Deposited == 0
No. of Photons Absorbed == 35
No. of Photons Reflected == 51
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 100
Photon Angle == 0.4061887793934966
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     48.5       25      100  2.76e-06        0        0         0   physWorld initStep
    1     24.2       25     33.4  2.76e-06        0     70.9      70.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3780533044455958
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     23.4     24.8     31.3  2.76e-06        0     2.24      73.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 83
Energy Deposited == 0
No. of Photons Absorbed == 36
No. of Photons Reflected == 51
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 101
Photon Angle == 0.3780533044455958
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     61.4    -12.6      100  2.76e-06        0        0         0   physWorld initStep
    1       36    -12.6     30.2  2.76e-06        0     74.3      74.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.404308478636604
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     35.1    -12.6     28.2  2.76e-06        0      2.2      76.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     35.1    -12.6     28.2  2.76e-06        0        0      76.5   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4       37    -13.5     28.9  2.76e-06        0      2.2      78.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      500     -245      166  2.76e-06        0      535       614  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 84
Energy Deposited == 0
No. of Photons Absorbed == 36
No. of Photons Reflected == 52
No. of Photons Transmitted == 14
No. of Photons Detected == 0
Total no. of Photons == 102
Photon Angle == 0.404308478636604
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     46.5     18.5      100  2.76e-06        0        0         0   physWorld initStep
    1     23.6     18.5     37.1  2.76e-06        0     66.9      66.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3694311603439706
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     22.9     18.4     35.1  2.76e-06        0     2.12        69 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     20.7     19.4       28  2.76e-06        0     7.52      76.6 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     10.3     24.5    -6.33  2.76e-06        0     36.2       113 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     10.3     24.5    -6.33  2.76e-06        0        0       113 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6     2.59       16      -10  2.76e-06 2.76e-06     12.1       125    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 85
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 36
No. of Photons Reflected == 53
No. of Photons Transmitted == 15
No. of Photons Detected == 0
Total no. of Photons == 104
Photon Angle == 0.3694311603439706
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     6.04     21.6      100  2.76e-06        0        0         0   physWorld initStep
    1    -16.2     21.6       39  2.76e-06        0     64.9      64.9   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.262574981406233
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2    -16.8     21.5     36.5  2.76e-06        0     2.59      67.5 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3    -26.7     25.9       28  2.76e-06        0     13.8      81.3 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4    -27.5     26.3     27.3  2.76e-06        0     1.14      82.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5    -27.6     26.4     27.2  2.76e-06        0    0.115      82.5   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    6    -29.3     27.5     26.3  2.76e-06        0     2.22      84.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    7     -500      312     -259  2.76e-06        0      620       705  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 86
Energy Deposited == 0
No. of Photons Absorbed == 36
No. of Photons Reflected == 53
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 105
Photon Angle == 0.262574981406233
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     16.5    -13.8      100  2.76e-06        0        0         0   physWorld initStep
    1    -3.71    -13.8     44.4  2.76e-06        0     59.1      59.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.2975650229642106
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -4.35    -13.7     42.3  2.76e-06        0     2.21      61.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 87
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 53
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 106
Photon Angle == 0.2975650229642106
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0       65    -21.2      100  2.76e-06        0        0         0   physWorld initStep
    1     34.1    -21.2     15.1  2.76e-06        0     90.4      90.4   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.599310161367014
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.1    -20.6       12  2.76e-06        0      3.7      94.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    3     32.1    -20.6       12  2.76e-06        0       -0      94.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     33.2      -22     9.49  2.76e-06        0     3.04      97.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      218     -275     -500  2.76e-06        0      598       695  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 88
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 54
No. of Photons Transmitted == 16
No. of Photons Detected == 0
Total no. of Photons == 107
Photon Angle == 0.599310161367014
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     46.5     14.7      100  2.76e-06        0        0         0   physWorld initStep
    1       24     14.7     38.3  2.76e-06        0     65.7      65.7   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3679672463430781
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     23.3     14.6     36.4  2.76e-06        0     2.08      67.7 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     20.7     15.5       28  2.76e-06        0     8.79      76.5 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     9.16     19.8      -10  2.76e-06 2.76e-06       40       116    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 89
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 37
No. of Photons Reflected == 54
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 108
Photon Angle == 0.3679672463430781
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     39.4    -26.9      100  2.76e-06        0        0         0   physWorld initStep
    1     16.1    -26.9     36.1  2.76e-06        0       68        68   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3571776812649223
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     15.4    -26.8       34  2.76e-06        0     2.25      70.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 41
    3     15.4    -26.8       34  2.76e-06        0        0      70.2   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    4     15.8    -28.7     35.1  2.76e-06        0     2.25      72.5   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    5      106     -500      254  2.76e-06        0      527       600  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 90
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 55
No. of Photons Transmitted == 17
No. of Photons Detected == 0
Total no. of Photons == 109
Photon Angle == 0.3571776812649223
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     44.5     29.7      100  2.76e-06        0        0         0   physWorld initStep
    1     19.9     29.7     32.5  2.76e-06        0     71.8      71.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3720091331381843
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     19.1     29.5     30.4  2.76e-06        0     2.33      74.1 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 42
    3     18.4     30.2       28  2.76e-06        0     2.56      76.7 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    4     12.8     35.7     9.88  2.76e-06        0     19.7      96.4 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    5     12.8     35.7     9.88  2.76e-06        0        0      96.4 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    6    -28.7    -11.9   0.0251  2.76e-06        0       64       160 innerReflector Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 8
    7    -28.7    -11.9   0.0251  2.76e-06        0        0       160 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    8     -7.9    -20.3       28  2.76e-06        0     35.8       196 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    9   0.0218    -23.5     38.7  2.76e-06        0     13.7       210   pmtSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10    0.846    -24.2     40.5  2.76e-06        0     2.17       212   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      234     -194      500  2.76e-06        0      542       755  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 91
Energy Deposited == 0
No. of Photons Absorbed == 37
No. of Photons Reflected == 57
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 112
Photon Angle == 0.3720091331381843
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     32.1    -16.9      100  2.76e-06        0        0         0   physWorld initStep
    1     11.1    -16.9     42.4  2.76e-06        0     61.3      61.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3362964939834105
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     10.5    -16.9     40.4  2.76e-06        0      2.1      63.4 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 92
Energy Deposited == 0
No. of Photons Absorbed == 38
No. of Photons Reflected == 57
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 113
Photon Angle == 0.3362964939834105
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     62.2     20.6      100  2.76e-06        0        0         0   physWorld initStep
    1     34.5     20.6     23.9  2.76e-06        0       81        81   glassTube Transportation
THE INCIDENT ANGLE IS G 83:  0.599310161367014
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     32.5       20     20.8  2.76e-06        0     3.69      84.7   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    3     32.4       20     20.5  2.76e-06        0    0.347      85.1 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     32.4       20     20.5  2.76e-06        0        0      85.1   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     32.4     20.1     20.2  2.76e-06        0    0.347      85.4   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 4
    6     32.4     20.1     20.2  2.76e-06        0        0      85.4   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7     32.3     20.1     19.8  2.76e-06        0    0.347      85.8 placeInnerCone Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8     32.3     20.1     19.8  2.76e-06        0        0      85.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     32.3     20.2     19.5  2.76e-06        0    0.347      86.1   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   10     33.7     21.8     16.5  2.76e-06        0     3.69      89.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
   11      117      190     -500  2.76e-06        0      550       639  OutOfWorld Transportation
TRACK ID == 1
THE CURRENT EVENTID IS == 93
Energy Deposited == 0
No. of Photons Absorbed == 38
No. of Photons Reflected == 60
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 116
Photon Angle == 0.599310161367014
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     14.2     12.7      100  2.76e-06        0        0         0   physWorld initStep
    1    -5.99     12.7     44.5  2.76e-06        0     59.1      59.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.291039221559239
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2    -6.62     12.7     42.4  2.76e-06        0     2.23      61.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 94
Energy Deposited == 0
No. of Photons Absorbed == 39
No. of Photons Reflected == 60
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 117
Photon Angle == 0.291039221559239
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     29.8    -4.97      100  2.76e-06        0        0         0   physWorld initStep
    1     9.83    -4.97     45.2  2.76e-06        0     58.3      58.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3295249066176562
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     9.18    -4.95     43.3  2.76e-06        0     2.03      60.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 95
Energy Deposited == 0
No. of Photons Absorbed == 40
No. of Photons Reflected == 60
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 118
Photon Angle == 0.3295249066176562
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     22.3     24.6      100  2.76e-06        0        0         0   physWorld initStep
    1    0.564     24.6     40.3  2.76e-06        0     63.5      63.5   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.314247441205652
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2   -0.129     24.4     38.2  2.76e-06        0      2.3      65.8 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 96
Energy Deposited == 0
No. of Photons Absorbed == 41
No. of Photons Reflected == 60
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 119
Photon Angle == 0.314247441205652
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     46.7    -34.2      100  2.76e-06        0        0         0   physWorld initStep
    1     20.6    -34.2     28.3  2.76e-06        0     76.3      76.3   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3833214587644331
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
    2     20.5    -34.1       28  2.76e-06        0    0.335      76.6   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 13
    3     18.2    -33.5     22.3  2.76e-06        0     6.18      82.8   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    4     18.2    -33.5     22.3  2.76e-06        0       -0      82.8   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    5     17.4    -36.2     15.3  2.76e-06        0      7.5      90.3   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    6     17.4    -36.2     15.3  2.76e-06        0        0      90.3   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    7       14    -34.9     6.37  2.76e-06        0     9.64      99.9   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
    8       14    -34.9     6.37  2.76e-06        0        0      99.9   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
    9     11.2    -31.7     3.53  2.76e-06        0     5.13       105   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   10     11.2    -31.7     3.53  2.76e-06        0        0       105   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   11     9.32    -30.9    -1.16  2.76e-06        0     5.11       110   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   12     9.32    -30.9    -1.16  2.76e-06        0 8.82e-15       110   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   13     6.61    -27.6    -3.93  2.76e-06        0     5.13       115   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   14     6.61    -27.6    -3.93  2.76e-06        0        0       115   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   15     4.51    -26.8    -8.52  2.76e-06        0     5.11       120   physWorld Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 5
   16     4.51    -26.8    -8.52  2.76e-06        0        0       120   glassTube Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 14
   17     3.07    -24.8      -10  2.76e-06 2.76e-06     2.87       123    absorber Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 15
THE CURRENT EVENTID IS == 97
Energy Deposited == 2.7552e-06
No. of Photons Absorbed == 41
No. of Photons Reflected == 67
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 126
Photon Angle == 0.3833214587644331
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     59.3    -13.8      100  2.76e-06        0        0         0   physWorld initStep
    1     34.3    -13.8     31.4  2.76e-06        0     73.1      73.1   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.3991657427441231
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2     33.5    -13.7     29.3  2.76e-06        0     2.18      75.2 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 98
Energy Deposited == 0
No. of Photons Absorbed == 42
No. of Photons Reflected == 67
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 127
Photon Angle == 0.3991657427441231
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
THE VALUE OF ANGLE IN RADIANS == 0.3490658503988659
PARTICLE ENERGY IS:  2.7552e-06
GENERATED THE OPTICAL PHOTON!!!

*********************************************************************************************************
* G4Track Information:   Particle = opticalphoton,   Track ID = 1,   Parent ID = 0
*********************************************************************************************************

Step#    X(mm)    Y(mm)    Z(mm) KinE(MeV)  dE(MeV) StepLeng TrackLeng  NextVolume ProcName
    0     24.7     33.6      100  2.76e-06        0        0         0   physWorld initStep
    1    0.847     33.6     34.4  2.76e-06        0     69.8      69.8   pmtSphere Transportation
THE INCIDENT ANGLE IS G 83:  0.324746823002831
TRACK ID == 1
BOUNDARY PROCESS STATUS == 3
ABSORPTION OCCURED!!!!!!!!!
    2   0.0818     33.3       32  2.76e-06        0     2.52      72.3 pmtInnerSphere Transportation
TRACK ID == 1
BOUNDARY PROCESS STATUS == 10
THE CURRENT EVENTID IS == 99
Energy Deposited == 0
No. of Photons Absorbed == 43
No. of Photons Reflected == 67
No. of Photons Transmitted == 18
No. of Photons Detected == 0
Total no. of Photons == 128
Photon Angle == 0.324746823002831
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
POSTSTEP VOLUME NAMES: innerReflector
PRESTEP VOLUME NAMES: placeInnerCone
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
Dynamic pools deleted: 9 / Total memory freed: 0.034 Mb
============================================================
RunManagerKernel is deleted. Good bye :)
Graphics systems deleted.
Visualization Manager deleting...
