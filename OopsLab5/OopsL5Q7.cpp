#include <iostream>
using namespace std;

int compare(int a, int b){
    return (a > b) ? a : b;
}

int compare(float a, float b){
    return (a > b) ? a : b;
}

int compare(int a[], int b[], int n){
    for (int i = 0; i < n; i++){
        if (a[i] != b[i])
            return 0;
    }

    return 1;
}

int main(){
    int a = 25, b = 40;
    float x = 12.5f, y = 10.7f;

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 56};

    cout << "Larger integer = " << compare(a, b) << endl;
    cout << "Larger floating-point value = " << compare(x, y) << endl;

    if (compare(arr1, arr2, 5))
        cout << "Both arrays are identical." << endl;
    else
        cout << "Arrays are different." << endl;

    return 0;
}