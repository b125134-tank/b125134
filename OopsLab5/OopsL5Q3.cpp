#include<iostream>
using namespace std;

int total(int arr[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}

int total(float arr[],int n){
    float s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}

int total(int arr[],int n,int k){
    int s=0;
    if(k>n)k=n;

    for(int i=0;i<k;i++){
        s+=arr[i];
    }
    return s;
}

int main(){
    int a[]={10,20,30};
    float b[]={1.2,1.2,1.6};
    cout<<total(a,3)<<endl;
    cout<<total(b,3)<<endl;
    cout<<total(a,3,1);
    return 0;
}