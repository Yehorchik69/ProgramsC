#include <iostream>

using namespace std;    

struct Complex {
    double real;
    double imag;    
};

int main() {
    Complex c1, c2;

    cout << "Complex 1 - real: ";
    cin >> c1.real;

    cout << "Complex 1 - imag: ";
    cin >> c1.imag;

    cout << "Complex 2 - real: ";
    cin >> c2.real;

    cout << "Complex 2 - imag: ";
    cin >> c2.imag;

    double sum_real = c1.real + c2.real;
    double sum_imag = c1.imag + c2.imag;

    cout << "Sum: " << sum_real;
    if (sum_imag >= 0) {
        cout << " + " << sum_imag << "i" << endl;
    }
    else {
        cout << " - " << -sum_imag << "i" << endl;
    }

    return 0;
}