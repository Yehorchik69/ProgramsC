#include <iostream>
using namespace std;

struct Product {
    char name[50];
    double price;
};

int main() {
    Product p[3];

    for (int i = 0; i < 3; i++) {
        cout << "Product " << (i+1) << " - name: ";
        cin.getline(p[i].name, 50);

        cout << "Product " << (i+1) << " - price: ";
        cin >> p[i].price;
        cin.ignore();  
    }

    int cheap = 0;
    for (int i = 1; i < 3; i++) {
        if (p[i].price < p[cheap].price) {
            cheap = i;
        }
    }

    cout << "\nCheapest: "  << p[cheap].name  << " (" << p[cheap].price << " UAH)\n";

    return 0;
}