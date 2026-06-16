#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

vector<Student> students;

void addStudent() {
    Student s;

    cout << "\nEnter Roll Number: ";
    cin >> s.rollNo;

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Marks: ";
    cin >> s.marks;

    students.push_back(s);

    cout << "Student Added Successfully!\n";
}

void displayStudents() {
    if (students.empty()) {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n===== STUDENT RECORDS =====\n";

    for (int i = 0; i < students.size(); i++) {
        cout << "\nRoll No : " << students[i].rollNo;
        cout << "\nName    : " << students[i].name;
        cout << "\nMarks   : " << students[i].marks;
        cout << "\n----------------------";
    }
}

void searchStudent() {
    int roll;
    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == roll) {
            cout << "\nStudent Found!";
            cout << "\nRoll No : " << students[i].rollNo;
            cout << "\nName    : " << students[i].name;
            cout << "\nMarks   : " << students[i].marks << endl;
            return;
        }
    }

    cout << "Student Not Found!\n";
}

void updateStudent() {
    int roll;
    cout << "\nEnter Roll Number to Update: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == roll) {

            cin.ignore();
            cout << "Enter New Name: ";
            getline(cin, students[i].name);

            cout << "Enter New Marks: ";
            cin >> students[i].marks;

            cout << "Record Updated Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

void deleteStudent() {
    int roll;
    cout << "\nEnter Roll Number to Delete: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == roll) {
            students.erase(students.begin() + i);
            cout << "Student Deleted Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

void countStudents() {
    cout << "\nTotal Students: " << students.size() << endl;
}

int main() {
    int choice;

    do {
        cout << "\n\n===== STUDENT RECORD MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Count Students";
        cout << "\n7. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                countStudents();
                break;

            case 7:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}