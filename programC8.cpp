#include <iostream>
#include <iomanip>

using namespace std;

struct Product {
    char name[100];
    double price;
};

int main() {
    Product p1, p2;

    cout << "Product 1 - name: ";
    cin.getline(p1.name, 100);

    cout << "Product 1 - price: ";
    cin >> p1.price;
    cin.ignore();           

    cout << "Product 2 - name: ";
    cin.getline(p2.name, 100);

    cout << "Product 2 - price: ";
    cin >> p2.price;

    cout << endl;

    if (p1.price > p2.price) {
        cout << p1.name << " is more expensive" << endl;
    }
    else if (p2.price > p1.price) {
        cout << p2.name << " is more expensive" << endl;
    }
    else {
        cout << "Both products have the same price" << endl;
    }

    return 0;
}