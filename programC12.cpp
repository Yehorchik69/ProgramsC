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

    int best = 0;
    for (int i = 1; i < 3; i++) {
        if (stud[i].grade > stud[best].grade) {
            best = i;
        }
    }

    cout << "\nBest student: " << stud[best].name << " (" << stud[best].grade << ")\n";

    return 0;
}