#include <iostream>
using namespace std;

int count(int n){
    if (n == 0)
        return 1;

    int digits = 0;

    while (n != 0){
        digits++;
        n /= 10;
    }

    return digits;
}

int count(int arr[], int n){
    return n;
}

int count(char arr[], int n, char ch){
    int occurrences = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] == ch)
            occurrences++;
    }

    return occurrences;
}

int main()
{
    int number = 123456;
    int arr[] = {10, 20, 30, 40, 50};
    char letters[] = {'A', 'B', 'A', 'C', 'A', 'D'};

    cout << "Number of digits = " << count(number) << endl;
    cout << "Number of elements = " << count(arr, 5) << endl;
    cout << "Occurrences of A = "<< count(letters, 6, 'A') << endl;

    return 0;
}