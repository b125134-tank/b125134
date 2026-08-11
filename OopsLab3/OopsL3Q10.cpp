#include <iostream>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;
    float basicSalary;
    float *monthlyEarnings;
    int months;

public:

    void acceptDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Number of Months: ";
        cin >> months;
    }

    void allocateMemory()
    {
        monthlyEarnings = new float[months];
    }

    void acceptEarnings()
    {
        cout << "\nEnter monthly earnings:\n";

        for (int i = 0; i < months; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> monthlyEarnings[i];
        }
    }

    void displayAnalysis()
    {
        float total = 0;
        float highest = monthlyEarnings[0];
        int highestMonth = 1;

        for (int i = 0; i < months; i++)
        {
            total += monthlyEarnings[i];

            if (monthlyEarnings[i] > highest)
            {
                highest = monthlyEarnings[i];
                highestMonth = i + 1;
            }
        }

        float average = total / months;

        cout << "\n----- Employee Salary Analysis -----\n";

        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;

        cout << "\nMonthly Earnings:\n";

        for (int i = 0; i < months; i++)
        {
            cout << "Month " << i + 1
                 << ": " << monthlyEarnings[i] << endl;
        }

        cout << "\nTotal Earnings = " << total << endl;
        cout << "Average Monthly Earning = " << average << endl;
        cout << "Highest Earning = " << highest << endl;
        cout << "Highest Earning Month = "
             << highestMonth << endl;
    }

    void releaseMemory()
    {
        delete[] monthlyEarnings;
        monthlyEarnings=nullptr;
    }
};

int main()
{
    Employee emp;

    emp.acceptDetails();
    emp.allocateMemory();
    emp.acceptEarnings();
    emp.displayAnalysis();
    emp.releaseMemory();

    return 0;
}