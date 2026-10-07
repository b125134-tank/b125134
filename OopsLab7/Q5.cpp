#include <iostream>
using namespace std;

class Academic{
protected:
    int math, physics, programming;

public:
    Academic(int m, int p, int c){
        math = m;
        physics = p;
        programming = c;
    }
};

class Sports{
protected:
    int sportsMarks;

public:
    Sports(int s){
        sportsMarks = s;
    }
};

class StudentResult : public Academic, public Sports{
public:
    StudentResult(int m, int p, int c, int s)
        : Academic(m, p, c), Sports(s)
    {
    }

    void display(){
        int total = math + physics + programming + sportsMarks;
        float average = total / 4.0;

        cout << "Math Marks: " << math << endl;
        cout << "Physics Marks: " << physics << endl;
        cout << "Programming Marks: " << programming << endl;
        cout << "Sports Marks: " << sportsMarks << endl;

        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main(){
    StudentResult s(80, 75, 90, 85);
    s.display();
    return 0;
}