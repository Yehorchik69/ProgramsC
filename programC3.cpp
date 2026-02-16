#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

int main() {
    Point p;

    cout << "Enter x: ";
    cin >> p.x;

    cout << "Enter y: ";
    cin >> p.y;

    double z = sqrt(p.x * p.x + p.y * p.y);

    cout << "Distance from origin: " << z << endl;

    return 0;
}