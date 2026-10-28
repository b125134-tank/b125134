#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual double calculateWater(double moisture) {
        return 0;
    }
};

class DripIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) override {
        return 2 * (100 - moisture);
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) override {
        return 3 * (100 - moisture);
    }
};

int main() {
    double moisture;
    cout << "Enter soil moisture (0-100%): ";
    cin >> moisture;

    if (moisture < 0 || moisture > 100) {
        cout << "Invalid moisture percentage!" << endl;
        return 0;
    }

    DripIrrigation drip;
    SprinklerIrrigation sprinkler;

    cout << "Drip Water Required: "
         << drip.calculateWater(moisture) << " litres" << endl;

    cout << "Sprinkler Water Required: "
         << sprinkler.calculateWater(moisture) << " litres" << endl;

    return 0;
}