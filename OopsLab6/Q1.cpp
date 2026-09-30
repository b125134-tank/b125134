#include<iostream>
using namespace std;

class Distance{
    int feet,inches;
public:
    Distance(int f,int i){
        feet=f;
        inches=i;
    }
    Distance operator+(Distance d){
        Distance temp(0,0);
        temp.feet=feet+d.feet;
        temp.inches=inches+d.inches;

        if(temp.inches>=12){
            temp.feet+=temp.inches/12;
            temp.inches=temp.inches%12;
        }

        return temp;
    }

    void display(){
        cout<<feet<<" Feets"<<" "<<inches<<" Inches";
    }
};

int main(){
    Distance d1(2,3);
    Distance d2(5,10);
    Distance d3=d1+d2;
    cout<<"Distance d1:";
    d1.display();
    cout<<endl<<"Distance d2:";
    d2.display();
    cout<<endl<<"Sum:";
    d3.display();
    return 0;

}