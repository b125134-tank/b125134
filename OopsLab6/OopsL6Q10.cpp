#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of contacts: ";
    cin >> n;
    long long *contacts = new long long[n];

    cout << "Enter contact numbers:\n";
    for (int i = 0; i < n; i++){
        cin >> *(contacts + i);
    }
    long long searchNumber;
    cout << "Enter contact number to search: ";
    cin >> searchNumber;
    bool found = false;
    for (long long *p = contacts; p < contacts + n; p++){
        if (*p == searchNumber)
        {
            cout << "Contact found at position "
                 << (p - contacts + 1) << endl;

            found = true;
            break;
        }
    }

    if (!found){
        cout << "Contact number not found." << endl;
    }
    delete[] contacts;
    return 0;
}