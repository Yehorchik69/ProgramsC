#include <iostream>

using namespace std;

struct Product {
    char name[50];
    double price;
};

struct Order {
    Product product;
    int quantity;
};

int main() {
    Order o;

    cout << "Product name: ";
    cin >> o.product.name;

    cout << "Product price: ";
    cin >> o.product.price;

    cout << "Order quantity: ";
    cin >> o.quantity;

    double total = o.product.price * o.quantity;

    cout << "\nOrder total: " << total << " UAH\n";

    return 0;
}