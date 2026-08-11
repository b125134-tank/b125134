#include <iostream>
using namespace std;

class Student
{
private:
    int rollNumber;
    string name;
    int numberOfSubjects;
    float *marks;

public:

    void acceptDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Number of Subjects: ";
        cin >> numberOfSubjects;
    }

    void allocateMarks()
    {
        marks = new float[numberOfSubjects];
    }

    void acceptMarks()
    {
        cout << "Enter marks for " << numberOfSubjects << " subjects:\n";

        for (int i = 0; i < numberOfSubjects; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayResult()
    {
        float total = 0;

        for (int i = 0; i < numberOfSubjects; i++)
        {
            total += marks[i];
        }

        float average = total / numberOfSubjects;

        cout << "\n----- Student Result -----" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;

        cout << "Marks: ";
        for (int i = 0; i < numberOfSubjects; i++)
        {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }

    void releaseMemory()
    {
        delete[] marks;
        marks=nullptr;
    }
};

int main()
{
    Student s;

    s.acceptDetails();
    s.allocateMarks();
    s.acceptMarks();
    s.displayResult();
    s.releaseMemory();

    return 0;
}