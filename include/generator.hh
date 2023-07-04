#ifndef GENERATOR_HH
#define GENERATOR_HH

#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
#include "G4SystemOfUnits.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4PrimaryParticle.hh"
#include "G4PrimaryVertex.hh"
#include "G4RandomDirection.hh"
#include "Randomize.hh"
#include "G4Event.hh"
#include "G4OpticalPhoton.hh"
#include "g4root.hh"
#include "G4DynamicParticle.hh"

class MyPrimaryGenerator : public G4VUserPrimaryGeneratorAction
{
public:
  MyPrimaryGenerator();
  ~MyPrimaryGenerator();

  virtual void GeneratePrimaries(G4Event*);
  G4ThreeVector calculateNewPositionAndAngle(const G4ThreeVector& initialPosition, double initialAngle,
				    G4ThreeVector& newPosition, double& newAngle);

private:
  G4ParticleGun *fParticleGun;
};

#endif
