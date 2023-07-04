#include "event.hh"

MyEventAction::MyEventAction()
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
  totalPhotons =0.0;
  //  photonAngleCorrect = 0.0;
}

MyEventAction::~MyEventAction()
{}

void MyEventAction::BeginOfEventAction(const G4Event*)
{
  fEdep =0;
  NumAbsorbed=0;
  NumDetected=0;
  NumReflected=0;
  NumTransmitted=0;
  //  TotalNumAbsorbed=0;
}

void MyEventAction::EndOfEventAction(const G4Event*)
{
  TotalNumAbsorbed += NumAbsorbed;
  TotalNumReflected += NumReflected;
  TotalNumTransmitted += NumTransmitted;
  TotalNumDetected += NumDetected;
  //  G4int NumAbsorbed = GetNumAbsorbed();

  //  photonAngleCorrect = 3.1415926536 - photonAngle;
  totalPhotons = TotalNumAbsorbed + TotalNumReflected + TotalNumTransmitted;
  G4cout << "Energy Deposited == " << fEdep << G4endl;
  G4cout << "No. of Photons Absorbed == " <<TotalNumAbsorbed<< G4endl;
  G4cout << "No. of Photons Detected == " << TotalNumDetected<< G4endl;
  G4cout << "No. of Photons Reflected == " << TotalNumReflected<< G4endl;
  G4cout << "No. of Photons Transmitted == " << TotalNumTransmitted<< G4endl;
  G4cout << "Total no. of Photons == " << totalPhotons<< G4endl;
  
  G4cout<<"Photon Angle == "<< photonAngle<<G4endl;


  G4AnalysisManager *man = G4AnalysisManager::Instance();
  man->FillNtupleDColumn(0, photonAngle);
  man->FillNtupleIColumn(1, TotalNumAbsorbed);
  man->FillNtupleIColumn(2, TotalNumTransmitted);
  man->FillNtupleIColumn(3, TotalNumReflected);

  man->AddNtupleRow(0);

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
