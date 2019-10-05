#ifndef DRIVINGSIMULATOR_LONGBOARD_H
#define DRIVINGSIMULATOR_LONGBOARD_H

#include "Vehicle.h"

class Longboard : public Vehicle {

private:

public:
    explicit Longboard(string brand, string model);

    virtual ~Longboard();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_LONGBOARD_H
