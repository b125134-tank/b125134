#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;
public:
    Student(string n, int m){
        name = n;
        marks = m;
    }
    bool operator>(Student s){
        return marks > s.marks;
    }
    string getName(){
        return name;
    }
    void display(){
        cout << name << " : " << marks << " marks" << endl;
    }
};

int main() {
    Student s1("Rahul", 95);
    Student s2("Aman", 92);

    s1.display();
    s2.display();

    if (s1 > s2)
        cout << s1.getName() << " has higher marks." << endl;
    else
        cout << s2.getName() << " has higher marks." << endl;

    return 0;
}