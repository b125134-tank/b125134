#include <iostream>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:
    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << productID << "\t"
             << productName << "\t"
             << price << "\t"
             << quantity << endl;
    }

    float getCost()
    {
        return price * quantity;
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Product *products = new Product[n];

    // Accept product details
    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        products[i].accept();
    }

    // Display products
    cout << "\n----- Shopping Cart -----\n";
    cout << "ID\tName\tPrice\tQuantity\n";

    for (int i = 0; i < n; i++)
    {
        products[i].display();
    }

    // Calculate total
    float total = 0;

    for (int i = 0; i < n; i++)
    {
        total += products[i].getCost();
    }

    cout << "\nTotal Amount = " << total << endl;

    // Release memory
    delete[] products;
    products=nullptr;

    return 0;
}