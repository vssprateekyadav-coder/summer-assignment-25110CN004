#include <iostream>
#include <string>
using namespace std;

struct Ticket {
    int ticketNo;
    string name;
    int seats;
};

int main() {
    Ticket t;
    int availableSeats = 50;
    int choice;

    do {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. View Ticket\n";
        cout << "3. Check Available Seats\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter Ticket Number: ";
            cin >> t.ticketNo;

            cin.ignore();

            cout << "Enter Passenger Name: ";
            getline(cin, t.name);

            cout << "Enter Number of Seats: ";
            cin >> t.seats;

            if(t.seats <= availableSeats) {
                availableSeats -= t.seats;
                cout << "Ticket Booked Successfully!\n";
            } else {
                cout << "Not Enough Seats Available!\n";
            }
            break;

        case 2:
            cout << "\nTicket Number: " << t.ticketNo;
            cout << "\nPassenger Name: " << t.name;
            cout << "\nSeats Booked: " << t.seats << endl;
            break;

        case 3:
            cout << "Available Seats: " << availableSeats << endl;
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