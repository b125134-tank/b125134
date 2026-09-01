#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter number of tables: ";
    cin >> n;

    int *tables = new int[n];

    cout << "Enter table numbers:\n";
    for (int i = 0; i < n; i++){
        cin >> *(tables + i);
    }

    int smallest = *tables;
    for (int *p = tables + 1; p < tables + n; p++){
        if (*p < smallest)
        {
            smallest = *p;
        }
    }

    cout << "Smallest table number = " << smallest << endl;
    delete[] tables;

    return 0;
}