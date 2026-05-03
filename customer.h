#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer
{
private:
    int customerID;
    string name;
    string phone;
     
public:
    // Setters
    void setCustomerID(int id);
    void setName(string n);
    void setPhone(string p);

    // Getters
    int getCustomerID();
    string getName();
    string getPhone();

    // Functionalities
    void addCustomer();
    void displayAll();
};

#endif