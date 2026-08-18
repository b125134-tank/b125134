#include <iostream>
#include <string>
using namespace std;

class FoodOrder{
private:
    int orderID;
    string foodItem;
    int quantity;
    float price;

public:
    FoodOrder(int id, string item, int qty, float p){
        orderID = id;
        foodItem = item;
        quantity = qty;
        price = p;
    }

    friend void calculateBill(FoodOrder f);
};

void calculateBill(FoodOrder f){
    float totalBill = f.quantity * f.price;

    cout << "--- Food Order Details ---" << endl;
    cout << "Order ID  : " << f.orderID << endl;
    cout << "Food Item : " << f.foodItem << endl;
    cout << "Quantity  : " << f.quantity << endl;
    cout << "Price     : Rs. " << f.price << endl;
    cout << "Total Bill: Rs. " << totalBill << endl;
}

int main(){
    FoodOrder order(101, "Pizza", 2, 250);
    calculateBill(order);
    return 0;
}