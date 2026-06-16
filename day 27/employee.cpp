#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int empId;
    string name;
    string department;
    double salary;
};

vector<Employee> employees;

void addEmployee() {
    Employee e;

    cout << "\nEnter Employee ID: ";
    cin >> e.empId;

    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, e.name);

    cout << "Enter Department: ";
    getline(cin, e.department);

    cout << "Enter Salary: ";
    cin >> e.salary;

    employees.push_back(e);

    cout << "Employee Added Successfully!\n";
}

void displayEmployees() {
    if (employees.empty()) {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    cout << "\n===== EMPLOYEE RECORDS =====\n";

    for (int i = 0; i < employees.size(); i++) {
        cout << "\nEmployee ID : " << employees[i].empId;
        cout << "\nName        : " << employees[i].name;
        cout << "\nDepartment  : " << employees[i].department;
        cout << "\nSalary      : " << employees[i].salary;
        cout << "\n--------------------------";
    }
}

void searchEmployee() {
    int id;
    cout << "\nEnter Employee ID to Search: ";
    cin >> id;

    for (int i = 0; i < employees.size(); i++) {
        if (employees[i].empId == id) {
            cout << "\nEmployee Found!";
            cout << "\nName       : " << employees[i].name;
            cout << "\nDepartment : " << employees[i].department;
            cout << "\nSalary     : " << employees[i].salary << endl;
            return;
        }
    }

    cout << "Employee Not Found!\n";
}

void updateEmployee() {
    int id;
    cout << "\nEnter Employee ID to Update: ";
    cin >> id;

    for (int i = 0; i < employees.size(); i++) {
        if (employees[i].empId == id) {

            cin.ignore();
            cout << "Enter New Name: ";
            getline(cin, employees[i].name);

            cout << "Enter New Department: ";
            getline(cin, employees[i].department);

            cout << "Enter New Salary: ";
            cin >> employees[i].salary;

            cout << "Employee Updated Successfully!\n";
            return;
        }
    }

    cout << "Employee Not Found!\n";
}

void deleteEmployee() {
    int id;
    cout << "\nEnter Employee ID to Delete: ";
    cin >> id;

    for (int i = 0; i < employees.size(); i++) {
        if (employees[i].empId == id) {
            employees.erase(employees.begin() + i);
            cout << "Employee Deleted Successfully!\n";
            return;
        }
    }

    cout << "Employee Not Found!\n";
}

void countEmployees() {
    cout << "\nTotal Employees: " << employees.size() << endl;
}

int main() {
    int choice;

    do {
        cout << "\n\n===== EMPLOYEE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee";
        cout << "\n5. Delete Employee";
        cout << "\n6. Count Employees";
        cout << "\n7. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                updateEmployee();
                break;
            case 5:
                deleteEmployee();
                break;
            case 6:
                countEmployees();
                break;
            case 7:
                cout << "\nExiting Program...\n";
                break;
            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}