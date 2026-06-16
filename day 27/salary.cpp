#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int empId;
    string name;
    double basicSalary;
};

vector<Employee> employees;

void addEmployee() {
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.empId;

    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, e.name);

    cout << "Enter Basic Salary: ";
    cin >> e.basicSalary;

    employees.push_back(e);
}

void displaySalaries() {
    if (employees.empty()) {
        cout << "No Employee Records Found!\n";
        return;
    }

    cout << "\n===== SALARY RECORDS =====\n";

    for (int i = 0; i < employees.size(); i++) {
        double hra = employees[i].basicSalary * 0.20;
        double da = employees[i].basicSalary * 0.10;
        double grossSalary = employees[i].basicSalary + hra + da;

        cout << "\nEmployee ID : " << employees[i].empId;
        cout << "\nName        : " << employees[i].name;
        cout << "\nBasic Salary: " << employees[i].basicSalary;
        cout << "\nHRA         : " << hra;
        cout << "\nDA          : " << da;
        cout << "\nGross Salary: " << grossSalary;
        cout << "\n------------------------";
    }
}

void searchEmployee() {
    int id;

    cout << "Enter Employee ID: ";
    cin >> id;

    for (int i = 0; i < employees.size(); i++) {
        if (employees[i].empId == id) {
            double hra = employees[i].basicSalary * 0.20;
            double da = employees[i].basicSalary * 0.10;

            cout << "\nName: " << employees[i].name;
            cout << "\nBasic Salary: " << employees[i].basicSalary;
            cout << "\nGross Salary: "
                 << employees[i].basicSalary + hra + da << endl;
            return;
        }
    }

    cout << "Employee Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== SALARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Salary Records";
        cout << "\n3. Search Employee Salary";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displaySalaries();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid Choice!";
        }

    } while (choice != 4);

    return 0;
}