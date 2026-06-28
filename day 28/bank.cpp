#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

struct BankAccount
{
    int accountNumber;
    string name;
    int pin;
    float balance;
};

BankAccount accounts[MAX];
int totalAccounts = 0;

int findAccount(int accountNumber)
{
    for(int i = 0; i < totalAccounts; i++)
    {
        if(accounts[i].accountNumber == accountNumber)
            return i;
    }
    return -1;
}

void createAccount()
{
    if(totalAccounts >= MAX)
    {
        cout << "\nBank Storage Full!\n";
        return;
    }

    int accNo;

    cout << "\nEnter Account Number: ";
    cin >> accNo;

    if(findAccount(accNo) != -1)
    {
        cout << "Account Number Already Exists!\n";
        return;
    }

    accounts[totalAccounts].accountNumber = accNo;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, accounts[totalAccounts].name);

    cout << "Set 4-digit PIN: ";
    cin >> accounts[totalAccounts].pin;

    cout << "Enter Initial Balance: ";
    cin >> accounts[totalAccounts].balance;

    totalAccounts++;

    cout << "\nAccount Created Successfully!\n";
}

void accountMenu(int index)
{
    int choice;
    float amount;
    int newPin;

    do
    {
        cout << "\n===== ACCOUNT MENU =====\n";
        cout << "1. Display Details\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Change PIN\n";
        cout << "6. Logout\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "\nAccount Number : " << accounts[index].accountNumber;
            cout << "\nAccount Holder : " << accounts[index].name;
            cout << "\nBalance : Rs. " << accounts[index].balance << endl;
            break;

        case 2:
            cout << "Enter Deposit Amount: ";
            cin >> amount;

            if(amount > 0)
            {
                accounts[index].balance += amount;
                cout << "Deposit Successful!\n";
            }
            else
            {
                cout << "Invalid Amount!\n";
            }
            break;

        case 3:
            cout << "Enter Withdrawal Amount: ";
            cin >> amount;

            if(amount <= 0)
            {
                cout << "Invalid Amount!\n";
            }
            else if(amount > accounts[index].balance)
            {
                cout << "Insufficient Balance!\n";
            }
            else
            {
                accounts[index].balance -= amount;
                cout << "Withdrawal Successful!\n";
            }
            break;

        case 4:
            cout << "Current Balance: Rs. " << accounts[index].balance << endl;
            break;

        case 5:
            cout << "Enter New PIN: ";
            cin >> newPin;
            accounts[index].pin = newPin;
            cout << "PIN Changed Successfully!\n";
            break;

        case 6:
            cout << "Logged Out Successfully.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 6);
}

void login()
{
    int accNo;
    int pin;

    cout << "\nEnter Account Number: ";
    cin >> accNo;

    int index = findAccount(accNo);

    if(index == -1)
    {
        cout << "Account Not Found!\n";
        return;
    }

    int attempts = 3;

    while(attempts > 0)
    {
        cout << "Enter PIN: ";
        cin >> pin;

        if(pin == accounts[index].pin)
        {
            cout << "\nLogin Successful!\n";
            accountMenu(index);
            return;
        }

        attempts--;

        cout << "Incorrect PIN! Attempts Left: " << attempts << endl;
    }

    cout << "Too Many Wrong Attempts!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== BANK MANAGEMENT SYSTEM ==========\n";
        cout << "1. Create Account\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            createAccount();
            break;

        case 2:
            login();
            break;

        case 3:
            cout << "\nThank You for Using Our Bank.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}