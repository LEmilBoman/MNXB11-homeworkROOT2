#ifndef __EVENT_H__
#define __EVENT_H__

#include <TObject.h>

class Event : public TObject {
  public:
    Event();
    Event(Int_t event_numb);
    virtual ~Event();
  private:
    Int_t event_numb;
    //Double_t px;
    //Double_t py;
    //Double_t pz;

  ClassDef(Event, 1);
};


#endif // __EVENT_H__