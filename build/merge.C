#include <iostream>
#include <string>
#include <TChain.h>
#include <TFile.h>

void MergeRootFiles(const std::string& inputPattern, const std::string& outputFile)
{
  TChain chain("Photons"); // Assuming the name of the TTree is "tree"                                                     
  chain.Add(inputPattern.c_str());

  TFile output(outputFile.c_str(), "RECREATE");
  TTree* mergedTree = chain.CloneTree();
  mergedTree->Write();

  output.Close();
}

int main()
{
  std::string inputPattern = "/home/mgola/WCTE_mPMT/build/output*.root";
  std::string outputFile = "/home/mgola/WCTE_mPMT/build/merged.root";

  MergeRootFiles(inputPattern, outputFile);

  std::cout << "Root files merged successfully." << std::endl;

  return 0;
}
