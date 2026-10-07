#include <iostream>
using namespace std;

class Patient{
protected:
    string patientName;
    int patientID;
    int age;

public:
    Patient(string n, int id, int a){
        patientName = n;
        patientID = id;
        age = a;
    }
};

class InPatient : public Patient{
private:
    float roomCharges;
    int days;

public:
    InPatient(string n, int id, int a, float charges, int d)
        : Patient(n, id, a){
        roomCharges = charges;
        days = d;
    }

    void displayBill(){
        float totalBill = roomCharges * days;

        cout << "Patient Name: " << patientName << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Age: " << age << endl;
        cout << "Room Charges per Day: " << roomCharges << endl;
        cout << "Number of Days: " << days << endl;
        cout << "Total Hospital Bill: " << totalBill << endl;
    }
};

int main(){
    InPatient p("Amit", 101, 25, 2000, 5);
    p.displayBill();
    return 0;
}