#include "Event.h"
#include <cmath>

ClassImp(Event)

Event::Event() :
event_numb{0},
px{0},
py{0},
pz{0}
{   
}
Event::Event(Int_t event_numb, Double_t px, Double_t py, Double_t pz) :
event_numb{event_numb},
px{px},
py{py},
pz{pz}
{
  Magnitude();
}
Event::~Event(){
}
Double_t Event::Magnitude(){
    return sqrt(pow(px,2)+pow(py,2)+pow(pz,2));
}
