#include <iostream>
using namespace std;

int findLongest(int *ptr, int n){
    int longest = *ptr;
    for (int i = 1; i < n; i++){
        ptr++;
        if (*ptr > longest)
            longest = *ptr;
    }
    return longest;
}

int main(){
    int duration[6];
    cout << "Enter duration of 6 episodes:\n";
    for (int i = 0; i < 6; i++){
        cin >> duration[i];
    }

    int longest = findLongest(duration, 6);
    cout << "Longest episode duration = "<< longest << " minutes" << endl;

    return 0;
}