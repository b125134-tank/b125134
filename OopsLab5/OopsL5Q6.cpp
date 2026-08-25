#include <iostream>
using namespace std;

void display(int x){
    cout << "Integer: " << x << endl;
}

void display(float x){
    cout << "Floating-point number: " << x << endl;
}

void display(char x){
    cout << "Character: " << x << endl;
}

void display(int arr[], int n){
    cout << "Integer array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void display(char arr[], int n){
    cout << "Character array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main(){
    int x = 25;
    float y = 12.5f;
    char ch = 'A';

    int a[] = {10, 20, 30, 40, 50};
    char b[] = {'H', 'E', 'L', 'L', 'O'};

    display(x);
    display(y);
    display(ch);
    display(a, 5);
    display(b, 5);

    return 0;
}