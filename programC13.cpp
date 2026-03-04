#include <iostream>

using namespace std;

struct Student {
    char name[50];
    int grade;
};

int main() {
    Student stud[3];
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Student " << (i+1) << " name: ";
        cin.getline(stud[i].name, 50);
        cout << "Student " << (i+1) << " grade: ";
        cin >> stud[i].grade;

        sum += stud[i].grade;
        cin.ignore();
    }

    double avg = (double)sum / 3;

    cout << "\nAverage grade: "  << avg << endl;

    return 0;
}