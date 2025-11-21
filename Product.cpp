#include "Product.h"

// Constructor
Product::Product(int i, string n, float p) : id(i), name(n), price(p) {
    cout << "Constructor called!" << endl;
}

// Destructor
Product::~Product() {
    cout << "Destructor called!" << endl;
}

// Method to print details
void Product::printDetails() {
    cout << "ID: " << id 
         << ", Name: " << name 
         << ", Price: $" << price << endl;
}
