#include<iostream>
using namespace std;

int main(){
    int trainseat[8]={1,2,3,4,5,9,7,8};

    int *a=trainseat;

    cout<<"Before Updation"<<endl;
    for(int i=0;i<8;i++){
        cout<<trainseat[i]<<endl;
        a++;
    }

    *(trainseat+5)=6;
   
    cout<<"After Updation:";
    for(int i=0;i<8;i++){
        cout<<trainseat[i]<<endl;
    }
    

}