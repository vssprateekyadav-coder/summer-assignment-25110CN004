#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    bool issued;
};

int main() {
    Book books[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Book ID: ";
            cin >> books[count].id;

            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, books[count].title);

            books[count].issued = false;
            count++;

            cout << "Book Added Successfully!\n";
            break;

        case 2:
            cout << "\nBooks in Library:\n";

            for (int i = 0; i < count; i++) {
                cout << "ID: " << books[i].id
                     << "\tTitle: " << books[i].title
                     << "\tStatus: "
                     << (books[i].issued ? "Issued" : "Available")
                     << endl;
            }
            break;

        case 3: {
            int id;
            cout << "Enter Book ID to Issue: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (books[i].id == id) {
                    books[i].issued = true;
                    cout << "Book Issued Successfully!\n";
                    break;
                }
            }
            break;
        }

        case 4: {
            int id;
            cout << "Enter Book ID to Return: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (books[i].id == id) {
                    books[i].issued = false;
                    cout << "Book Returned Successfully!\n";
                    break;
                }
            }
            break;
        }

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}