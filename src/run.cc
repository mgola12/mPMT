#include "run.hh"

MyRunAction::MyRunAction()
{}

MyRunAction::~MyRunAction()
{}

void MyRunAction::BeginOfRunAction(const G4Run*)
{
  G4AnalysisManager *man = G4AnalysisManager::Instance();

  man->OpenFile("output.root");
  
  man->CreateNtuple("Photons", "Photons");
  man->CreateNtupleDColumn("Angle");
  man->CreateNtupleIColumn("Absorbed");
  man->CreateNtupleIColumn("Transmitted");
  man->CreateNtupleIColumn("Reflected");
  man->FinishNtuple(0);

  
}

void MyRunAction::EndOfRunAction(const G4Run*)
{
  G4AnalysisManager *man = G4AnalysisManager::Instance();

  man->Write();
  man->CloseFile();
}
