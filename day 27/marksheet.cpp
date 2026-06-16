#include <iostream>
using namespace std;

int main()
{
    string name;
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "===== MARKSHEET GENERATION SYSTEM =====\n";

    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Marks of Subject 1: ";
    cin >> m1;

    cout << "Enter Marks of Subject 2: ";
    cin >> m2;

    cout << "Enter Marks of Subject 3: ";
    cin >> m3;

    cout << "Enter Marks of Subject 4: ";
    cin >> m4;

    cout << "Enter Marks of Subject 5: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "\n\n===== MARKSHEET =====";
    cout << "\nStudent Name : " << name;
    cout << "\nRoll Number  : " << rollNo;
    cout << "\nSubject 1    : " << m1;
    cout << "\nSubject 2    : " << m2;
    cout << "\nSubject 3    : " << m3;
    cout << "\nSubject 4    : " << m4;
    cout << "\nSubject 5    : " << m5;
    cout << "\nTotal Marks  : " << total;
    cout << "\nPercentage   : " << percentage << "%";

    if (percentage >= 90)
        cout << "\nGrade : A+";
    else if (percentage >= 75)
        cout << "\nGrade : A";
    else if (percentage >= 60)
        cout << "\nGrade : B";
    else if (percentage >= 40)
        cout << "\nGrade : C";
    else
        cout << "\nGrade : Fail";

    return 0;
}