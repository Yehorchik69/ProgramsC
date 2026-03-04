#include <iostream>
#include <iomanip>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Time {
    int hours;
    int minutes;
};

struct Event {
    char name[50];
    Date date;
    Time time;
};

int main() {
    Event e;

    cout << "Event name: ";
    cin.getline(e.name, 50);

    cout << "Date - day: ";
    cin >> e.date.day;

    cout << "Date - month: ";
    cin >> e.date.month;

    cout << "Date - year: ";
    cin >> e.date.year;

    cout << "Time - hours: ";
    cin >> e.time.hours;

    cout << "Time - minutes: ";
    cin >> e.time.minutes;

    cout << "\nEvent: " << e.name << endl;
    cout << "When: "
         << setfill('0') << setw(2) << e.date.day << "."
         << setfill('0') << setw(2) << e.date.month << "."
         << e.date.year
         << " at "
         << setfill('0') << setw(2) << e.time.hours << ":"
         << setfill('0') << setw(2) << e.time.minutes << endl;

    return 0;
}