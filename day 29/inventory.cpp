#include <iostream>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Product products[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter Product ID: ";
            cin >> products[count].id;

            cin.ignore();

            cout << "Enter Product Name: ";
            getline(cin, products[count].name);

            cout << "Enter Quantity: ";
            cin >> products[count].quantity;

            cout << "Enter Price: ";
            cin >> products[count].price;

            count++;
            cout << "Product Added Successfully!\n";
            break;

        case 2:
            cout << "\n----- Product List -----\n";

            for(int i = 0; i < count; i++) {
                cout << "ID: " << products[i].id
                     << "\nName: " << products[i].name
                     << "\nQuantity: " << products[i].quantity
                     << "\nPrice: Rs. " << products[i].price
                     << "\n------------------------\n";
            }
            break;

        case 3: {
            int searchId;
            bool found = false;

            cout << "Enter Product ID to Search: ";
            cin >> searchId;

            for(int i = 0; i < count; i++) {
                if(products[i].id == searchId) {
                    cout << "\nProduct Found\n";
                    cout << "ID: " << products[i].id << endl;
                    cout << "Name: " << products[i].name << endl;
                    cout << "Quantity: " << products[i].quantity << endl;
                    cout << "Price: Rs. " << products[i].price << endl;

                    found = true;
                    break;
                }
            }

            if(!found) {
                cout << "Product Not Found!\n";
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