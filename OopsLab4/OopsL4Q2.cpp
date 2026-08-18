#include <iostream>
#include <string>
using namespace std;

class Mobile{
private:
    string brand;
    string model;
    float batteryPercentage;

public:
    Mobile(string b, string m, float battery){
        brand = b;
        model = m;
        batteryPercentage = battery;
    }

    friend void checkBattery(Mobile m);                                  // Friend function declaration
};

void checkBattery(Mobile m){                                         // Friend function definition
    cout << "Brand             : " << m.brand << endl;
    cout << "Model             : " << m.model << endl;
    cout << "Battery Percentage: " << m.batteryPercentage << "%" << endl;

    if (m.batteryPercentage < 20){
        cout << "Battery Status    : Battery Low" << endl;
    }
    else{
        cout << "Battery Status    : Battery Normal" << endl;
    }
}

int main(){
    Mobile phone("Samsung", "Galaxy A36", 76);
    checkBattery(phone);
    return 0;
}