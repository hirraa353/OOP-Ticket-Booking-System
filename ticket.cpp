#include <iostream>
#include <fstream>
#include "ticket.h"
using namespace std;

// Setters
void Ticket::setTicketID(int id)
{ ticketID = id; }
void Ticket::setCustomerID(int id) 
{ customerID = id; }
void Ticket::setSellerID(int id)
{ sellerID = id; }
void Ticket::setSeatNumber(string seat) 
{ seatNumber = seat; }
void Ticket::setDestination(string dest)
{ destination = dest; }
void Ticket::setTicketType(string type) 
{ ticketType = type; }
void Ticket::setPrice(float p) 
{ price = p; }

// Getters
int Ticket::getTicketID()
{ return ticketID; }
int Ticket::getCustomerID() 
{ return customerID; }
int Ticket::getSellerID()
{ return sellerID; }
string Ticket::getSeatNumber() 
{ return seatNumber; }
string Ticket::getDestination() 
{ return destination; }
string Ticket::getTicketType()
{ return ticketType; }
float Ticket::getPrice() 
{ return price; }

// Functionalities
void Ticket::addTicket()
{
    ofstream fout("tickets.txt", ios::app);
    fout << ticketID << "," << customerID << "," << sellerID << ","
        << seatNumber << "," << destination << "," << ticketType << ","
        << price << endl;
    fout.close();
    cout << "\nTicket Added Successfully!\n";
}

void Ticket::displayAll() 
{
    ifstream fin("tickets.txt");
    if (!fin) 
    { 
    cout << "\nNo Tickets Found!\n"; 
    return;
    }

    string line;
    cout << "\n***** All Tickets *****\n";
    while (getline(fin, line)) 
    cout << line << endl;
    fin.close();
}

void Ticket::searchTicket(int id) 
{
    ifstream fin("tickets.txt");
    if (!fin)
    {
    cout << "\nFile not found.\n";
    return; 
    }

    string line;
    bool found = false;
    while (getline(fin, line))
    {
        int fileID = stoi(line.substr(0, line.find(",")));
        if (fileID == id)
        {
            cout << "\nTicket Found:\n" << line << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "\nTicket Not Found.\n";
    fin.close();
}

void Ticket::deleteTicket(int id) {
    ifstream fin("tickets.txt");
    ofstream fout("temp.txt");

    string line;
    bool found = false;
    while (getline(fin, line)) {
        int fileID = stoi(line.substr(0, line.find(",")));
        if (fileID == id)
        { 
            found = true; 
            continue; 
        }
        fout << line << endl;
    }

    fin.close();
    fout.close();
    remove("tickets.txt");
    rename("temp.txt", "tickets.txt");

    if (found) 
    cout << "\nTicket Deleted Successfully!\n";
    else
    cout << "\nTicket Not Found!\n";
}

void Ticket::copyFile() {
    ifstream fin("tickets.txt");
    ofstream fout("backup.txt");
    fout << fin.rdbuf();
    fin.close();
    fout.close();
    cout << "\nData Copied to backup.txt\n";
}
void Ticket::updateTicket(int id) {
    ifstream fin("tickets.txt");
    ofstream fout("temp.txt");

    string line;
    bool found = false;

    while (getline(fin, line)) {
        int fileID = stoi(line.substr(0, line.find(",")));

        if (fileID == id) {
            found = true;
            string seat, dest, type;
            float price;

            cin.ignore();
            cout << "Enter New Seat Number: ";
            getline(cin, seat);
            cout << "Enter New Destination: ";
            getline(cin, dest);
            cout << "Enter New Ticket Type: "; 
            getline(cin, type);
            cout << "Enter New Price: "; cin >> price;

            fout << id << "," << customerID << "," << sellerID << ","
                << seat << "," << dest << "," << type << "," << price << endl;
        }
        else {
            fout << line << endl;
        }
    }

    fin.close();
    fout.close();
    remove("tickets.txt");
    rename("temp.txt", "tickets.txt");

    if (found) cout << "\nTicket Updated Successfully!\n";
    else cout << "\nTicket Not Found!\n";
}