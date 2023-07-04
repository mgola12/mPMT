#ifndef ACTION_HH
#define ACTION_HH

#include "G4VUserActionInitialization.hh"
#include "G4EventManager.hh"

#include "generator.hh"
#include "mysteppingaction.hh"
#include "event.hh"
#include "run.hh"

class MyActionInitialization : public G4VUserActionInitialization
{
public:
  MyActionInitialization();
  virtual ~MyActionInitialization();

  virtual void Build() const;
private:
  //  UserSteppingAction* fSteppingAction;
};

#endif
