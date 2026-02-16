#include <iostream>

using namespace std;

struct Rectangle {
    int width;
    int height;
};

int main() {
    Rectangle r;

    cout << "Enter width: ";
    cin >> r.width;

    cout << "Enter height: ";
    cin >> r.height;

    int area = r.width * r.height;
    int perimeter = 2 * (r.width + r.height);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}