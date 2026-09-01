#include <iostream>
using namespace std;

void updateMarks(int *marks, int n){
    for (int i = 0; i < n; i++){
        *(marks + i) = *(marks + i) + 5;
    }
}

int main(){
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int *marks = new int[n];

    cout << "Enter marks:\n";
    for (int i = 0; i < n; i++){
        cin >> *(marks + i);
    }

    cout << "\nMarks before modification:\n";
    for (int i = 0; i < n; i++){
        cout << *(marks + i) << " ";
    }

    updateMarks(marks, n);

    cout << "\nMarks after modification:\n";
    for (int i = 0; i < n; i++){
        cout << *(marks + i) << " ";
    }
    delete[] marks;

    return 0;
}