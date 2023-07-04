#include "generator.hh"


MyPrimaryGenerator::MyPrimaryGenerator()
{
  fParticleGun = new G4ParticleGun(1);
  //  fParticleGun = new G4OpticalPhotonPolarizedGenerator();
}

MyPrimaryGenerator::~MyPrimaryGenerator()
{
  delete fParticleGun;
}

void MyPrimaryGenerator::GeneratePrimaries(G4Event *anEvent)
{
  
  G4cout<<"FOUND THE Optical Photon!!!\n"<<G4endl;
  G4ParticleTable *particleTable = G4ParticleTable::GetParticleTable();
  G4String particleName="opticalphoton";
  G4ParticleDefinition *particle = particleTable->FindParticle(particleName);

  //  G4double theta = 1.0*degree;

  G4ThreeVector initialPosition(0.0, 0.0, 36.0 * mm);

  // Define the desired angle in degrees                                                                                  
  double angleDegrees = 20.0;

  // Convert the angle to radians                                                                                         
  double angleRadians = angleDegrees * CLHEP::degree;

  // Define the target Z coordinate                                                                                       
  double targetZ = 35.903 * mm;

  // Calculate the difference in Z coordinates                                                                            
  double deltaZ = targetZ - initialPosition.z();

  // Calculate the new Y coordinate based on the angle and deltaZ                                                          
  double newY = initialPosition.y() + deltaZ * std::tan(angleRadians);

  // Create the new position vector                                                                                       
  G4ThreeVector newPosition(initialPosition.x(), newY, initialPosition.z());

  // Calculate the direction vector towards the point (0, 0, 35.903)                                                        
  G4ThreeVector direction = (G4ThreeVector(0.0, 0.0, targetZ) - newPosition).unit();
  // Print the new position and direction                                                                                  
  G4cout << "New Position: (" << newPosition.x() / mm << ", " << newPosition.y() / mm << ", " << newPosition.z() / mm << ")mm" << G4endl;

  G4cout << "Direction: (" << direction.x() << ", " << direction.y() << ", " << direction.z() << ")" << G4endl;


  //  G4ThreeVector direction(1.,1.,-1.);
  //  G4ThreeVector direction(std::sin(theta),0.,-std::cos(theta));
  //  G4ThreeVector direction(std::sin(angleDegrees),0.,-std::cos(angleDegrees));
  //  Direction = direction.unit();

  //  direction.rotateY(-newAngle);


  //  G4ThreeVector position(0,0,40*mm); 

  G4double  particleEnergy = 2.47999*eV;



  //  G4ThreeVector polarization(0.,0.,1.);

  fParticleGun->SetParticleDefinition(particle);
  //  fParticleGun->SetParticlePolarization(polarization);
  //  fParticleGun->SetParticleMomentumDirection(G4ThreeVector(0,0,-1));
  fParticleGun->SetParticleMomentumDirection(direction);
  fParticleGun->SetParticleEnergy(particleEnergy);
  //  fParticleGun->SetParticlePosition(position);
  fParticleGun->SetParticlePosition(newPosition);

  G4PrimaryVertex* vertex = new G4PrimaryVertex(newPosition, 0.0);
  G4PrimaryParticle* primary = new G4PrimaryParticle(particle);
  
  G4ThreeVector momentun = direction * particleEnergy;

  //  primary->SetMomentum(momentun.x(), momentun.y(), momentun.z());
  //  primary->SetPolarizarion(0.,0.,1.);
  //  primary->SetPolarization(polarization.x(), polarization.y(), polarization.z());

  vertex->SetPrimary(primary);
  //  anEvent->AddPrimaryVertex(vertex);
  G4double checkEnergy = fParticleGun->GetParticleEnergy();
  G4cout<<"PARTICLE ENERGY IS:  "<<checkEnergy<<G4endl;
  G4cout<<"GENERATED THE OPTICAL PHOTON!!!\n"<<G4endl;
  
  fParticleGun->GeneratePrimaryVertex(anEvent);
}
