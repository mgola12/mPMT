/*                                                                                                                        
Author:    Mohit Gola 10th July 2023                                                                                      
*/

#include "G4UImessenger.hh"
#include "G4UIcommand.hh"
#include "G4UIdirectory.hh"

class MyPrimaryGenerator;

class MyPrimaryGeneratorMessenger : public G4UImessenger
{
public:
  MyPrimaryGeneratorMessenger(MyPrimaryGenerator* generator);
  ~MyPrimaryGeneratorMessenger();

  void SetNewValue(G4UIcommand* command, G4String newValue);

private:
  G4UIdirectory* fGeneratorDir;
  G4UIcommand* fSetAngleCmd;
  G4UIcommand* fSetEnergyCmd;
  MyPrimaryGenerator* fGenerator;
};
