#include <iostream>

#include "G4RunManager.hh"
#include "G4UIExecutive.hh"
#include "G4VisManager.hh"
#include "G4UImanager.hh"
#include "G4VisExecutive.hh"
#include "G4SteppingVerbose.hh"
#include "G4SteppingManager.hh"
#include "G4GeometryManager.hh"
#include "G4GeometryTolerance.hh"

#include "construction.hh"
#include "physics.hh"
#include "action.hh"
#include "mysteppingaction.hh"
#include "WCSimTuningParameters.hh"
#include "generator.hh"
#include "MyPrimaryGeneratorMessenger.hh"
#include "constructMultiPMT.hh"
#include "constructInSitumPMT.hh"
#include "constructionPMT.hh"
#include "inSituPMT.hh"

int main(int argc, char** argv)
{
  G4RunManager *runManager = new G4RunManager();
  
  WCSimTuningParameters* tuningpars = new WCSimTuningParameters();
  enum DetConfiguration {wfm =1, fwm=2};
  G4int WCSimConfiguration = fwm;
  /*  
  /////////// EX-SITU MODEL
  myDetectorConstruction* detectorConstruction = new myDetectorConstruction(WCSimConfiguration, tuningpars);
  G4LogicalVolume* logicPMT = detectorConstruction->ConstructPMT();
  ConstructMultiPMT* multiPMT = new ConstructMultiPMT(detectorConstruction, logicPMT);
  runManager->SetUserInitialization(multiPMT);     
  /////////////////////////
  */
  ////////////IN-SITU MODEL
  //  inSituPMTConstruction *inSituPMT = new inSituPMTConstruction(WCSimConfiguration, tuningpars);
  //  G4VSolid* logicInSituPMT = inSituPMT->ConstructioninSituPMT();

  //Subtraction PMT
  pmtConstruction* subtractionPMT = new pmtConstruction();
  G4VSolid* PMTSolid = subtractionPMT->ConstructionPMT();

  ConstructInSitumPMT* InSitumPMT = new ConstructInSitumPMT(subtractionPMT, PMTSolid);
  runManager->SetUserInitialization(InSitumPMT); 

/////////////////////////

  
  //  runManager->SetUserInitialization(detectorConstruction); 
  runManager->SetUserInitialization(new MyPhysicsList());
  runManager->SetUserInitialization(new MyActionInitialization());
  runManager->Initialize();
  

  G4UIExecutive *ui = 0;


  if(argc == 1)
    {
      ui =  new G4UIExecutive(argc, argv);
    }

  G4VisManager *visManager = new G4VisExecutive();
  visManager->Initialize();
  G4UImanager *UImanager = G4UImanager::GetUIpointer();

  UImanager->ApplyCommand("/control/execute tuning_parameters.mac");
  UImanager->ApplyCommand("/gui/addMenu true");
  UImanager->ApplyCommand("/tracking/verbose 1");  

  MyPrimaryGenerator* generator = new MyPrimaryGenerator();
  MyPrimaryGeneratorMessenger* generatorMessenger = new MyPrimaryGeneratorMessenger(generator);


  if(ui)
    {
      UImanager->ApplyCommand("/control/execute vis.mac");
      ui->SessionStart();
    }
  else
    {
      G4String command = "/control/execute ";
      G4String filename = argv[1];
      UImanager->ApplyCommand(command+filename);
      G4cout<<"FileName = "<<filename<<G4endl;

    }

  delete ui;
  delete runManager;
  delete visManager;
  return 0;

}

