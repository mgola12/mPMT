/*                                                                                                                       
Author:    Mohit Gola 10th July 2023                                                                                      
*/

#ifndef CONSTRUCTMULTIPMT_HH
#define CONSTRUCTMULTIPMT_HH

#include "G4VUserDetectorConstruction.hh"
#include "G4LogicalVolume.hh"
#include "G4VPhysicalVolume.hh"
#include "G4OpticalSurface.hh"
#include "G4LogicalBorderSurface.hh"
#include "G4LogicalSkinSurface.hh"

class ConstructMultiPMT : public G4VUserDetectorConstruction {
public:
  ConstructMultiPMT();
  virtual ~ConstructMultiPMT();

  G4VPhysicalVolume* Construct();
  //  G4VPhysicalVolume* GetTopPhysical(G4LogicalVolume*);
private:
  G4double a;
  G4double density;
};

#endif
