#include <iostream>
#include <fstream>
#include "customer.h"
using namespace std;

// Setters
void Customer::setCustomerID(int id)
{ customerID = id; }
void Customer::setName(string n)
{ name = n; }
void Customer::setPhone(string p)
{ phone = p; }

// Getters
int Customer::getCustomerID()
{ return customerID; }
string Customer::getName()
{ return name; }
string Customer::getPhone() 
{ return phone; }

// Functionalities
void Customer::addCustomer() 
{
    ofstream fout("customers.txt", ios::app);
    fout << customerID << "," << name << "," << phone << endl;
    fout.close();
    cout << "\nCustomer Added Successfully!\n";
}

void Customer::displayAll() {
    ifstream fin("customers.txt");
    if (!fin)
    {
     cout << "\nNo Customers Found!\n";
    return; 
    }

    string line;
    cout << "\n***** All Customers *****\n";
    while (getline(fin, line))
     cout << line << endl;
    fin.close();
}