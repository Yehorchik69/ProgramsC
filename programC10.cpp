#include <iostream>

using namespace std;

struct Rectangle {
    int width;
    int height;
};

int main() {
    Rectangle r1, r2;

    cout << "Rectangle 1 - width: ";
    cin >> r1.width;

    cout << "Rectangle 1 - height: ";
    cin >> r1.height;

    cout << "Rectangle 2 - width: ";
    cin >> r2.width;

    cout << "Rectangle 2 - height: ";
    cin >> r2.height;

    double area1 = r1.width * r1.height;
    double area2 = r2.width * r2.height;

    if (area1 > area2) {
        cout << "Rectangle 1 is larger (area: " << area1 << ")" << endl;
    }
    else if (area2 > area1) {
        cout << "Rectangle 2 is larger (area: " << area2 << ")" << endl;
    }
    else {
        cout << "Both rectangles are same " << endl;
    }

    return 0;
}