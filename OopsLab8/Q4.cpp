#include <iostream>
using namespace std;

class Delivery {
public:
    virtual double estimateTime(double distance) {
        return 0;
    }
};

class BikeDelivery : public Delivery {
public:
    double estimateTime(double distance) override {
        return (distance / 20.0) * 60 + 5;
    }
};

class DroneDelivery : public Delivery {
public:
    double estimateTime(double distance) override {
        return (distance / 40.0) * 60 + 2;
    }
};

int main() {
    double distance;
    cout << "Enter distance (km): ";
    cin >> distance;

    BikeDelivery bike;
    DroneDelivery drone;

    cout << "Bike Delivery Time: "
         << bike.estimateTime(distance) << " minutes" << endl;

    cout << "Drone Delivery Time: "
         << drone.estimateTime(distance) << " minutes" << endl;

    return 0;
}