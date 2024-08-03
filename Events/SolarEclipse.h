#ifndef HW4_SOLARECLIPSE_H
#define HW4_SOLARECLIPSE_H

#include "SpecialEvent.h"

class SolarEclipse : public SpecialEvent{
public:
    SolarEclipse();

    static int getForceBuff();
    static int getForceNerf();

private:
    static const int FORCE_BUFF = 1;
    static const int FORCE_NERF = (-1);
};


#endif //HW4_SOLARECLIPSE_H
