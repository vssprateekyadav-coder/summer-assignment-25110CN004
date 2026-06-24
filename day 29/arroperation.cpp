#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== ARRAY OPERATIONS MENU =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum\n";
        cout << "3. Find Largest Element\n";
        cout << "4. Search Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Array Elements: ";
            for(int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 2: {
            int sum = 0;
            for(int i = 0; i < n; i++) {
                sum += arr[i];
            }
            cout << "Sum = " << sum << endl;
            break;
        }

        case 3: {
            int largest = arr[0];

            for(int i = 1; i < n; i++) {
                if(arr[i] > largest) {
                    largest = arr[i];
                }
            }

            cout << "Largest Element = " << largest << endl;
            break;
        }

        case 4: {
            int key;
            bool found = false;

            cout << "Enter element to search: ";
            cin >> key;

            for(int i = 0; i < n; i++) {
                if(arr[i] == key) {
                    cout << "Element found at index " << i << endl;
                    found = true;
                    break;
                }
            }

            if(!found) {
                cout << "Element not found!\n";
            }

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