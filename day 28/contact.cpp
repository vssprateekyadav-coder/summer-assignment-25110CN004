#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    Contact contacts[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice) {

        case 1:
            cout << "Enter Name: ";
            getline(cin, contacts[count].name);

            cout << "Enter Phone Number: ";
            getline(cin, contacts[count].phone);

            count++;
            cout << "Contact Added Successfully!\n";
            break;

        case 2:
            cout << "\n----- Contact List -----\n";

            for(int i = 0; i < count; i++) {
                cout << "Name: " << contacts[i].name
                     << "\tPhone: " << contacts[i].phone
                     << endl;
            }
            break;

        case 3: {
            string searchName;
            cout << "Enter Name to Search: ";
            getline(cin, searchName);

            bool found = false;

            for(int i = 0; i < count; i++) {
                if(contacts[i].name == searchName) {
                    cout << "\nContact Found\n";
                    cout << "Name: " << contacts[i].name << endl;
                    cout << "Phone: " << contacts[i].phone << endl;
                    found = true;
                    break;
                }
            }

            if(!found) {
                cout << "Contact Not Found!\n";
            }
            break;
        }

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}