#include <iostream>
using namespace std;

class Robot {
public:
    virtual double move(double distance) {
        return 0;
    }

    virtual ~Robot() {}
};

class WheeledRobot : public Robot {
public:
    double move(double distance) override {
        return distance / 2.0;
    }
};

class TrackedRobot : public Robot {
public:
    double move(double distance) override {
        return distance / 1.2;
    }
};

int main() {
    double distance;
    cout << "Enter distance (metres): ";
    cin >> distance;

    if (distance < 0) {
        cout << "Invalid distance!" << endl;
        return 0;
    }

    WheeledRobot wheeled;
    TrackedRobot tracked;

    Robot *ptr;

    ptr = &wheeled;
    cout << "Wheeled Robot Time: "
         << ptr->move(distance) << " seconds" << endl;

    ptr = &tracked;
    cout << "Tracked Robot Time: "
         << ptr->move(distance) << " seconds" << endl;

    return 0;
}