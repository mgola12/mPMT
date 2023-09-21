/*                                                                                                                         
Author:    Mohit Gola 10th July 2023                                                                                       
*/

#include "action.hh"


MyActionInitialization::MyActionInitialization()
{}

MyActionInitialization::~MyActionInitialization()
{}

void MyActionInitialization::Build() const
{
  MyPrimaryGenerator *generator = new MyPrimaryGenerator();
  SetUserAction(generator);

  MyEventAction *eventAction = new MyEventAction();
  MySteppingAction *steepingAction = new MySteppingAction();

  steepingAction->SetEventAction(eventAction);
  eventAction->SetSteppingAction(steepingAction);

  G4EventManager::GetEventManager()->SetUserAction(eventAction);

  G4RunManager* runManager = G4RunManager::GetRunManager();
  runManager->SetUserAction(steepingAction);
  runManager->SetUserAction(eventAction);

  MyRunAction *runAction = new MyRunAction();
  SetUserAction(runAction);
}
