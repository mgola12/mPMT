#include "construction.hh"

myDetectorConstruction::myDetectorConstruction(G4int DetConfig, WCSimTuningParameters* WCSimTuningPars) : WCSimTuningParams(WCSimTuningPars)
{
  myConfiguration = DetConfig;
}

myDetectorConstruction::~myDetectorConstruction()
{}

G4VPhysicalVolume *myDetectorConstruction::Construct()
{

  G4NistManager *nist = G4NistManager::Instance();
  G4Material *Air = nist->FindOrBuildMaterial("G4_AIR");
  
  a = 14.01*g/mole;
  G4Element* elN
    = new G4Element("Nitrogen","N", 7,a);

  a = 16.00*g/mole;
  G4Element* elO
  = new G4Element("Oxygen","O", 8,a);

  density = 1.290*mg/cm3;
  G4Material* Air1
    = new G4Material("Air",density,2);
  Air1->AddElement(elN, 70.*perCent);
  Air1->AddElement(elO, 30.*perCent);
  


  G4double absorberThickness = 1.0*mm;
  G4double absorberheight = absorberThickness/2.;
  density = 0.96*g/cm3;

  G4Element *elC = new G4Element("Carbon", "C", 6, 12.01*g/mole);
  G4Element *elH = new G4Element("Hydrogen", "H", 1, 1.01*g/mole);
  G4Material *absorberMaterial = new G4Material("customAbsorber", density, 2);

  absorberMaterial->AddElement(elC, 1);
  absorberMaterial->AddElement(elH, 4);

  G4double absorptionCoeff = 1.0e6 / cm;



  const G4int numEntries = 2;
  const G4int NUMENTRIES_water = 60;

  G4double photonEnergy[numEntries] = {1.*eV, 10.*eV};
  G4double absorption[numEntries] = {absorptionCoeff, absorptionCoeff};
  G4double rindexWorld[numEntries] = {1.0, 1.0};

G4double RINDEX_air[NUMENTRIES_water] =
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0};

G4double BLACKABS_blacksheet[NUMENTRIES_water] =
  { 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm,
    1.0e9*cm,
    1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm,
    1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm,
    1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm,
    1.0e9*cm, 1.0e9*cm,
    1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e8*cm,
    1.0e9*cm,
    1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e8*cm, 1.0e9*cm,
    1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e8*cm, 1.0e9*cm,
    1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e9*cm, 1.0e8*cm, 1.0e9*cm,
    1.0e9*cm, 1.0e9*cm};


 G4double RAYLEIGH_air[NUMENTRIES_water] =
   { 0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,
     0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,
     0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,
     0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,
     0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,
     0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,
     0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,
     0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,
     0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,
     0.01*m,0.01*m,0.01*m,0.01*m,0.01*m,0.01*m};
 
 G4double ENERGY_water[NUMENTRIES_water] =
   { 1.56962*eV, 1.58974*eV, 1.61039*eV, 1.63157*eV,
     1.65333*eV, 1.67567*eV, 1.69863*eV, 1.72222*eV,
     1.74647*eV, 1.77142*eV, 1.7971*eV, 1.82352*eV,
     1.85074*eV, 1.87878*eV, 1.90769*eV, 1.93749*eV,
     1.96825*eV, 1.99999*eV, 2.03278*eV, 2.06666*eV,
     2.10169*eV, 2.13793*eV, 2.17543*eV, 2.21428*eV,
     2.25454*eV, 2.29629*eV, 2.33962*eV, 2.38461*eV,
     2.43137*eV, 2.47999*eV, 2.53061*eV, 2.58333*eV,
     2.63829*eV, 2.69565*eV, 2.75555*eV, 2.81817*eV,
     2.88371*eV, 2.95237*eV, 3.02438*eV, 3.09999*eV,
     3.17948*eV, 3.26315*eV, 3.35134*eV, 3.44444*eV,
     3.54285*eV, 3.64705*eV, 3.75757*eV, 3.87499*eV,
     3.99999*eV, 4.13332*eV, 4.27585*eV, 4.42856*eV,
     4.59258*eV, 4.76922*eV, 4.95999*eV, 5.16665*eV,
     5.39129*eV, 5.63635*eV, 5.90475*eV, 6.19998*eV };
 
 G4double RINDEX_glass[NUMENTRIES_water] =
   { 1.5110, 1.5112, 1.5114, 1.5116, 1.5118,
     1.5121, 1.5123, 1.5126, 1.5128, 1.5131,
     1.5133, 1.5136, 1.5139, 1.5142, 1.5145,
     1.5148, 1.5152, 1.5155, 1.5159, 1.5163,
     1.5167, 1.5171, 1.5176, 1.5180, 1.5185,
     1.5190, 1.5196, 1.5202, 1.5208, 1.5214,
     1.5221, 1.5228, 1.5236, 1.5244, 1.5253,
     1.5263, 1.5273, 1.5284, 1.5296, 1.5309,
     1.5323, 1.5338, 1.5354, 1.5372, 1.5392,
     1.5414, 1.5438, 1.5465, 1.5495, 1.5528,
     1.5566, 1.5608, 1.5657, 1.5713, 1.5777,
     1.5853, 1.5941, 1.6047, 1.6173, 1.6328 };
 
  G4double ABSORPTION_glass[NUMENTRIES_water]=
    { 1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,
      1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,
      1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,
      1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,
      1.0e9*cm, 1.0e9*cm,
      1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,
      1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,
      1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,
      1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,1.0e9*cm,
      1.0e9*cm, 1.0e9*cm };
  
  //  G4MaterialPropertiesTable *myMPT = new G4MaterialPropertiesTable();
  //  myMPT->AddProperty("RINDEX", ENERGY_water, RINDEX_air, NUMENTRIES_water);
  //  myMPT->AddProperty("ABSLENGTH", ENERGY_water, BLACKABS_blacksheet, NUMENTRIES_water); 
  //  myMPT->AddProperty("RAYLEIGH",ENERGY_water, RAYLEIGH_air, NUMENTRIES_water);

  //  Air->SetMaterialPropertiesTable(myMPT);

  G4MaterialPropertiesTable *myMPT2 = new G4MaterialPropertiesTable();
  myMPT2->AddProperty("RINDEX", ENERGY_water, RINDEX_air, NUMENTRIES_water);
  myMPT2->AddProperty("ABSLENGTH", ENERGY_water, BLACKABS_blacksheet, NUMENTRIES_water);
  myMPT2->AddProperty("RAYLEIGH",ENERGY_water, RAYLEIGH_air, NUMENTRIES_water);

  Air1->SetMaterialPropertiesTable(myMPT2);


  G4MaterialPropertiesTable* absorberProperties = new G4MaterialPropertiesTable();
  G4MaterialPropertiesTable* mptWorld = new G4MaterialPropertiesTable();

  absorberProperties->AddProperty("ABSLENGTH", photonEnergy, absorption, numEntries);
  mptWorld->AddProperty("RINDEX", photonEnergy, rindexWorld, numEntries);
  mptWorld->AddProperty("ABSLENGTH", photonEnergy, absorption, numEntries);

  absorberMaterial->SetMaterialPropertiesTable(absorberProperties);
  Air->SetMaterialPropertiesTable(mptWorld);


  /////////PMT Glass Material///////////////  
  density = 2.20*g/cm3;
  G4Material* SiO2 = new G4Material("SiO2", density, 2);
  SiO2->AddElement(nist->FindOrBuildElement("Si"), 1);
  SiO2->AddElement(nist->FindOrBuildElement("O"), 2);
  
  a = 10.81*g/mole;
  G4Element* B = new G4Element("Boron", "B", 5, a);

  density= 2.46*g/cm3;
  G4Material* B2O3 = new G4Material("B2O3", density, 2);
  B2O3->AddElement(nist->FindOrBuildElement("B"), 2);
  B2O3->AddElement(nist->FindOrBuildElement("O"), 3);

  a = 22.99*g/mole;
  G4Element* Na = new G4Element("Sodium", "Na", 11, a);

  density= 2.47*g/cm3;
  G4Material* Na2O = new G4Material("Na2O", density, 2);
  Na2O->AddElement(nist->FindOrBuildElement("Na"), 2);
  Na2O->AddElement(nist->FindOrBuildElement("O"), 1);

  density= 4.00*g/cm3;
  G4Material* Al2O3 = new G4Material("Al2O3", density, 2);
  Al2O3->AddElement(nist->FindOrBuildElement("Al"), 2);
  Al2O3->AddElement(nist->FindOrBuildElement("O"), 3);

  density = 2.23*g/cm3;
  G4Material* PMTGlass = new G4Material("PMTGlass", density, 4);
  PMTGlass->AddMaterial(SiO2, 80.6*perCent);
  PMTGlass->AddMaterial(B2O3, 13.0*perCent);
  PMTGlass->AddMaterial(Na2O, 4.0*perCent);
  PMTGlass->AddMaterial(Al2O3, 2.4*perCent);

  G4MaterialPropertiesTable *myMPT5 = new G4MaterialPropertiesTable();
  myMPT5->AddProperty("RINDEX", ENERGY_water, RINDEX_glass, NUMENTRIES_water);
  myMPT5->AddProperty("ABSLENGTH",ENERGY_water, ABSORPTION_glass, NUMENTRIES_water);
  PMTGlass->SetMaterialPropertiesTable(myMPT5);

  /////////////////////////////////////////
  G4double pmtGlassThickness = 1.0*mm;
  G4double pmtGlassRadius = 53.0*mm;
  G4double pmtCylRadius = 40.15*mm;
  G4double pmtTubeRadius = 26.1*mm;
  G4double pmtCylHeight = 11.0*mm;


  G4Box *solidWorld = new G4Box("solidWorld", 0.1*m, 0.1*m, 0.1*m);
  
  G4LogicalVolume *logicWorld = new G4LogicalVolume(solidWorld, 
						    //						    Air, 
						    PMTGlass,
						    "logicWorld");
  
  G4VPhysicalVolume *physWorld = new G4PVPlacement(0, 
						   G4ThreeVector(0.,0.,0.), 
						   logicWorld, 
						   "physWorld", 
						   0, 
						   false, 
						   0, 
						   true);
  
  G4Cons *SolidCone = new G4Cons("pmtCone", 
				 pmtTubeRadius, 
				 pmtCylRadius, 
				 pmtCylRadius, 
				 pmtCylRadius+pmtGlassThickness, 
				 pmtCylHeight/2.*mm, 
				 0.*deg, 360.*deg);  
  
  G4Tubs *tube = new G4Tubs("tube", 
			    pmtCylRadius, 
			    pmtCylRadius+pmtGlassThickness, 
			    pmtCylHeight/2.*mm, 
			    0.*deg, 360.*deg);
  /////////////////////Check contact////////////////////
  /*
  G4SubtractionSolid* intersection = new G4SubtractionSolid("intersection", tube, SolidCone);
  G4bool touching = (intersection->GetCubicVolume() > 0.0);


  if(touching)
    {
      G4cout<<"The solids are touching each other with no space"<<G4endl;
    }
  else
    {
      G4cout<<"There is a space between the solids"<<G4endl;
    }
*/
  //////////////////////////////////////////////
  
  G4UnionSolid *combineSolid1 = new G4UnionSolid("tubeplusreflection", 
						 SolidCone, 
						 tube, 
						 0, 
						 G4ThreeVector(0.,0.,11.0*mm));
  
  G4LogicalVolume *logicCombine1 = new G4LogicalVolume(combineSolid1,
                                                      PMTGlass,
                                                      "logicCombine1");

  G4VPhysicalVolume *glassTube = new G4PVPlacement(0,
                                                   G4ThreeVector(0.,0.,0.),
                                                   logicCombine1,
                                                   "glassTube",
                                                   logicWorld,
                                                   false,
                                                   0,
                                                   true);

  G4Sphere *pmtGlassSolid = new G4Sphere("pmtglass", 
				    pmtGlassRadius, 
				    pmtGlassRadius+pmtGlassThickness, 
				    0.0*deg, 360.0*deg, 
				    0.0, 49.24*deg);  
  
  G4Transform3D transform(G4Translate3D(0.0, 0.0, -18.097*mm));
  /*
  G4UnionSolid *combineSolid2 = new G4UnionSolid("glassplustubeplusreflection", 
						 combineSolid1, 
						 pmtGlass, 
						 transform);
  */
  
  G4LogicalVolume *pmtGlassLogic = new G4LogicalVolume(pmtGlassSolid, 
						       PMTGlass, 
						       "logicCombine");
  
  G4VPhysicalVolume *pmtSphere = new G4PVPlacement(0, 
						   G4ThreeVector(0.,0.,-18.097*mm), 
						   pmtGlassLogic, 
						   "pmtSphere", 
						   logicWorld, 
						   false, 
						   0, 
						   true);

  ////////////////////Checking OverLap///////////////////////////////////
  G4SubtractionSolid* intersection = new G4SubtractionSolid("intersection", pmtGlassSolid, tube);
  G4bool touching = (intersection->GetCubicVolume() > 0.0);


  if(touching)
    {
      G4cout<<"The solids are touching each other with no space"<<G4endl;
    }
  else
    {
      G4cout<<"There is a space between the solids"<<G4endl;
    }
  ////////////////////////////////////////////////////////////////////////

  
  G4Sphere *pmtInnerGlassSolid = new G4Sphere("pmtInnerglass",
					      51.*mm,
					      pmtGlassRadius,
					      0.0*deg, 360.0*deg,
					      0.0, 49.24*deg);
  
  G4LogicalVolume *pmtInnerGlassLogic = new G4LogicalVolume(pmtInnerGlassSolid,
							    Air1,
							    "logicCombine");

  G4VPhysicalVolume *pmtInnerSphere = new G4PVPlacement(0,
							G4ThreeVector(0.,0.,-18.097*mm),
							pmtInnerGlassLogic,
							"glassInnerSphere",
							logicWorld,
							false,
							0,
							true);
  
  
////////////////////Photon Absorber//////////////////////
//  G4cout<<"Successfully entered the photon adsorber\n"<<G4endl;

  
  G4Cons* solidAbsorber = new G4Cons("solidAbsorber", 
				     0.0, 
				     pmtTubeRadius, 
				     0.0, 
				     pmtTubeRadius, 
				     absorberheight, 
				     0.0, 360.0*deg);
  



  G4ThreeVector absorberPosition(0.,0.,-5.5*mm);
  
  logicabsorber = new G4LogicalVolume(solidAbsorber, 
				      absorberMaterial, 
				      "logicabsorber");
  
  G4VPhysicalVolume *absorber = new G4PVPlacement(0, 
						  absorberPosition, 
						  logicabsorber, 
						  "absorber", 
						  logicWorld, 
						  false, 
						  0, 
						  true);

  G4VisAttributes *visAttributes = new G4VisAttributes();
  visAttributes->SetColor(G4Color::Gray());
  visAttributes->SetVisibility(true);
  visAttributes->SetForceSolid(true);
  logicabsorber->SetVisAttributes(visAttributes);

  fScoringVolume = logicabsorber;

  

  //  G4cout<<"Successfully Exited the photon adsorber\n"<<G4endl;

  //////////////////Optical photocathode surface and its properties////////////////////////
  const G4int NUM = 2;
  
  G4OpticalSurface* OpGlassCathodeSurface =  new G4OpticalSurface("GlassCathodeSurface");
  OpGlassCathodeSurface->SetType(dielectric_dielectric);
  OpGlassCathodeSurface->SetModel(unified);
  OpGlassCathodeSurface->SetFinish(polished);

  G4double RINDEX_cathode[NUM] = { 1.0, 1.0 };
  G4double PP[NUM] = { 1.4E-9*GeV,6.2E-9*GeV};
  G4double RGCFF = 0.32;
  //  RGCFF = WCSimTuningParams->GetRgcff();
  G4double REFLECTIVITY_glasscath[NUM] = { 1.0*RGCFF, 1.0*RGCFF };
  G4double EFFICIENCY_glasscath[NUM] = { 0.0, 0.0 };
  G4int COATEDFRUSTRATEDTRANSMISSION_glasscath = 1;

  const G4int NUMSK = 6;
  G4double ENERGY_COATED_SK[NUMSK] =
    {
      1.000*eV, 2.786*eV, 3.061*eV, 3.306*eV, 3.679*eV, 9.000*eV
    };
  // Real refractive index of photocathode film                                                                             
  G4double COATEDRINDEX_glasscath_SK[NUMSK] =
    { 3.4, 3.4, 3.1, 2.8, 2.4, 2.4 };
  // Imaginary refractive index of photocathode film                                                                        
  G4double COATEDRINDEXIM_glasscath_SK[NUMSK] =
    { 1.7, 1.7, 1.6, 1.5, 1.4, 1.4 };
  // Thickness of photocathode film                                                                                         
  G4double COATEDTHICKNESS_glasscath_SK = 11.5*nm;
  
  const G4int NUMWAV = 23;
  G4double ENERGY_COATED_WAV[NUMWAV] =
    {
      1.000*eV, 1.823*eV, 1.864*eV, 1.907*eV, 1.953*eV,
      2.000*eV, 2.049*eV, 2.101*eV, 2.156*eV, 2.214*eV,
      2.275*eV, 2.339*eV, 2.407*eV, 2.480*eV, 2.556*eV,
      2.638*eV, 2.725*eV, 2.818*eV, 2.917*eV, 3.024*eV,
      3.139*eV, 3.263*eV, 9.000*eV
    };
  G4double COATEDRINDEX_glasscath_KCsCb[NUMWAV] =
    {
      2.96, 2.96, 2.95, 2.95, 2.95,
      2.96, 2.98, 3.01, 3.06, 3.12,
       3.20, 3.26, 3.09, 3.00, 3.00,
      3.00, 2.87, 2.70, 2.61, 2.38,
      2.18, 1.92, 1.92
    };
  G4double COATEDRINDEXIM_glasscath_KCsCb[NUMWAV] =
    {
      0.33, 0.33, 0.34, 0.34, 0.35,
      0.37, 0.38, 0.42, 0.46, 0.53,
      0.63, 0.86, 1.05, 1.06, 1.11,
      1.34, 1.44, 1.50, 1.53, 1.71,
      1.69, 1.69, 1.69
    };
  G4double COATEDTHICKNESS_glasscath_KCsCb = 20.0*nm;
  
  G4double COATEDRINDEX_glasscath_RbCsCb[NUMWAV] =
    {
      3.13, 3.13, 3.14, 3.14, 3.15,
      3.18, 3.22, 3.28, 3.39, 3.32,
      3.23, 3.21, 3.22, 3.16, 2.99,
      2.81, 2.63, 2.50, 2.40, 2.30,
      2.22, 2.07, 2.07
    };
  G4double COATEDRINDEXIM_glasscath_RbCsCb[NUMWAV] =
    {
       0.35, 0.35, 0.37, 0.37, 0.38,
       0.40, 0.43, 0.46, 0.59, 0.76,
       0.86, 0.90, 1.04, 1.21, 1.37,
       1.41, 1.40, 1.35, 1.27, 1.21,
       1.17, 1.22, 1.22
     };

  G4double COATEDTHICKNESS_glasscath_RbCsCb = 23.4*nm;
  
  //Glass to Cathode surface inside PMTs
  G4MaterialPropertiesTable *myST2 = new G4MaterialPropertiesTable();
  myST2->AddProperty("RINDEX", PP, RINDEX_cathode, NUM);
  myST2->AddProperty("REFLECTIVITY", PP, REFLECTIVITY_glasscath, NUM);
  myST2->AddProperty("EFFICIENCY", PP, EFFICIENCY_glasscath, NUM);

  // In order to use new photocathode physics
  G4int pmtsurftype = WCSimTuningParams->GetPMTSurfType(); // Choose one of the two models, see WCSimOpBoundaryProcess for model details                                                                                                                
  G4cout<<"PMT SURFACE == "<<pmtsurftype<<G4endl;
  
  if (pmtsurftype==1)
    {
      OpGlassCathodeSurface->SetType(G4SurfaceType(101));
    }
  else if (pmtsurftype==2)
    {
      OpGlassCathodeSurface->SetType(G4SurfaceType(102));
    }
  else if (pmtsurftype!=0)
    {
      printf("Invalid PMT photocathode surface optical model choice: %i, use the default dielectric model\n",pmtsurftype);
      pmtsurftype = 0;
    }
  if (pmtsurftype!=0)
    {
      G4int cathodepara = WCSimTuningParams->GetCathodePara(); // Choose predefined set of optical parameters           
      G4cout<<"CATHODE PARAMETER == "<<cathodepara<<G4endl;
      if (cathodepara==0)
	{
	  printf("Use SK cathode optical parameters\n");
	  myST2->AddProperty("COATEDRINDEX", ENERGY_COATED_SK, COATEDRINDEX_glasscath_SK, NUMSK);
	  myST2->AddProperty("COATEDRINDEXIM", ENERGY_COATED_SK, COATEDRINDEXIM_glasscath_SK, NUMSK);
	  myST2->AddConstProperty("COATEDTHICKNESS", COATEDTHICKNESS_glasscath_SK);
	  myST2->AddConstProperty("COATEDFRUSTRATEDTRANSMISSION", COATEDFRUSTRATEDTRANSMISSION_glasscath);
	}
      else if (cathodepara==1)
	{
	  printf("Use KCsCb cathode optical parameters\n");
	  myST2->AddProperty("COATEDRINDEX", ENERGY_COATED_WAV, COATEDRINDEX_glasscath_KCsCb, NUMWAV);
	  myST2->AddProperty("COATEDRINDEXIM", ENERGY_COATED_WAV, COATEDRINDEXIM_glasscath_KCsCb, NUMWAV);
	  myST2->AddConstProperty("COATEDTHICKNESS", COATEDTHICKNESS_glasscath_KCsCb);
	  myST2->AddConstProperty("COATEDFRUSTRATEDTRANSMISSION", COATEDFRUSTRATEDTRANSMISSION_glasscath);
	}
      else if (cathodepara==2)
	{
	  printf("Use RbCsCb cathode optical parameters\n");
	  myST2->AddProperty("COATEDRINDEX", ENERGY_COATED_WAV, COATEDRINDEX_glasscath_RbCsCb, NUMWAV);
	  myST2->AddProperty("COATEDRINDEXIM", ENERGY_COATED_WAV, COATEDRINDEXIM_glasscath_RbCsCb, NUMWAV);
	  myST2->AddConstProperty("COATEDTHICKNESS", COATEDTHICKNESS_glasscath_RbCsCb);
	  myST2->AddConstProperty("COATEDFRUSTRATEDTRANSMISSION", COATEDFRUSTRATEDTRANSMISSION_glasscath);
	}
      else
	{
	  printf("Invalid PMT photocathode surface parameters choice: %i, use the default SK model\n",pmtsurftype);
	  myST2->AddProperty("COATEDRINDEX", ENERGY_COATED_SK, COATEDRINDEX_glasscath_SK, NUMSK);
	  myST2->AddProperty("COATEDRINDEXIM", ENERGY_COATED_SK, COATEDRINDEXIM_glasscath_SK, NUMSK);
	  myST2->AddConstProperty("COATEDTHICKNESS", COATEDTHICKNESS_glasscath_SK);
	  myST2->AddConstProperty("COATEDFRUSTRATEDTRANSMISSION", COATEDFRUSTRATEDTRANSMISSION_glasscath);
	}
    }
  

  OpGlassCathodeSurface->SetMaterialPropertiesTable(myST2);

  G4LogicalBorderSurface* GlassCathodeSurface = new G4LogicalBorderSurface("GlassCathodeSurface", pmtSphere, pmtInnerSphere, OpGlassCathodeSurface);

  G4cout << "Scoring volume:  " << fScoringVolume->GetName() << G4endl;  
  
  //Adding a reflector material inside the PMT

  G4double layerThickness = 1.0*mm;
  G4double bottomRadius = 26.1*mm;
  G4double topRadius = 40.15*mm;
  G4double coneHeight = 11.0*mm;

  G4Cons *cone = new G4Cons("cone", bottomRadius-layerThickness-1.0*mm, bottomRadius-layerThickness, topRadius-layerThickness-1.0*mm, topRadius-layerThickness, (coneHeight-layerThickness)/2.0, 0.0, 360.0*deg);
  

  G4double layerInnerRadius = bottomRadius+layerThickness;
  G4double layerOuterRadius = topRadius-layerThickness;


  G4Cons *layer = new G4Cons("layer", layerInnerRadius-1.0*mm, layerInnerRadius, layerOuterRadius-1.0*mm, layerOuterRadius, (coneHeight-layerThickness)/2.0, 0.0, 360.0*deg);

  G4SubtractionSolid *subtractSolid = new G4SubtractionSolid("subtract", cone, layer);
  G4LogicalVolume *logicLayer = new G4LogicalVolume(subtractSolid, Air, "logicLayer");
  G4VPhysicalVolume *placeLayer = new G4PVPlacement(0,
                                                   G4ThreeVector(0.,0.,0.),
                                                   logicLayer,
                                                   "placeLayer",
                                                   logicWorld,
                                                   false,
                                                   0,
                                                   true);
  
  G4VisAttributes *layerAttributes = new G4VisAttributes();
  layerAttributes->SetColor(0.85, 0.85, 0.85, 1.0);
  layerAttributes->SetVisibility(true);
  layerAttributes->SetForceSolid(true);
  logicLayer->SetVisAttributes(layerAttributes);
  
  //delete steppingAction;
  return physWorld;
}

