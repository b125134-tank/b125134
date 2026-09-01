#include<iostream>
using namespace std;

int main(){
    int wl=567;
    int *w=&wl;

    cout<<"Before="<<*w<<endl;

    *w+=200;
    *w-=100;

    cout<<"After="<<*w<<endl;
}