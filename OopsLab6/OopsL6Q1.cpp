#include<iostream>
using namespace std;

int main(){
    int battery=89;
    int *a=&battery;

    cout<<"Before Updation="<<*a<<"%"<<endl;
    *a+=10;
    cout<<"After Updation="<<*a<<"%";
}