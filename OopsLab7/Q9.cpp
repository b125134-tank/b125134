#include <iostream>
using namespace std;

class Person{
protected:
    string name;

public:
    Person(string n){
        name = n;
        cout << "Person constructor" << endl;
    }
};

class Employee : public Person{
protected:
    int employeeID;

public:
    Employee(string n, int id)
        : Person(n){
        employeeID = id;
        cout << "Employee constructor" << endl;
    }
};

class Manager : public Employee{
private:
    string department;

public:
    Manager(string n, int id, string dept)
        : Employee(n, id){
        department = dept;
        cout << "Manager constructor" << endl;
    }

    void display(){
        cout << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

int main(){
    Manager m("Rahul", 101, "IT");
    m.display();
    return 0;
}