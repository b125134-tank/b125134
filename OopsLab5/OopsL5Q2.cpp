#include<iostream>
using namespace std;

int larger(int a,int b){
    if(a>b){return a;}
    else{return b;}
}

int larger(float a,float b){
    if(a>b)return a;
    else return b;
}

int larger(int a,int b,int c){
    int max=a;
    if(b>max){max= b;}
    if(c>max){max=c;}
    return max;
}

int main(){
    int a=10,b=20,c=25;
    float x=2.5,y=3.5;
    cout<<larger(c,b)<<endl;
    cout<<larger(x,y)<<endl;
    cout<<larger(a,b,c)<<endl;
    return 0;
}