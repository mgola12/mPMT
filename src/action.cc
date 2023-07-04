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
  SetUserAction(eventAction);

  MySteppingAction *steepingAction = new MySteppingAction(eventAction);
  SetUserAction(steepingAction);

  G4EventManager::GetEventManager()->SetUserAction(eventAction);

  MyRunAction *runAction = new MyRunAction();
  SetUserAction(runAction);
}
