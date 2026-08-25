#include <iostream>
using namespace std;

int search(int arr[], int n, int key){
    for (int i = 0; i < n; i++){
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int search(char arr[], int n, char key){
    for (int i = 0; i < n; i++){
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int search(int arr[], int start, int end, int key){
    for (int i = start; i <= end; i++){
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    char letters[] = {'A', 'B', 'C', 'D', 'E'};

    int pos1 = search(arr, 5, 30);
    int pos2 = search(letters, 5, 'C');
    int pos3 = search(arr, 1, 3, 40);

    if (pos1 != -1)
        cout << "Integer found at position: " << pos1 + 1 << endl;
    else
        cout << "Integer not found" << endl;

    if (pos2 != -1)
        cout << "Character found at position: " << pos2 + 1 << endl;
    else
        cout << "Character not found" << endl;

    if (pos3 != -1)
        cout << "Integer found in specified range at position: "
             << pos3 + 1 << endl;
    else
        cout << "Integer not found in specified range" << endl;

    return 0;
}