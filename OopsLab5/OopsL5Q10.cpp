#include <iostream>
using namespace std;

float process(int a, int b){
    return a + b;
}

float process(int a, float b){
    return a + b;
}

float process(float a, float b){
    return a + b;
}

float process(int arr[], int n){
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

float process(int *a, int *b){
    return *a + *b;
}

int main(){
    int a = 10, b = 20;
    int c = 15;
    float x = 12.5;
    float y = 7.5;

    int arr[] = {10, 20, 30, 40, 50};

    cout << "Sum of two integers = "<< process(a, b) << endl;

    cout << "Sum of integer and float = "<< process(c, x) << endl;

    cout << "Sum of two floating-point values = "<< process(x, y) << endl;

    cout << "Sum of integer array = "<< process(arr, 5) << endl;

    cout << "Sum using two integer pointers = "<< process(&a, &b) << endl;

    return 0;
}