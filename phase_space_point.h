#ifndef __PHASE_SPACE_POINT_H__
#define __PHASE_SPACE_POINT_H__

#include <TObject.h>

class phase_space_point : public TObject {
  public:
    phase_space_point();
    phase_space_point(Int_t variable);
    virtual ~phase_space_point();
  private:
    Int_t variable;
    //Double_t px;
    //Double_t py;
    //Double_t pz;

  ClassDef(phase_space_point, 1);
};


#endif // __PHASE_SPACE_POINT_H__