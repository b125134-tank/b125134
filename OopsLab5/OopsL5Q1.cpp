#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}

int add(float a,float b){
    int s=a*b;
    return s;
}

int main(){
    int a=5,b=3,c=2;
    float x=2.0,y=6.2;
    cout<<add(x,y)<<endl;
    cout<<add(a,b,c)<<endl;
    cout<<add(x,y)<<endl;
    return 0;
}