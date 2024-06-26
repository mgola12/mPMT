/*                     
Author:    Mohit Gola 22nd February 2024 
*/

#ifndef INSITUPMT_HH
#define INSITUPMT_HH

#include "G4VUserDetectorConstruction.hh"
#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"
#include "G4SystemOfUnits.hh"
#include "G4Polycone.hh"
#include "G4Sphere.hh"
#include "G4UnionSolid.hh"
#include "G4Cons.hh"
#include "G4Tubs.hh"
#include "G4Torus.hh"
#include "G4Transform3D.hh"
#include "G4VisAttributes.hh"
#include "G4Color.hh"
#include "G4SubtractionSolid.hh"
#include "G4BooleanSolid.hh"
#include "G4IntersectionSolid.hh"
#include "G4Material.hh"
#include "G4SDManager.hh"
#include "mysteppingaction.hh"
#include "G4UserLimits.hh"
#include "G4EventManager.hh"
#include "G4RunManager.hh"
#include "action.hh"
#include "G4Region.hh"
#include "G4VUserRegionInformation.hh"
#include "G4OpticalSurface.hh"
#include "G4LogicalBorderSurface.hh"
#include <cmath>
#include "G4SystemOfUnits.hh"
#include "G4PhysicalConstants.hh"
#include "WCSimTuningParameters.hh"
#include "WCSimTuningMessenger.hh"

class WCSimTuningParameters;

class inSituPMTConstruction : public G4VUserDetectorConstruction
{
public:
  inSituPMTConstruction(G4int DetConfig, WCSimTuningParameters* WCSimTuningPars);
  ~inSituPMTConstruction();

  G4LogicalVolume *ConstructioninSituPMT();
  virtual G4VPhysicalVolume *Construct();


private:
  G4VSolid* combineSolid2;
  G4LogicalVolume* pmtConstructionLogic;
  G4double density;
  G4double a;
  WCSimTuningParameters* WCSimTuningParams;
  G4int myConfiguration;


};



#endif
