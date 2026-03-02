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

    double aver = (s1.grade + s2.grade + s3.grade) / 3.0;
    cout << "\nAverage grade: " << aver << endl;

    return 0;
} 