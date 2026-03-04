#include <iostream>

using namespace std;

struct Product {
    char name[50];
    double price;
    int quantity;
};

int main() {
    Product p[3];
    double total = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Product " << (i+1) << " - name: ";
        cin.getline(p[i].name, 50);

        cout << "Product " << (i+1) << " - price: ";
        cin >> p[i].price;

        cout << "Product " << (i+1) << " - quantity: ";
        cin >> p[i].quantity;

        cin.ignore(); 
    }

    for (int i = 0; i < 3; i++) {
        total += p[i].price * p[i].quantity;
    }

    cout << "\nTotal warehouse value: " << total << " UAH\n";

    return 0;
}