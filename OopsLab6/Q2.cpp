#include<iostream>
using namespace std;

class Complex{
    int real,imag;
public:
    Complex(int r,int i){
        real=r;
        imag=i;
    }

    Complex operator-(Complex c){
        Complex temp(0,0);
        temp.real=real-c.real;
        temp.imag=imag-c.imag;

        return temp;
    }

    void display(){
        if(imag>=0){
            cout<<real<<"+"<<imag<<"i";
        }else{
            cout<<real<<imag<<"i";
        }
    }
};

int main(){
    Complex c1(4,3);
    Complex c2(3,7);

    Complex c3=c1-c2;

    cout<<"C1:";
    c1.display();
    cout<<endl<<"C2:";
    c2.display();
    cout<<endl<<"C3:";
    c3.display();
    return 0;
}