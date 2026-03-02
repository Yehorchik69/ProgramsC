#include <iostream>
#include <string>

using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

int main() {
    Product p1, p2, p3;
    
    cout << "Product 1 - name: ";  
    cin >> p1.name;
    cout << "Product 1 - price: "; 
    cin >> p1.price;
    cout << "Product 1 - quantity: ";
    cin >> p1.quantity;

    cout << "Product 2 - name: ";
    cin >> p2.name;
    cout << "Product 2 - price: ";
    cin >> p2.price;
    cout << "Product 2 - quantity: ";
    cin >> p2.quantity;

    cout << "Product 3 - name: ";
    cin >> p3.name;
    cout << "Product 3 - price: ";
    cin >> p3.price;
    cout << "Product 3 - quantity: ";
    cin >> p3.quantity;

    double total = (p1.price * p1.quantity) + (p2.price * p2.quantity) + (p3.price * p3.quantity);
    cout << "\nTotal warehouse value: " << total << " UAH" << endl;

    return 0;
}