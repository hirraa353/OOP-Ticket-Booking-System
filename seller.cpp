#include <iostream>
#include <fstream>
#include "seller.h"
using namespace std;

// Setters
void Seller::setSellerID(int id) 
{ sellerID = id; }
void Seller::setName(string n)
{ name = n; }

// Getters
int Seller::getSellerID()
{ return sellerID; }
string Seller::getName() 
{ return name; }

// Functionalities
void Seller::addSeller() {
    ofstream fout("sellers.txt", ios::app);
    fout << sellerID << "," << name << endl;
    fout.close();
    cout << "\nSeller Added Successfully!\n";
}

void Seller::displayAll() 
{
    ifstream fin("sellers.txt");
    if (!fin) 
    { cout << "\nNo Sellers Found!\n";
    return;
    }

    string line;
    cout << "\n***** All Sellers *****\n";
    while (getline(fin, line)) 
    cout << line << endl;
    fin.close();
}