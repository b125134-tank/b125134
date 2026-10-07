#include<iostream>
using namespace std;

class Employee{
protected:
    string name;
    float basicSalary;

public:
    Employee(string n, float salary){
        name = n;
        basicSalary = salary;
    }
};

class Developer : public Employee{
protected:
    int experience;

public:
    Developer(string n, float salary, int exp)
        : Employee(n, salary){
        experience = exp;
    }

    float experienceBonus(){
        return 0.05 * basicSalary * experience;
    }
};

class SeniorDeveloper : public Developer{
private:
    float projectBonus;

public:
    SeniorDeveloper(string n, float salary, int exp, float bonus)
        : Developer(n, salary, exp){
        projectBonus = bonus;
    }

    void display(){
        float expBonus = experienceBonus();
        float finalSalary = basicSalary + expBonus + projectBonus;

        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Experience Bonus: " << expBonus << endl;
        cout << "Project Bonus: " << projectBonus << endl;
        cout << "Final Salary: " << finalSalary << endl;
    }
};

int main(){
    SeniorDeveloper s("Rahul", 50000, 4, 10000);
    s.display();
    return 0;
}