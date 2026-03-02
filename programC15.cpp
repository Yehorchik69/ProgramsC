#include <iostream>
#include <string>

using namespace std;

struct Product {
    string name;
    double price;
};

int main() {
    Product p1, p2, p3;
    
    cout << "Product 1 - name: ";  
    cin >> p1.name;
    cout << "Product 1 - price: "; 
    cin >> p1.price;

    cout << "Product 2 - name: ";
    cin >> p2.name;
    cout << "Product 2 - price: ";
    cin >> p2.price;

    cout << "Product 3 - name: ";
    cin >> p3.name;
    cout << "Product 3 - price: ";
    cin >> p3.price;

    Product chp = p1;
    if (p2.price < chp.price) {
        chp = p2;
    }
    if (p3.price < chp.price) {
        chp = p3;
    }

    cout << "\nCheapest: " << chp.name << " (" << chp.price << " UAH)" << endl;

    return 0;
}