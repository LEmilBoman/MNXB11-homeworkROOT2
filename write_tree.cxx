#include "Event.h"

void write_tree(){
  Event *event{nullptr};

  TFile file("tree_file.root","RECREATE");

  TTree *tree = new TTree("tree","home work tree");
  tree->Branch("event",&event);

  Int_t event_numb;
  Double_t px,py,pz;
  for (Int_t i{0}; i<1000; i++){

    event_numb = i;
    px = gRandom->Gaus(0,.02);
    py = gRandom->Gaus(0,.02);
    pz = gRandom->Gaus(0,.02);

    event = new Event(event_numb,px,py,pz);
    tree->Fill();
    delete event;
  }
  tree->AutoSave();
}