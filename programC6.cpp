#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

int main() {
    Point p1, p2;

    cout << "Point 1 - Enter x: ";
    cin >> p1.x;
    
    cout << "Point 1 - Enter y: ";
    cin >> p1.y;

    cout << "Point 2 - Enter x: ";
    cin >> p2.x;
    
    cout << "Point 2 - Enter y: ";
    cin >> p2.y;

    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    
    double distance = sqrt(dx*dx + dy*dy);

    cout << "Distance: " << distance << endl;

    return 0;
}