#include <iostream>
using namespace std;

class BankAccount{
protected:
    int accountNumber;
    float balance;

public:
    BankAccount(int acc, float bal){
        accountNumber = acc;
        balance = bal;
    }
};

class SavingsAccount : public BankAccount{
private:
    float interestRate;

public:
    SavingsAccount(int acc, float bal, float rate)
        : BankAccount(acc, bal){
        interestRate = rate;
    }

    void display(){
        float interest = balance * interestRate / 100;
        float newBalance = balance + interest;

        cout << "Savings Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Updated Balance: " << newBalance << endl;
    }
};

class CurrentAccount : public BankAccount{
private:
    float minimumBalance;
    float maintenanceCharge;

public:
    CurrentAccount(int acc, float bal, float minBal, float charge)
        : BankAccount(acc, bal){
        minimumBalance = minBal;
        maintenanceCharge = charge;
    }

    void display(){
        if (balance < minimumBalance){
            balance = balance - maintenanceCharge;
        }

        cout << "Current Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main(){
    SavingsAccount s(1001, 50000, 5);
    CurrentAccount c(1002, 8000, 10000, 500);
    s.display();
    cout << endl;
    c.display();
    return 0;
}