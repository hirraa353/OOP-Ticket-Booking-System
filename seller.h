#ifndef SELLER_H
#define SELLER_H

#include <string>
using namespace std;

class Seller {
private:
    int sellerID;
    string name;

public:
    // Setters
    void setSellerID(int id);
    void setName(string n);

    // Getters
    int getSellerID();
    string getName();

    // Functionalities
    void addSeller();
    void displayAll();
};

#endif
