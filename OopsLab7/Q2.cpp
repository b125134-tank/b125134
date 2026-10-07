#include <iostream>
using namespace std;

class Student{
protected:
    string name;
    int rollNo;
    int marks[3];

public:
    Student(string n, int r, int m1, int m2, int m3){
        name = n;
        rollNo = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    virtual void calculateResult(){
        cout << "Student Result" << endl;
    }
};

class RegularStudent : public Student{
public:
    RegularStudent(string n, int r, int m1, int m2, int m3)
        : Student(n, r, m1, m2, m3)
    {
    }

    void calculateResult() override{
        int total = marks[0] + marks[1] + marks[2];

        cout << "Regular Student" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

class ScholarshipStudent : public Student{
public:
    ScholarshipStudent(string n, int r, int m1, int m2, int m3)
        : Student(n, r, m1, m2, m3)
    {
    }

    void calculateResult() override{
        int total = marks[0] + marks[1] + marks[2];
        total = total + 5;

        cout << "Scholarship Student" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks with Bonus: " << total << endl;
    }
};

int main(){
    RegularStudent r("Aman", 101, 80, 75, 90);
    ScholarshipStudent s("Priya", 102, 80, 75, 90);

    r.calculateResult();
    cout << endl;
    s.calculateResult();

    return 0;
}