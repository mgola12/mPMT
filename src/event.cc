/*                                                                                                                         
Author:    Mohit Gola 10th July 2023                                                                                       
*/

#include "event.hh"
#include "G4RunManager.hh"
#include "G4EventManager.hh"

MyEventAction::MyEventAction() : eventID(-1)
{
  fEdep = 0.;
  NumAbsorbed=0;
  TotalNumAbsorbed=0;
  TotalNumReflected=0;
  TotalNumTransmitted=0;
  TotalNumDetected=0;
  NumDetected=0;
  NumReflected=0;
  NumTransmitted=0;
  photonAngle = 0.0;
  totalPhotons =0;
  //  TotalPhotons = 0;
  eventOnTop = 0;
  //  photonAngleCorrect = 0.0;
  mySteppingAction = nullptr;
  //  preStepVolume.clear();
  //  postStepVolume.clear();

}

MyEventAction::~MyEventAction()
{}

void MyEventAction::SetSteppingAction(MySteppingAction* steppingAction)
{
  mySteppingAction = steppingAction;
}

void MyEventAction::BeginOfEventAction(const G4Event* event)
{
  fEdep =0;
  NumAbsorbed=0;
  NumDetected=0;
  NumReflected=0;
  NumTransmitted=0;
  eventOnTop = 0;
  //  preStepVolume.clear();
  //  postStepVolume.clear();
  mySteppingAction->ResetStepCount();
  //  ResetCounters();
  eventID = event->GetEventID();

}

G4int MyEventAction::GetCurrentEventID() const
{
  return eventID;
}

void MyEventAction::EndOfEventAction(const G4Event* event)
{
  G4int currentEventID = GetCurrentEventID();

  G4cout<<"THE CURRENT EVENTID IS == "<<currentEventID<<G4endl;
  //  eventOnTop=0;
  G4AnalysisManager *man = G4AnalysisManager::Instance();
  G4int checkEventID = GetCurrentEventID();
  const std::vector<G4ThreeVector>& photonPositions = mySteppingAction->GetPhotonPositions();
  /*
  for(size_t i = 0; i < photonPositions.size(); ++i)
    {
      const G4ThreeVector& position = photonPositions[i];
      G4double x = position.x();
      G4double y = position.y();
      G4double z = position.z();
      
      //G4cout<<"X: "<<x<<", Y: "<<y<<", Z: "<<z<<G4endl;
      man->FillNtupleDColumn(0, x);
      man->FillNtupleDColumn(1, y);                                                                        
      man->FillNtupleDColumn(2, z);     
      man->FillNtupleIColumn(3, checkEventID);
      man->AddNtupleRow(0);
      
    }
  */
 
  TotalNumAbsorbed += NumAbsorbed;
  TotalNumReflected += NumReflected;
  TotalNumTransmitted += NumTransmitted;
  TotalNumDetected += NumDetected;

  totalPhotons += NumAbsorbed+NumReflected+NumTransmitted;
  
  G4cout << "Energy Deposited == " << fEdep << G4endl;
  G4cout << "No. of Photons Absorbed == " <<TotalNumAbsorbed<< G4endl;
  G4cout << "No. of Photons Reflected == " <<TotalNumReflected<< G4endl;                                  
  G4cout << "No. of Photons Transmitted == " <<TotalNumTransmitted<< G4endl; 
  G4cout << "No. of Photons Detected == " << TotalNumDetected<< G4endl;
  G4cout << "Total no. of Photons == " << totalPhotons<< G4endl;
  
  G4cout<<"Photon Angle == "<< photonAngle<<G4endl;
  /*
  man->FillNtupleDColumn(1, 0, photonAngle);
  man->FillNtupleIColumn(1, 1, TotalNumAbsorbed);                                                                        
  man->FillNtupleIColumn(1, 2, TotalNumTransmitted);                                                                     
  man->FillNtupleIColumn(1, 3, TotalNumReflected);   
  man->AddNtupleRow(1);
  */
  
  man->FillNtupleDColumn(0, photonAngle);                                                                              
  man->FillNtupleIColumn(1, TotalNumAbsorbed);                                                                         
  man->FillNtupleIColumn(2, TotalNumTransmitted);                                                                      
  man->FillNtupleIColumn(3, TotalNumReflected);                                                                         
  man->AddNtupleRow(0);
  
  G4int totalSteps = mySteppingAction->GetStepCount();
  //  G4cout<<"TOTAL STEPS TAKEN BY PHOTON: "<<totalSteps<<G4endl;
  

   //  man->FillNtupleIColumn(3, currentEventID);
   //  man->AddNtupleRow(0);


   //  G4cout<<"CURRENT EVENT ID: "<<currentEventID<<G4endl;

   std::vector<G4String> volume = mySteppingAction->GetVolume();
   std::vector<G4int> stepNumbers = mySteppingAction->GetStepNumbers();
   std::vector<G4String> preStepVolume = mySteppingAction->GetPreStepVolume();
   std::vector<G4String> postStepVolume = mySteppingAction->GetPostStepVolume();
   
   for(size_t i = 0; i < volume.size(); ++i)
     {
       //G4cout<<"PRESTEP VOLUME NAMES: "<<preStepVolume[i]<<G4endl;
       //   G4cout<<"POSTSTEP VOLUME NAMES: "<<postStepVolume[i]<<G4endl;
       //  G4cout<<"EVENT ACTION VOLUME NAME: "<<volume[i]<<G4endl;
       //       G4cout<<"CORRESPONDING EVENTID: "<<currentEventID<<G4endl;

      if(volume[i] == "pmtGlassLogic")
	{
	  eventOnTop++;
	}
    }
   G4cout<<"EVENT ACTION TOTAL PHOTONS: "<<eventOnTop<<G4endl;
   /*
   man->FillNtupleIColumn(2, 0, totalSteps);
   man->FillNtupleIColumn(2, 1, currentEventID);
   man->FillNtupleIColumn(2, 2, eventOnTop);
   man->AddNtupleRow(2);


  for(size_t i = 0; i < preStepVolume.size(); ++i)
    {
      if(postStepVolume[i] == "innerReflector")
	{
	  
	  man->FillNtupleSColumn(2, 3, postStepVolume[i]);
	  man->AddNtupleRow(2);
	  //	  G4cout<<"PRESTEP VOLUME NAMES: "<<preStepVolume[i]<<G4endl;
	  //	  G4cout<<"POSTSTEP VOLUME NAMES: "<<postStepVolume[i]<<G4endl;

	}
    }
  preStepVolume.clear();
  postStepVolume.clear();        
   */



}

void MyEventAction::IncrementNumAbsorbed()
{
  NumAbsorbed++;
}

void MyEventAction::IncrementNumDetected()
{
  NumDetected++;
}

void MyEventAction::IncrementNumReflected()
{
  NumReflected++;
}

void MyEventAction::IncrementNumTransmitted()
{
  NumTransmitted++;
}

G4int MyEventAction::GetNumAbsorbed() const
{
  return NumAbsorbed;
}

G4int MyEventAction::GetNumDetected() const
{
  return NumDetected;
}

G4int MyEventAction::GetNumReflected() const
{
  return NumReflected;
}

G4int MyEventAction::GetNumTransmitted() const
{
  return NumTransmitted;
}

void MyEventAction::ResetCounters()
{
  TotalNumAbsorbed=0;
  TotalNumReflected=0;
  TotalNumTransmitted=0;
  TotalNumDetected=0;
  eventOnTop=0;

}
