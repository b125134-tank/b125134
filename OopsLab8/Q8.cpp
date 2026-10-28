#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual double calculateCost(double cpuHours) {
        return 0;
    }
};

class StandardInstance : public CloudResource {
public:
    double calculateCost(double cpuHours) override {
        double cost = cpuHours * 5;

        if (cpuHours > 100)
            cost *= 0.85;

        return cost;
    }
};

class PremiumInstance : public CloudResource {
public:
    double calculateCost(double cpuHours) override {
        double cost = cpuHours * 12;

        if (cpuHours > 100)
            cost *= 0.85;

        return cost;
    }
};

int main() {
    double hours;
    cout << "Enter CPU usage hours: ";
    cin >> hours;

    if (hours < 0) {
        cout << "Invalid CPU hours!" << endl;
        return 0;
    }

    StandardInstance standard;
    PremiumInstance premium;

    cout << "Standard Instance Cost: Rs. "
         << standard.calculateCost(hours) << endl;

    cout << "Premium Instance Cost: Rs. "
         << premium.calculateCost(hours) << endl;

    return 0;
}