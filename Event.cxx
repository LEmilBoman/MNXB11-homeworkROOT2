#include "Event.h"

ClassImp(Event)
Event::Event() :
event_numb{0}
{   
}
Event::Event(Int_t event_numb) :
event_numb{event_numb}
{
}
Event::~Event(){

}