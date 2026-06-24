#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n===== STRING OPERATIONS MENU =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "String: " << str << endl;
            break;

        case 2:
            cout << "Length = " << str.length() << endl;
            break;

        case 3: {
            string temp = str;
            reverse(temp.begin(), temp.end());
            cout << "Reversed String: " << temp << endl;
            break;
        }

        case 4: {
            string temp = str;

            for(int i = 0; i < temp.length(); i++) {
                temp[i] = toupper(temp[i]);
            }

            cout << "Uppercase String: " << temp << endl;
            break;
        }

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}