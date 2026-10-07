#include <iostream>
using namespace std;

class InternalExam{
public:
    void display(){
        cout << "Internal Exam Marks: 40" << endl;
    }
};

class ExternalExam{
public:
    void display(){
        cout << "External Exam Marks: 50" << endl;
    }
};

class FinalResult : public InternalExam, public ExternalExam{
public:
    void showResult(){
        InternalExam::display();
        ExternalExam::display();
    }
};

int main(){
    FinalResult result;
    result.showResult();
    return 0;
}