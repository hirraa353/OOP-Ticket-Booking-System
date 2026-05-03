
#ifndef TICKET_H
#define TICKET_H

#include <string>
using namespace std;

class Ticket {
private:
    int ticketID;
    int customerID;
    int sellerID;
    string seatNumber;
    string destination;
    string ticketType;
    float price;

public:
    // Setters
    void setTicketID(int id);
    void setCustomerID(int id);
    void setSellerID(int id);
    void setSeatNumber(string seat);
    void setDestination(string dest);
    void setTicketType(string type);
    void setPrice(float p);

    // Getters
    int getTicketID();
    int getCustomerID();
    int getSellerID();
    string getSeatNumber();
    string getDestination();
    string getTicketType();
    float getPrice();

    // Functionalities
    void addTicket();
    void displayAll();
    void searchTicket(int id);
    void deleteTicket(int id);
    void copyFile();
    void updateTicket(int id);
};

#endif