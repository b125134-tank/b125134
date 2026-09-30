#include <iostream>
using namespace std;

class Item {
    string name;
    float price;
    int quantity;

public:
    Item(string n = "", float p = 0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    Item operator+(Item item) {
        if (name == item.name && price == item.price) {
            return Item(name, price, quantity + item.quantity);
        }

        cout << "Items cannot be combined because they are different."
             << endl;

        return *this;
    }

    void display() {
        cout << "Item: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main() {
    Item i1("Pen", 10, 5);
    Item i2("Pen", 10, 8);

    Item i3 = i1 + i2;

    cout << "Combined Item:" << endl;
    i3.display();

    cout << "\nOriginal Item 1:" << endl;
    i1.display();

    cout << "\nOriginal Item 2:" << endl;
    i2.display();

    return 0;
}