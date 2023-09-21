/*
Author:    Mohit Gola 10th July 2023
*/

#include "constructMultiPMT.hh"
#include "construction.hh"
#include "WCSimTuningParameters.hh"
#include <string>
#include <sstream>
ConstructMultiPMT::ConstructMultiPMT() {}

ConstructMultiPMT::~ConstructMultiPMT() {}

G4VPhysicalVolume* ConstructMultiPMT::Construct() {
  
  G4double pmtGlassRadius = 51.0*mm;
  G4double pmtGlassThickness = 2.0*mm;

  ///////////////////construct material/////////////////////
  G4NistManager *nist = G4NistManager::Instance();
  G4Material *Air = nist->FindOrBuildMaterial("G4_AIR");

  /////////////////////Aluminum///////////////////

  a = 26.98*g/mole;
  G4Element* elAl = new G4Element("Aluminum", "Al", 13, a);

  density = 2.7*g/cm3;
  G4Material* Aluminum
    = new G4Material("Aluminum",density,1);
  Aluminum->AddElement(elAl, 1);

  ///////////////////////Silica Gel///////////////////////
  a = 28.09*g/mole;
  G4Element* elSi = new G4Element("Silicon", "Si", 14., a);

  density = 0.98*g/cm3;
  G4Material *SilGel
    = new G4Material("SilGel",density,1);
  SilGel->AddElement(elSi, 1);

  //////////////////////Material Properties////////////////

  const G4int NUMENTRIES_ref = 501;

  G4double ENERGY_ref[NUMENTRIES_ref] = { 1.7712e-09, 1.77374e-09, 1.77628e-09, 1.77883e-09, 1.78138e-09, 1.78395e-09, 
					  1.78652e-09, 1.78909e-09, 1.79168e-09, 1.79427e-09, 1.79687e-09, 1.79948e-09, 
					  1.8021e-09, 1.80472e-09, 1.80735e-09, 1.80999e-09, 1.81263e-09, 1.81529e-09, 
					  1.81795e-09, 1.82062e-09, 1.8233e-09, 1.82598e-09, 1.82868e-09, 1.83138e-09, 
					  1.83409e-09, 1.8368e-09, 1.83953e-09, 1.84226e-09, 1.845e-09, 1.84775e-09, 
					  1.85051e-09, 1.85328e-09, 1.85605e-09, 1.85883e-09, 1.86162e-09, 1.86442e-09, 
					  1.86723e-09, 1.87005e-09, 1.87287e-09, 1.87571e-09, 1.87855e-09, 1.8814e-09, 
					  1.88426e-09, 1.88713e-09, 1.89e-09, 1.89289e-09, 1.89578e-09, 1.89869e-09, 
					  1.9016e-09, 1.90452e-09, 1.90745e-09, 1.91039e-09, 1.91334e-09, 1.91629e-09, 
					  1.91926e-09, 1.92224e-09, 1.92522e-09, 1.92821e-09, 1.93122e-09, 1.93423e-09, 
					  1.93725e-09, 1.94028e-09, 1.94333e-09, 1.94638e-09, 1.94944e-09, 1.95251e-09, 
					  1.95559e-09, 1.95868e-09, 1.96178e-09, 1.96488e-09, 1.968e-09, 1.97113e-09, 
					  1.97427e-09, 1.97742e-09, 1.98058e-09, 1.98375e-09, 1.98693e-09, 1.99012e-09, 
					  1.99332e-09, 1.99652e-09, 1.99975e-09, 2.00298e-09, 2.00622e-09, 2.00947e-09, 
					  2.01273e-09, 2.016e-09, 2.01929e-09, 2.02258e-09, 2.02589e-09, 2.0292e-09, 
					  2.03253e-09, 2.03587e-09, 2.03921e-09, 2.04257e-09, 2.04594e-09, 2.04933e-09, 
					  2.05272e-09, 2.05612e-09, 2.05954e-09, 2.06297e-09, 2.0664e-09, 2.06985e-09, 
					  2.07331e-09, 2.07679e-09, 2.08027e-09, 2.08377e-09, 2.08728e-09, 2.0908e-09, 
					  2.09433e-09, 2.09787e-09, 2.10143e-09, 2.10499e-09, 2.10857e-09, 2.11217e-09, 
					  2.11577e-09, 2.11939e-09, 2.12302e-09, 2.12666e-09, 2.13031e-09, 2.13398e-09, 
					  2.13766e-09, 2.14135e-09, 2.14506e-09, 2.14877e-09, 2.1525e-09, 2.15625e-09, 
					  2.16e-09, 2.16377e-09, 2.16756e-09, 2.17135e-09, 2.17516e-09, 2.17898e-09, 
					  2.18282e-09, 2.18667e-09, 2.19053e-09, 2.19441e-09, 2.1983e-09, 2.20221e-09, 
					  2.20612e-09, 2.21006e-09, 2.214e-09, 2.21796e-09, 2.22194e-09, 2.22593e-09, 
					  2.22993e-09, 2.23395e-09, 2.23798e-09, 2.24203e-09, 2.24609e-09, 2.25017e-09, 
					  2.25426e-09, 2.25836e-09, 2.26249e-09, 2.26662e-09, 2.27077e-09, 2.27494e-09, 
					  2.27912e-09, 2.28332e-09, 2.28753e-09, 2.29176e-09, 2.296e-09, 2.30026e-09, 
					  2.30454e-09, 2.30883e-09, 2.31314e-09, 2.31746e-09, 2.3218e-09, 2.32616e-09, 
					  2.33053e-09, 2.33492e-09, 2.33932e-09, 2.34375e-09, 2.34819e-09, 
					  2.35264e-09, 2.35711e-09, 2.3616e-09, 2.36611e-09, 2.37063e-09, 2.37518e-09, 
					  2.37974e-09, 2.38431e-09, 2.38891e-09, 2.39352e-09, 2.39815e-09, 2.40279e-09, 
					  2.40746e-09, 2.41214e-09, 2.41685e-09, 2.42157e-09, 2.42631e-09, 2.43106e-09, 
					  2.43584e-09, 2.44063e-09, 2.44545e-09, 2.45028e-09, 2.45513e-09, 2.46e-09, 
					  2.46489e-09, 2.4698e-09, 2.47473e-09, 2.47968e-09, 2.48465e-09, 2.48964e-09, 
					  2.49465e-09, 2.49968e-09, 2.50473e-09, 2.5098e-09, 2.51489e-09, 2.52e-09, 
					  2.52514e-09, 2.53029e-09, 2.53546e-09, 2.54066e-09, 2.54588e-09, 2.55112e-09, 
					  2.55638e-09, 2.56166e-09, 2.56696e-09, 2.57229e-09, 2.57763e-09, 2.583e-09, 
					  2.5884e-09, 2.59381e-09, 2.59925e-09, 2.60471e-09, 2.61019e-09, 2.6157e-09, 
					  2.62123e-09, 2.62678e-09, 2.63236e-09, 2.63796e-09, 2.64359e-09, 2.64924e-09, 
					  2.65491e-09, 2.66061e-09, 2.66633e-09, 2.67207e-09, 2.67784e-09, 2.68364e-09, 
					  2.68946e-09, 2.69531e-09, 2.70118e-09, 2.70708e-09, 2.713e-09, 2.71895e-09, 
					  2.72493e-09, 2.73093e-09, 2.73696e-09, 2.74301e-09, 2.7491e-09, 2.7552e-09, 
					  2.76134e-09, 2.7675e-09, 2.7737e-09, 2.77991e-09, 2.78616e-09, 2.79244e-09, 
					  2.79874e-09, 2.80507e-09, 2.81143e-09, 2.81782e-09, 2.82424e-09, 2.83069e-09, 
					  2.83717e-09, 2.84367e-09, 2.85021e-09, 2.85678e-09, 2.86338e-09, 2.87e-09, 
					  2.87666e-09, 2.88335e-09, 2.89007e-09, 2.89683e-09, 2.90361e-09, 2.91043e-09, 
					  2.91728e-09, 2.92416e-09, 2.93107e-09, 2.93801e-09, 2.94499e-09, 2.952e-09, 
					  2.95905e-09, 2.96613e-09, 2.97324e-09, 2.98039e-09, 2.98757e-09, 2.99479e-09, 
					  3.00204e-09, 3.00933e-09, 3.01665e-09, 3.024e-09, 3.0314e-09, 3.03883e-09, 
					  3.04629e-09, 3.0538e-09, 3.06134e-09, 3.06892e-09, 3.07653e-09, 3.08418e-09, 
					  3.09188e-09, 3.0996e-09, 3.10737e-09, 3.11518e-09, 3.12303e-09, 3.13091e-09, 
					  3.13884e-09, 3.14681e-09, 3.15481e-09, 3.16286e-09, 3.17095e-09, 3.17908e-09, 
					  3.18725e-09, 3.19547e-09, 3.20373e-09, 3.21203e-09, 3.22037e-09, 3.22876e-09, 
					  3.23719e-09, 3.24566e-09, 3.25418e-09, 3.26274e-09, 3.27135e-09, 3.28001e-09, 
					  3.28871e-09, 3.29745e-09, 3.30625e-09, 3.31509e-09, 3.32397e-09, 3.33291e-09, 
					  3.34189e-09, 3.35092e-09, 3.36001e-09, 3.36914e-09, 3.37832e-09, 3.38755e-09, 
					  3.39683e-09, 3.40616e-09, 3.41554e-09, 3.42498e-09, 3.43447e-09, 3.44401e-09, 
					  3.4536e-09, 3.46325e-09, 3.47295e-09, 3.4827e-09, 3.49251e-09, 3.50238e-09, 
					  3.5123e-09, 3.52228e-09, 3.53231e-09, 3.54241e-09, 3.55256e-09, 3.56276e-09, 
					  3.57303e-09, 3.58336e-09, 3.59374e-09, 3.60419e-09, 3.6147e-09, 3.62527e-09, 
					  3.6359e-09, 3.64659e-09, 3.65735e-09, 3.66817e-09, 3.67906e-09, 3.69001e-09, 
					  3.70102e-09, 3.7121e-09, 3.72325e-09, 3.73446e-09, 3.74575e-09, 3.7571e-09, 
					  3.76852e-09, 3.78001e-09, 3.79157e-09, 3.8032e-09, 3.8149e-09, 3.82667e-09, 
					  3.83852e-09, 3.85044e-09, 3.86244e-09, 3.87451e-09, 3.88665e-09, 3.89887e-09, 
					  3.91117e-09, 3.92355e-09, 3.93601e-09, 3.94854e-09, 3.96116e-09, 3.97385e-09, 
					  3.98663e-09, 3.99949e-09, 4.01243e-09, 4.02546e-09, 4.03857e-09, 4.05177e-09, 
					  4.06506e-09, 4.07843e-09, 4.09189e-09, 4.10544e-09, 4.11908e-09, 4.13281e-09, 
					  4.14663e-09, 4.16054e-09, 4.17455e-09, 4.18866e-09, 4.20285e-09, 4.21715e-09, 
					  4.23154e-09, 4.24603e-09, 4.26063e-09, 4.27532e-09, 4.29011e-09, 4.30501e-09, 
					  4.32001e-09, 4.33511e-09, 4.35032e-09, 4.36564e-09, 4.38107e-09, 4.3966e-09, 
					  4.41225e-09, 4.42801e-09, 4.44388e-09, 4.45986e-09, 4.47596e-09, 4.49218e-09, 
					  4.50852e-09, 4.52497e-09, 4.54155e-09, 4.55824e-09, 4.57506e-09, 4.59201e-09, 
					  4.60908e-09, 4.62628e-09, 4.6436e-09, 4.66106e-09, 4.67865e-09, 4.69637e-09, 
					  4.71423e-09, 4.73222e-09, 4.75035e-09, 4.76862e-09, 4.78703e-09, 4.80559e-09, 
					  4.82429e-09, 4.84313e-09, 4.86213e-09, 4.88127e-09, 4.90056e-09, 4.92001e-09, 
					  4.93961e-09, 4.95937e-09, 4.97929e-09, 4.99936e-09, 5.0196e-09, 5.04001e-09, 
					  5.06058e-09, 5.08132e-09, 5.10223e-09, 5.12331e-09, 5.14457e-09, 5.16601e-09, 
					  5.18762e-09, 5.20942e-09, 5.2314e-09, 5.25357e-09, 5.27592e-09, 5.29847e-09, 
					  5.32121e-09, 5.34415e-09, 5.36728e-09, 5.39062e-09, 5.41416e-09, 5.4379e-09, 
					  5.46186e-09, 5.48603e-09, 5.51041e-09, 5.53501e-09, 5.55983e-09, 5.58487e-09, 
					  5.61014e-09, 5.63565e-09, 5.66138e-09, 5.68735e-09, 5.71356e-09, 5.74001e-09, 
					  5.76671e-09, 5.79365e-09, 5.82085e-09, 5.84831e-09, 5.87603e-09, 5.90401e-09, 
					  5.93226e-09, 5.96078e-09, 5.98957e-09, 6.01865e-09, 6.04801e-09, 6.07766e-09, 
					  6.1076e-09, 6.13783e-09, 6.16837e-09, 6.19921e-09 };

  G4double REFLECTIVITY_ref[NUMENTRIES_ref] = { 91.867018, 91.878821, 91.909624, 91.933169, 91.975042, 91.994669, 
						92.023845, 92.05233, 92.04163, 92.116707, 92.116159, 92.172474, 92.190017, 
						92.18805, 92.234936, 92.254988, 92.28962, 92.306398, 92.334575, 92.357688, 
						92.381986, 92.396137, 92.430164, 92.448784, 92.465907, 92.492628, 
						92.514583, 92.564694, 92.586161, 92.585568, 92.609252, 92.623107, 
						92.653067, 92.670681, 92.69944, 92.71874, 92.74472, 92.735985, 92.774786, 
						92.797425, 92.77678, 92.83881, 92.882547, 92.886619, 92.880202, 92.926185, 
						92.91282, 92.941198, 92.97765, 92.971139, 93.010272, 93.005497, 93.035958, 
						93.064111, 93.085596, 93.108483, 93.1252, 93.113579, 93.144708, 93.159892, 
						93.169539, 93.167694, 93.210855, 93.221407, 93.229929, 93.217626, 
						93.261842, 93.267996, 93.28614, 93.305264, 93.279379, 93.313851, 93.334877,
						93.357556, 93.384519, 93.398249, 93.397436, 93.41664, 93.426486, 93.431823,
						93.442491, 93.463716, 93.500783, 93.516479, 93.504207, 93.518962, 
						93.530918, 93.544686, 93.560372, 93.582261, 93.591123, 93.591639, 
						93.596435, 93.605721, 93.621836, 93.639598, 93.625838, 93.65027, 93.679588,
						93.701544, 93.727586, 93.736008, 93.731122, 93.730506, 93.732266, 
						93.737014, 93.732351, 93.745206, 93.774816, 93.792166, 93.81091, 93.814387,
						93.829906, 93.835502, 93.849515, 93.874573, 93.87148, 93.837158, 93.857773,
						93.88873, 93.908168, 93.917556, 93.931774, 93.956124, 93.966123, 93.963233,
						93.975599, 93.985593, 93.976342, 93.978551, 94.003286, 94.02512, 94.037606,
						94.037748, 94.046234, 94.061184, 94.085374, 94.105208, 94.130384, 
						94.116635, 94.085321, 94.089851, 94.08085, 94.080903, 94.106384, 94.120388,
						94.128558, 94.128922, 94.135115, 94.1421, 94.151582, 94.165153, 94.178154,
						94.191268, 94.201176, 94.197218, 94.199962, 94.206345, 94.217231, 
						94.216899, 94.229288, 94.235705, 94.232253, 94.245712, 94.255995, 
						94.256122, 94.258842, 94.26191, 94.280816, 94.29058, 94.279921, 94.27562, 
						94.297274, 94.310444, 94.316056, 94.319721, 94.326782, 94.322525, 
						94.329357, 94.328025, 94.330324, 94.323669, 94.327122, 94.343237, 
						94.336868, 94.333659, 94.338033, 94.356735, 94.368169, 94.355407, 
						94.343574, 94.340561, 94.336776, 94.315306, 94.281768, 94.247779, 
						94.216414, 94.205492, 94.147018, 94.064085, 93.994456, 93.916984, 
						93.853796, 93.763506, 93.648232, 93.582235, 93.517931, 93.426367, 
						93.344305, 93.276234, 93.235772, 93.186943, 93.167268, 93.151248, 
						93.126298, 93.117566, 93.152638, 93.196265, 93.244511, 93.297256, 
						93.351183, 93.386929, 93.437783, 93.48046, 93.489035, 93.494792, 
						93.507843, 93.521117, 93.50747, 93.552294, 93.569038, 93.554846, 
						93.54536, 93.516454, 93.517806, 93.50129, 93.488663, 93.41786, 93.334727, 
						93.31322, 93.240218, 93.156117, 93.03463, 92.941609, 92.819197, 92.743487, 
						92.660401, 92.548155, 92.433372, 92.295113, 92.23734, 92.134051, 92.041279,
						91.948048, 91.850696, 91.834416, 91.77905, 91.734713, 91.697977, 91.68431, 
						91.645102, 91.564356, 91.502549, 91.471914, 91.375934, 91.319727, 91.25141,
						91.194892, 91.117668, 91.025524, 90.978327, 90.90553, 90.788165, 90.687478,
						90.599473, 90.530206, 90.407009, 90.329717, 90.225505, 90.110879, 
						90.013234, 89.890837, 89.790649, 89.661338, 89.520829, 89.373676, 
						89.26066, 89.094177, 88.966278, 88.799792, 88.655118, 88.49559, 88.305646, 
						88.077914, 87.912389, 87.69281, 87.467818, 87.275388, 87.031673, 86.773113,
						86.518416, 86.211943, 85.960268, 85.638584, 85.344267, 85.031389, 
						84.651235, 84.253471, 83.843647, 83.438015, 82.99535, 82.52885, 82.069422,
						81.525201, 80.920414, 80.305407, 79.638057, 78.943532, 78.211256, 
						77.434004, 76.559918, 75.566542, 73.961647, 72.914792, 71.985872, 
						71.870066, 70.170831, 67.919187, 66.317085, 64.606509, 62.820679, 
						60.919403, 58.910818, 56.816265, 54.628183, 52.432657, 50.238826, 
						48.064867, 46.011777, 44.105821, 42.452535, 41.061547, 39.954065, 
						39.17797, 38.732376, 38.664667, 38.903143, 39.417775, 40.172204, 
						41.096687, 42.153995, 43.298425, 44.4908, 45.674237, 46.857062, 47.960048, 
						49.011047, 50.008499, 50.912678, 51.714986, 52.463473, 53.124773, 
						53.694391, 54.214078, 54.641626, 54.989054, 55.281175, 55.503411, 
						55.669049, 55.809089, 55.879853, 55.877649, 55.851489, 55.789731, 
						55.664089, 55.494965, 55.270052, 55.014417, 54.72109, 54.343811, 
						53.96432, 53.571113, 53.331219, 53.202828, 52.733801, 52.234025, 51.71219, 
						51.148939, 50.605254, 50.016304, 49.404896, 48.785501, 48.143283, 
						47.467895, 46.746983, 46.018764, 45.290908, 44.542634, 43.792217, 43.04205,
						42.264221, 41.504135, 40.76822, 40.020852, 39.292485, 38.603477, 37.930307,
						37.291234, 36.670246, 36.064879, 35.528691, 35.01708, 34.529849, 34.082121,
						33.655095, 33.245391, 32.863984, 32.495056, 32.138775, 31.821843, 
						31.533121, 31.223797, 30.9226, 30.649842, 30.38037, 30.125075, 29.874417, 
						29.637182, 29.410163, 29.184399, 28.967887, 28.748432, 28.537412, 
						28.336286, 28.142074, 27.952112, 27.763106, 27.554904, 27.355905, 
						27.163331, 26.961636, 26.755006, 26.539136, 26.322431, 26.095423, 
						25.867645, 25.637042, 25.402191, 25.155426, 24.900057, 24.639498, 
						24.353394, 24.069377, 23.78243, 23.489127, 23.185162, 22.876163, 22.581776,
						22.300379, 22.014197, 21.738425, 21.477526, 21.218674, 20.982489, 
						20.741723, 20.509995, 20.28618, 20.063595, 19.845714, 19.625256, 19.407225,
						19.188555, 18.965879, 18.715538, 18.485834, 18.247306, 17.989033, 
						17.730006,17.47415, 17.203123, 16.93376, 16.6481, 16.36511, 16.081017, 
						15.78858, 15.510825, 15.234954, 14.960043, 14.689829, 14.43013, 14.181921, 
						13.937926, 13.699244, 13.469614, 13.258739, 13.064613, 12.895495, 
						12.757626, 12.645281, 12.563377, 12.518963};


  const G4int NUMENTRIES_water=60;
  const G4int NUM = 2;

  G4double RINDEX_SilGel[NUMENTRIES_water] =
    {1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404,
     1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404,
     1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404,
     1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404,
     1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404,
     1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404, 1.404};
  
  G4double ENERGY_SilGel[18] = { .1*eV,
				 2.034*eV,2.13*eV,2.18*eV,2.22*eV,2.25*eV,2.3*eV,
				 2.34*eV, 2.43*eV, 2.53*eV, 2.67*eV, 2.79*eV,
				 3.1*eV, 3.28*eV, 3.56*eV, 3.77*eV,4.136*eV, 7.*eV};
  
  G4double ABSORPTION_SilGel[18] = { 0*m,
				     .975*m, .975*m, .966*m, .935*m, .890*m, .898*m,
				     .876*m, .844*m, .786*m, .727*m,  .674*m,
				     .566*m, .485*m, .360*m, .220*m, .220*m, 0*m };
  
  G4double RAYFF = 0.75;
  G4double RAYLEIGH_water[NUMENTRIES_water] = {
    386929*cm*RAYFF,  366249*cm*RAYFF,  346398*cm*RAYFF,  327355*cm*RAYFF,  309097*cm*RAYFF,
    291603*cm*RAYFF,  274853*cm*RAYFF,  258825*cm*RAYFF,  243500*cm*RAYFF,  228856*cm*RAYFF,
    214873*cm*RAYFF,  201533*cm*RAYFF,  188816*cm*RAYFF,  176702*cm*RAYFF,  165173*cm*RAYFF,
    154210*cm*RAYFF,  143795*cm*RAYFF,  133910*cm*RAYFF,  124537*cm*RAYFF,  115659*cm*RAYFF,
    107258*cm*RAYFF, 99318.2*cm*RAYFF, 91822.2*cm*RAYFF,   84754*cm*RAYFF, 78097.3*cm*RAYFF,
    71836.5*cm*RAYFF,   65956*cm*RAYFF, 60440.6*cm*RAYFF, 55275.4*cm*RAYFF, 50445.6*cm*RAYFF,
    45937*cm*RAYFF, 41735.2*cm*RAYFF, 37826.6*cm*RAYFF, 34197.6*cm*RAYFF, 30834.9*cm*RAYFF,
    27725.4*cm*RAYFF, 24856.6*cm*RAYFF, 22215.9*cm*RAYFF, 19791.3*cm*RAYFF, 17570.9*cm*RAYFF,
    15543*cm*RAYFF, 13696.6*cm*RAYFF, 12020.5*cm*RAYFF, 10504.1*cm*RAYFF, 9137.15*cm*RAYFF,
    7909.45*cm*RAYFF,  6811.3*cm*RAYFF, 5833.25*cm*RAYFF,  4966.2*cm*RAYFF, 4201.36*cm*RAYFF,
    3530.28*cm*RAYFF, 2944.84*cm*RAYFF, 2437.28*cm*RAYFF, 2000.18*cm*RAYFF,  1626.5*cm*RAYFF,
    1309.55*cm*RAYFF, 1043.03*cm*RAYFF, 821.016*cm*RAYFF,  637.97*cm*RAYFF, 488.754*cm*RAYFF
  };
  
  G4double ENERGY_water[NUMENTRIES_water] =
    { 1.56962e-09*GeV, 1.58974e-09*GeV, 1.61039e-09*GeV, 1.63157e-09*GeV,
      1.65333e-09*GeV, 1.67567e-09*GeV, 1.69863e-09*GeV, 1.72222e-09*GeV,
      1.74647e-09*GeV, 1.77142e-09*GeV, 1.7971e-09*GeV, 1.82352e-09*GeV,
      1.85074e-09*GeV, 1.87878e-09*GeV, 1.90769e-09*GeV, 1.93749e-09*GeV,
      1.96825e-09*GeV, 1.99999e-09*GeV, 2.03278e-09*GeV, 2.06666e-09*GeV,
      2.10169e-09*GeV, 2.13793e-09*GeV, 2.17543e-09*GeV, 2.21428e-09*GeV,
      2.25454e-09*GeV, 2.29629e-09*GeV, 2.33962e-09*GeV, 2.38461e-09*GeV,
      2.43137e-09*GeV, 2.47999e-09*GeV, 2.53061e-09*GeV, 2.58333e-09*GeV,
      2.63829e-09*GeV, 2.69565e-09*GeV, 2.75555e-09*GeV, 2.81817e-09*GeV,
      2.88371e-09*GeV, 2.95237e-09*GeV, 3.02438e-09*GeV, 3.09999e-09*GeV,
      3.17948e-09*GeV, 3.26315e-09*GeV, 3.35134e-09*GeV, 3.44444e-09*GeV,
      3.54285e-09*GeV, 3.64705e-09*GeV, 3.75757e-09*GeV, 3.87499e-09*GeV,
      3.99999e-09*GeV, 4.13332e-09*GeV, 4.27585e-09*GeV, 4.42856e-09*GeV,
      4.59258e-09*GeV, 4.76922e-09*GeV, 4.95999e-09*GeV, 5.16665e-09*GeV,
      5.39129e-09*GeV, 5.63635e-09*GeV, 5.90475e-09*GeV, 6.19998e-09*GeV };

  G4double RINDEX_blacksheet[NUM] =
    { 1.6, 1.6 };
  
  G4double PP[NUM] = { 1.4E-9*GeV,6.2E-9*GeV};
  
  G4double SPECULARLOBECONSTANT[NUM] =
    { 0.3, 0.3 };
  
  G4double SPECULARSPIKECONSTANT[NUM] =
    { 0.2, 0.2 };
  
  G4double BACKSCATTERCONSTANT[NUM] =
    { 0.2, 0.2 };
  
  G4double BSRFF = 2.50;
  G4double REFLECTIVITY_blacksheet[NUMENTRIES_water] =
    { 0.055*BSRFF, 0.055*BSRFF,
      0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF,
      0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF,
      0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF,
      0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF,
      0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF,
      0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF,
      0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF, 0.055*BSRFF,
      0.055*BSRFF, 0.057*BSRFF, 0.059*BSRFF, 0.060*BSRFF,
      0.059*BSRFF, 0.058*BSRFF, 0.057*BSRFF, 0.055*BSRFF,
      0.050*BSRFF, 0.045*BSRFF, 0.045*BSRFF, 0.045*BSRFF,
      0.045*BSRFF, 0.045*BSRFF, 0.045*BSRFF, 0.045*BSRFF,
      0.045*BSRFF, 0.045*BSRFF, 0.045*BSRFF, 0.045*BSRFF,
      0.045*BSRFF, 0.045*BSRFF, 0.045*BSRFF, 0.045*BSRFF,
      0.045*BSRFF, 0.045*BSRFF, 0.045*BSRFF, 0.045*BSRFF,
      0.045*BSRFF, 0.045*BSRFF };
  
  G4double EFFICIENCY_blacksheet[NUMENTRIES_water] =
   { 0.0 };
  
  G4MaterialPropertiesTable *SilGelPropTable = new G4MaterialPropertiesTable();
  SilGelPropTable->AddProperty("RINDEX", ENERGY_water, RINDEX_SilGel, NUMENTRIES_water);
  SilGelPropTable->AddProperty("ABSLENGTH",ENERGY_SilGel, ABSORPTION_SilGel, 18); //ToDo: get measurement of optical properties of the optical gel. From slides: better than 40cm above 350nm.                                                          
  SilGelPropTable->AddProperty("RAYLEIGH",ENERGY_water,RAYLEIGH_water,NUMENTRIES_water); //ToDo: get actual Rayleigh scattering in gel                                                                                                                
  SilGel->SetMaterialPropertiesTable(SilGelPropTable);

  G4MaterialPropertiesTable *myST1 = new G4MaterialPropertiesTable();
  myST1->AddProperty("RINDEX", ENERGY_water, RINDEX_blacksheet, NUMENTRIES_water);
  myST1->AddProperty("SPECULARLOBECONSTANT", PP, SPECULARLOBECONSTANT, NUM);
  myST1->AddProperty("SPECULARSPIKECONSTANT", PP, SPECULARSPIKECONSTANT, NUM);
  myST1->AddProperty("BACKSCATTERCONSTANT", PP, BACKSCATTERCONSTANT, NUM);
  myST1->AddProperty("REFLECTIVITY", ENERGY_water, REFLECTIVITY_blacksheet, NUMENTRIES_water);
  myST1->AddProperty("EFFICIENCY", ENERGY_water, EFFICIENCY_blacksheet, NUMENTRIES_water);
  
  G4OpticalSurface* OpGelFoamSurface = new G4OpticalSurface("GelFoamSurface");
  
  OpGelFoamSurface->SetType(dielectric_dielectric);
  OpGelFoamSurface->SetModel(unified);
  OpGelFoamSurface->SetFinish(groundfrontpainted);
  OpGelFoamSurface->SetSigmaAlpha(0.1);
  
  OpGelFoamSurface->SetMaterialPropertiesTable(myST1);
 

  G4OpticalSurface*  ReflectorSkinSurface = new G4OpticalSurface("ReflectorSurface");
  ReflectorSkinSurface->SetType(dielectric_metal);
  ReflectorSkinSurface->SetModel(unified);
  ReflectorSkinSurface->SetFinish(polished);


  G4MaterialPropertiesTable *ref = new G4MaterialPropertiesTable();
  ref->AddProperty("REFLECTIVITY", ENERGY_ref, REFLECTIVITY_ref, NUMENTRIES_ref);
  ReflectorSkinSurface->SetMaterialPropertiesTable(ref);
  Aluminum->SetMaterialPropertiesTable(ref);
  ///////////////////construct geometry/////////////////////
  
  WCSimTuningParameters* tuningpars = new WCSimTuningParameters();
  enum DetConfiguration {wfm =1, fwm=2};
  G4int WCSimConfiguration = fwm;
  
  
  
  myDetectorConstruction myDetector(WCSimConfiguration, tuningpars);
  G4LogicalVolume* logicPMT = myDetector.ConstructPMT();
  
  
  G4VPhysicalVolume *physWorld = new G4PVPlacement(0,
                                                   G4ThreeVector(0.,0.,0.),
                                                   logicPMT,
                                                   "physWorld",
                                                   0,
                                                   false,
                                                   0,
                                                   true);
  
  G4Sphere *gelSolid = new G4Sphere("Gel",
				    311.95*mm,
				    332.*mm,
				    0.0*deg, 360.0*deg,
				    0.0, 8.47*deg);

  G4Sphere *pmtGlassSolid = new G4Sphere("pmtglass",
					 pmtGlassRadius,
					 pmtGlassRadius+pmtGlassThickness,
					 0.0*deg, 360.0*deg,
					 0.0, 49.24*deg);
  /*
  G4Box *boxCutOff = new G4Box("cutOffTubs",
			       pmtGlassRadius+1.*cm,
			       pmtGlassRadius+1.*cm,
			       34.597*mm);

  G4SubtractionSolid *pmtInnerGlass = new G4SubtractionSolid("pmtInnerglass",
							     pmtGlassSolid,
							     boxCutOff);

  */

  //  G4ThreeVector positionOffset(0,0,308*mm);
  G4Transform3D transform(G4Translate3D(0,0,(324.03*mm - (pmtGlassRadius+pmtGlassThickness))));
  //  G4ThreeVector translation(0, 0, 324.5*mm - pmtGlassRadius+pmtGlassThickness); // Adjust the value                  
  //  G4Transform3D transform = G4Transform3D::Identity;
  //  transform *= G4Translate3D(translation);

  //  G4VSolid* transformedSolid = new G4DisplacedSolid("TransformedSolid", pmtGlassSolid, transform);

  G4SubtractionSolid *pmtInnerGlassSolid = new G4SubtractionSolid("pmtInnerglass",                                     
                                                                  gelSolid,                                     
                                                                  //pmtInnerGlass,
								  pmtGlassSolid,
								  transform);  


  
  G4LogicalVolume *gelLogic = new G4LogicalVolume(pmtInnerGlassSolid,
						  SilGel,
						  "gelLogic");

  G4VisAttributes *layerAttributes = new G4VisAttributes();
  layerAttributes->SetColor(1.0, 1.0, 1.0, 0.5);
  layerAttributes->SetVisibility(true);
  layerAttributes->SetForceSolid(true);
  gelLogic->SetVisAttributes(layerAttributes);
  
  G4LogicalSkinSurface* gelLogSkinSurface = new G4LogicalSkinSurface("gelLogSkinSurface",gelLogic,OpGelFoamSurface);
  /*
  G4VPhysicalVolume *gelPlace = new G4PVPlacement(0,
						  G4ThreeVector(0.,0.,-277.627*mm),
						  gelLogic,
						  "gelPlace",
						  logicPMT,
						  false,
						  0,
						  true);
  
  
  */

  //////////////////////////////PLA cup///////////////////

  G4Cons *solidCone1 = new G4Cons("Cone1",
                                 27.*mm,
                                 28.41*mm,
                                 40.55*mm,
                                 41.96*mm,
                                 10.265*mm,
                                 0.*deg, 360.*deg);

  G4Cons *solidCone2 = new G4Cons("Cone2",
				  45.6*mm,
				  46.3*mm,
				  47.86*mm,
				  48.56*mm,
				  7.5*mm,
				  0.*deg, 360.*deg);
  
  G4Tubs *tube = new G4Tubs("tube",
                            40.55*mm,
                            41.96*mm,
                            9.22*mm,
                            0.*deg, 360.*deg);

  G4UnionSolid *combineSolid1 = new G4UnionSolid("tubeplusreflection",
                                                 solidCone1,
                                                 tube,
                                                 0,
                                                 G4ThreeVector(0.,0.,19.0*mm));

  G4UnionSolid *combineSolid2 = new G4UnionSolid("cup",
                                                 combineSolid1,
						 solidCone2,
                                                 0,
                                                 G4ThreeVector(0.,0.,31.355*mm));
  

  G4LogicalVolume *logicCombine1 = new G4LogicalVolume(combineSolid2,
						       //solidCone2,
						       Air,
						       "logicCone1");
  /*
  G4VPhysicalVolume *PMTCup = new G4PVPlacement(0,
					     G4ThreeVector(0.,0.,0.*mm),
					     logicCombine1,
					     "glassTube",
					     logicPMT,
					     false,
					     0,
					     true);
  */
  G4VisAttributes *cupAttributes = new G4VisAttributes();
  cupAttributes->SetColor(1.0, 0.0, 0.0);
  cupAttributes->SetVisibility(true);
  cupAttributes->SetForceSolid(true);
  logicCombine1->SetVisAttributes(cupAttributes);
  
  G4Tubs *poronSolid = new G4Tubs("poronSolid",
                            26.51*mm,
                            39.22*mm,
                            6.35*mm,
                            0.*deg, 360.*deg);

  G4LogicalVolume *poronLogic = new G4LogicalVolume(poronSolid,                                           
                                                       Air,
                                                       "poronLogic");
  /*
  G4VPhysicalVolume *poron = new G4PVPlacement(0,
						G4ThreeVector(0.,0.,-16.615*mm),
						poronLogic,
						"poron",
						logicPMT,
						false,
						0,
						true);

  G4VisAttributes *poronAttributes = new G4VisAttributes();
  poronAttributes->SetColor(1.0, 1.0, 0.0);
  poronAttributes->SetVisibility(true);
  poronAttributes->SetForceSolid(true);
  poronLogic->SetVisAttributes(poronAttributes);
  */
  G4Cons *reflectorSolid = new G4Cons("Cone2",
				      44.9*mm,
				      45.6*mm,
				      47.16*mm,
				      47.86*mm,
				      7.5*mm,
				      0.*deg, 360.*deg);

  G4LogicalVolume *reflectorLogic = new G4LogicalVolume(reflectorSolid,
							Aluminum,
							"reflectorLogic");
  G4VisAttributes *refAttributes = new G4VisAttributes();                                                                 
  refAttributes->SetColor(0.85, 0.85, 0.85, 1.0);                                                                         
  refAttributes->SetVisibility(true);                                                                                    
  refAttributes->SetForceSolid(true);                                                                                    
  reflectorLogic->SetVisAttributes(refAttributes);   

  G4LogicalSkinSurface* ReflectorLogSkinSurface = new G4LogicalSkinSurface("ReflectorLogSkinSurface",reflectorLogic,ReflectorSkinSurface);
  /*
  G4VPhysicalVolume *reflector = new G4PVPlacement(0,
						G4ThreeVector(0.,0.,31.355*mm),
						reflectorLogic,
						"reflector",
						logicPMT,
						false,
						0,
						true);


  */

  return physWorld;

}



