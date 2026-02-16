#include <iostream>

using namespace std;

struct Book {
    char title[100];
    char author[100];
    int year;
};

int main() {
    Book b;

    cout << "Enter title: ";
    cin.getline(b.title, 100);

    cout << "Enter author: ";
    cin.getline(b.author, 100);

    cout << "Enter year: ";
    cin >> b.year;

    cout << "\"" << b.title << "\" by " << b.author << " (" << b.year << ")\n";

    return 0;
}