#include <iostream>
using namespace std;

int main()
{
    // Dynamically allocate memory for one integer
    int *ptr = new int;

    // Take input from user
    cout << "Enter an integer: ";
    cin >> *ptr;

    // Display the value
    cout << "Entered integer: " << *ptr << endl;

    // Release dynamically allocated memory
    delete ptr;
    ptr=nullptr;

    return 0;
}