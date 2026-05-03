#include <iostream>
#include "customer.h"
#include "seller.h"
#include "ticket.h"
using namespace std;

int main() {
    Customer c;
    Seller s;
    Ticket t;
    int choice;

    do {
        cout << "\n%%%% Ticket Booking System %%%%\n";
        cout << "1. Add Customer\n2. Display All Customers\n";
        cout << "3. Add Seller\n4. Display All Sellers\n";
        cout << "5. Add Ticket\n6. Display All Tickets\n";
        cout << "7. Search Ticket\n8. Delete Ticket\n";
        cout << "9. Copy Ticket Data to Backup\n";
        cout << "10. Update Ticket\n11. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1) {
            int id; 
            string name, phone;
            cout << "Enter Customer ID: "; cin >> id;
            cin.ignore();
            cout << "Enter Name: "; 
            getline(cin, name);
            cout << "Enter Phone: ";
            getline(cin, phone);
            c.setCustomerID(id); 
            c.setName(name);
            c.setPhone(phone);
            c.addCustomer();
        }
        else if (choice == 2)
            c.displayAll();

        else if (choice == 3) {
            int id; string name;
            cout << "Enter Seller ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            s.setSellerID(id); 
            s.setName(name);
            s.addSeller();
        }
        else if (choice == 4) 
            s.displayAll();

        else if (choice == 5) {
            int tid, cid, sid, typeChoice;
            string seat, dest, type;
            float price;
            cout << "Enter Ticket ID: ";
            cin >> tid;
            cout << "Enter Customer ID: ";
            cin >> cid;
            cout << "Enter Seller ID: "; 
            cin >> sid;
            cin.ignore();
            cout << "Enter Seat Number: "; getline(cin, seat);
            cout << "Enter Destination: "; getline(cin, dest);
            cout << "Select Ticket Type:\n1.Bus 2.Train 3.Movie 4.Flight\nChoice: ";
            cin >> typeChoice;
            cout << "Enter Price: "; cin >> price;
            if (typeChoice == 1) type = "Bus";
            else if (typeChoice == 2) type = "Train";
            else if (typeChoice == 3) type = "Movie";
            else if (typeChoice == 4) type = "Flight";
            else type = "Unknown";

            t.setTicketID(tid);
            t.setCustomerID(cid);
            t.setSellerID(sid);
            t.setSeatNumber(seat); 
            t.setDestination(dest);
            t.setTicketType(type);
            t.setPrice(price);
            t.addTicket();
        }
        else if (choice == 6)
            t.displayAll();
        else if (choice == 7) 
        { 
            int id;
            cout << "Enter Ticket ID: ";
            cin >> id; 
            t.searchTicket(id); 
        }
        else if (choice == 8) 
        {
            int id; cout << "Enter Ticket ID: "; 
            cin >> id; 
            t.deleteTicket(id);
        }
        else if (choice == 9)
            t.copyFile();
        else if (choice == 10) 
        {
            int id;
            cout << "Enter Ticket ID: ";
            cin >> id;
            t.updateTicket(id);
        }
    } while (choice != 11);

    return 0;
}