#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int grade;
};

int main() {
    Student s1, s2, s3;

    cout << "Student 1 - name: ";
    cin >> s1.name;
    cout << "Student 1 - grade: ";
    cin >> s1.grade;    

    cout << "Student 2 - name: ";
    cin >> s2.name;     
    cout << "Student 2 - grade: ";
    cin >> s2.grade;

    cout << "Student 3 - name: ";
    cin >> s3.name;
    cout << "Student 3 - grade: ";
    cin >> s3.grade;

    Student best = s1;

    if (s2.grade > best.grade) {
        best = s2;
    }
    if (s3.grade > best.grade) {
        best = s3;
    }

    cout << "\nBest student: " << best.name << " (" << best.grade << ")" << endl;

    return 0;
}