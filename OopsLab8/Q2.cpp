#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual double calculateFee(int hours) {
        return 0;
    }
};

class TwoWheelerSlot : public ParkingSlot {
public:
    double calculateFee(int hours) override {
        double fee = hours * 10;

        if (hours > 5)
            fee *= 0.90;

        return fee;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:
    double calculateFee(int hours) override {
        double fee = hours * 30;

        if (hours > 5)
            fee *= 0.90;

        return fee;
    }
};

int main() {
    int hours;
    cout << "Enter parking hours: ";
    cin >> hours;

    TwoWheelerSlot bike;
    FourWheelerSlot car;

    cout << "Two-wheeler Fee: Rs. "
         << bike.calculateFee(hours) << endl;

    cout << "Four-wheeler Fee: Rs. "
         << car.calculateFee(hours) << endl;

    return 0;
}