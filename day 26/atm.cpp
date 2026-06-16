#include <iostream>
using namespace std;

double balance = 1000.0;
const int correctPin = 1234;

void checkBalance() {
    cout << "\nCurrent Balance: ₹" << balance << endl;
}
void depositMoney() {
    double amount;
    cout << "\nEnter amount to deposit: ₹";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "₹" << amount << " deposited successfully.\n";
    } else {
        cout << "Invalid amount!\n";
    }
}
void withdrawMoney() {
    double amount;
    cout << "\nEnter amount to withdraw: ₹";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount!\n";
    } else if (amount > balance) {
        cout << "Insufficient Balance!\n";
    } else {
        balance -= amount;
        cout << "₹" << amount << " withdrawn successfully.\n";
    }
}
bool verifyPin() {
    int pin;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter ATM PIN: ";
        cin >> pin;

        if (pin == correctPin) {
            cout << "\nPIN Verified Successfully!\n";
            return true;
        } else {
            attempts--;
            cout << "Incorrect PIN! ";

            if (attempts > 0)
                cout << attempts << " attempt(s) remaining.\n";
            else
                cout << "Account Blocked!\n";
        }
    }
    return false;
}

int main() {
    if (!verifyPin()) {
        return 0;
    }

    int choice;

    do {
        cout << "\n===== ATM MENU =====";
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance();
                break;

            case 2:
                depositMoney();
                break;

            case 3:
                withdrawMoney();
                break;

            case 4:
                cout << "\nThank you for using the ATM!\n";
                break;

            default:
                cout << "\nInvalid Choice! Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}