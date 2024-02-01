/*
Author:    Mohit Gola 10th July 2023
*/

#include "MyPrimaryGeneratorMessenger.hh"
#include "generator.hh"

MyPrimaryGeneratorMessenger::MyPrimaryGeneratorMessenger(MyPrimaryGenerator* generator)
  : G4UImessenger(), fGenerator(generator)
{
  // Create a new directory for the /mygenerator commands
  fGeneratorDir = new G4UIdirectory("/mygenerator/");
  fGeneratorDir->SetGuidance("MyPrimaryGenerator control commands.");

  // Create the /mygenerator/setAngle command and add it to the generator directory
  fSetAngleCmd = new G4UIcommand("/mygenerator/SetAngle", this);
  fSetAngleCmd->SetGuidance("Set the angle in degrees.");

  fSetEnergyCmd = new G4UIcommand("/mygenerator/SetEnergy", this);
  fSetEnergyCmd->SetGuidance("Set the energy in eV");

  // Create and add the "angle" parameter to the /mygenerator/setAngle command
  G4UIparameter* angleParam = new G4UIparameter("angle", 'd', false);
  angleParam->SetDefaultValue(0.0);
  fSetAngleCmd->SetParameter(angleParam);
  fSetAngleCmd->AvailableForStates(G4State_PreInit, G4State_Idle);

  G4UIparameter* energyParam = new G4UIparameter("energy", 'd', false);
  energyParam->SetDefaultValue(4.9593);
  fSetEnergyCmd->SetParameter(energyParam);
  fSetEnergyCmd->AvailableForStates(G4State_PreInit, G4State_Idle);

}

MyPrimaryGeneratorMessenger::~MyPrimaryGeneratorMessenger()
{
  delete fSetAngleCmd;
  delete fGeneratorDir;
}

void MyPrimaryGeneratorMessenger::SetNewValue(G4UIcommand* command, G4String newValue)
{
  if (command == fSetAngleCmd)
    {
      // Parse the angle value and pass it to the generator
      G4double angle = G4UIcommand::ConvertToDouble(newValue);
      fGenerator->SetAngle(angle);
    }
  
  else if (command == fSetEnergyCmd)
    {
      G4double energy = G4UIcommand::ConvertToDouble(newValue);
      fGenerator->SetEnergy(energy);
    }
}

