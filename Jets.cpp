#include "Jets.h"

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineNumber(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setEngineNumber(int engineNumber) {
    numberOfEngines = engineNumber;
}

double jet::mileageEstimate(double time) {
    double mileage = 15 * time;
    mileage = (mileage % 60) + 40;

    return mileage;
}

string Jet::toString() {
    return "-> Car\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           getEngineNumber;
}
