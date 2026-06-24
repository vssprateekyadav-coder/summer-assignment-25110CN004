#include <iostream>
#include <string>
using namespace std;

struct BankAccount {
    int accountNumber;
    string name;
    float balance;
};

int main() {
    BankAccount acc;

    cout << "Enter Account Number: ";
    cin >> acc.accountNumber;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, acc.name);

    cout << "Enter Initial Balance: ";
    cin >> acc.balance;

    int choice;
    float amount;

    do {
        cout << "\n===== BANK ACCOUNT SYSTEM =====\n";
        cout << "1. Display Account Details\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "\nAccount Number: " << acc.accountNumber;
            cout << "\nAccount Holder: " << acc.name;
            cout << "\nBalance: Rs. " << acc.balance << endl;
            break;

        case 2:
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            acc.balance += amount;
            cout << "Deposit Successful!\n";
            break;

        case 3:
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;

            if(amount <= acc.balance) {
                acc.balance -= amount;
                cout << "Withdrawal Successful!\n";
            }
            else {
                cout << "Insufficient Balance!\n";
            }
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}