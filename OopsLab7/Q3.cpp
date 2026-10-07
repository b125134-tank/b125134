#include <iostream>
using namespace std;

class Vehicle{
protected:
    string registrationNo;
    int rentalDays;

public:
    Vehicle(string reg, int days){
        registrationNo = reg;
        rentalDays = days;
    }
};

class Car : public Vehicle{
protected:
    float dailyRate;

public:
    Car(string reg, int days, float rate)
        : Vehicle(reg, days){
        dailyRate = rate;
    }
};

class LuxuryCar : public Car{
private:
    float luxuryCharge;

public:
    LuxuryCar(string reg, int days, float rate, float charge)
        : Car(reg, days, rate){
        luxuryCharge = charge;
    }

    void display(){
        float totalCost = (dailyRate + luxuryCharge) * rentalDays;

        cout << "Registration Number: " << registrationNo << endl;
        cout << "Rental Days: " << rentalDays << endl;
        cout << "Daily Rate: " << dailyRate << endl;
        cout << "Luxury Charge: " << luxuryCharge << endl;
        cout << "Total Rental Cost: " << totalCost << endl;
    }
};

int main(){
    LuxuryCar car("OD02AB1234", 5, 2000, 500);
    car.display();
    return 0;
}