#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Bicycle::mileageEstimate(double time) {
    double mileage = 3 * time;
    mileage = (mileage % 0.4) + 0.1;
    return mileage;
}

string Bicycle::toString() {
    string s = "-> Bicycle\n\t";
    return "-> Bicycle\n" + Vehicle::toString() + "\n\tGears: " +
           to_string(myGearCount);
}
