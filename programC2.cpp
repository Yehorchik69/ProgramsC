#include <iostream>

using namespace std;

struct Product {
    char name[100];
    float price;
    int quantity;
};

int main() {
    Product p;

    cout << "Enter name: ";
    cin.getline(p.name, 100);

    cout << "Enter price: ";
    cin >> p.price;

    cout << "Enter quantity: ";
    cin >> p.quantity;

    cout << "Total: " << p.price * p.quantity << " UAH\n";

    return 0;
}