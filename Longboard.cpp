#include "Longboard.h"


Longboard::Longboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Longboard::~Longboard() = default;

double Longboard::mileageEstimate(double time) {
    double mileage = 3 * time;
    mileage = (mileage % 0.4) + 0.1;
    return mileage;
}

string Longboard::toString() {
    string s = "-> Longboard\n\t";
    return "-> Bicycle\n" + Vehicle::toString();
}
