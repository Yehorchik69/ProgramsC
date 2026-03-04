#include <iostream>

using namespace std;

struct Student {
    char name[50];
    int grade;
};

int main() {
    Student stud[3];

    for (int i = 0; i < 3; i++) {
        cout << "Student " << (i+1) << " - name: ";
        cin.getline(stud[i].name, 50);

        cout << "Student " << (i+1) << " - grade: ";
        cin >> stud[i].grade;
        cin.ignore();
    }

    cout << "\nResults:\n";
    for (int i = 0; i < 3; i++) {
        cout << (i+1) << ". " 
             << stud[i].name << " - " 
             << stud[i].grade << endl;
    }

    return 0;
}