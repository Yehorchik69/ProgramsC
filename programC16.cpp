#include <iostream>
#include <iomanip>   

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    Date birth;
};

int main() {
    Student s;

    cout << "Enter name: ";
    cin.getline(s.name, 50);

    cout << "Enter day: ";
    cin >> s.birth.day;

    cout << "Enter month: ";
    cin >> s.birth.month;

    cout << "Enter year: ";
    cin >> s.birth.year;

    cout << "\n" << s.name 
         << " was born on "
         << setw(2) << setfill('0') << s.birth.day << "."
         << setw(2) << setfill('0') << s.birth.month << "."
         << s.birth.year << endl;

    return 0;
}