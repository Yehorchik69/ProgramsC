#include <iostream>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Rectangle {
    Point bottomLeft;
    Point topRight;
};

int main() {
    Rectangle r;

    cout << "Bottom-left - x: ";
    cin >> r.bottomLeft.x;
    cout << "Bottom-left - y: ";
    cin >> r.bottomLeft.y;

    cout << "Top-right - x: ";
    cin >> r.topRight.x;
    cout << "Top-right - y: ";
    cin >> r.topRight.y;

    double width = r.topRight.x - r.bottomLeft.x;
    double height = r.topRight.y - r.bottomLeft.y;

    double area = width * height;

    if (width <= 0 || height <= 0) {
        cout << "\nError: invalid rectangle (width or height <= 0)\n";
    } else {
        cout << "\nArea: " << area << endl;
    }

    return 0;
}