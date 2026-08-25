#include <iostream>
using namespace std;

void modify(int &x, int value){
    x+= value;
}

void modify(float &x, float value){
    x+= value;
}

void modify(int *x, int value){
    *x+= value;
}

int main(){
    int a = 20;
    float b = 15.5;
    int c = 30;

    cout << "Before modification:" << endl;
    cout << "Integer = " << a << endl;
    cout << "Float = " << b << endl;
    cout << "Pointer value = " << c << endl;

    modify(a, 10);
    modify(b, 5.5);
    modify(&c, 20);

    cout << "\nAfter modification:" << endl;
    cout << "Integer = " << a << endl;
    cout << "Float = " << b << endl;
    cout << "Pointer value = " << c << endl;

    return 0;
}