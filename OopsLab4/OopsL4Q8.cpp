#include<iostream>
using namespace std;

class TrainSeat{
private:
   int seatNo;
   string passengerName;
   bool bookingStatus;
public:
   TrainSeat(int seat,string name,bool status){
       seatNo=seat;
       passengerName=name;
       bookingStatus=status;
   }

   friend class TicketChecker;
};

class TicketChecker{
public:
    void display(TrainSeat t){
        cout<<"Seat Number   :"<<t.seatNo<<endl;
        if(t.bookingStatus){
            cout<<"Booking Status:Booked"<<endl;
            cout<<"Passenger Name:"<<t.passengerName<<endl;
        }else{
            cout<<"Booking Status:Available"<<endl;
        }
    }
};

int main(){
    TrainSeat t(24,"Tanishq",true);
    TicketChecker checker;
    checker.display(t);
    return 0;
    
}

