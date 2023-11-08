#include "Event.h"
 

void read_tree(){
  Event *event{nullptr};

  auto file = TFile::Open("tree_file.root");
  TTree *tree = static_cast<TTree*>(file->Get("tree"));

  Int_t event_numb;
  Double_t px;
  Double_t py;
  Double_t pz;
  tree->SetBranchAddress("event_numb",&event_numb);
  tree->SetBranchAddress("px",&px);
  tree->SetBranchAddress("py",&py);
  tree->SetBranchAddress("pz",&pz);
  
  Int_t events = tree->GetEntries();
  std::cout << events << std::endl;
  TH2D* pxpy = new TH2D("pxpy","x and y momenta;px;py",events,0,0.1,events,0,0.1);

  for (Int_t i{0}; i<events ; i++){
    tree->GetEntry(i);
    pxpy->Fill(px,py);
  }

  pxpy->Draw();

  tree->Draw("px*py : pz >> h(100,0,0.1,1000,0,0.003)","event->Magnitude()<0.1","colz");

}