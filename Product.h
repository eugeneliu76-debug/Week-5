#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
using namespace std;

// Product class definition
class Product {
private:
    int id;
    string name;
    float price;

public:
    // Constructor (called when object is created)
    Product(int i, string n, float p);

    // Destructor (called when object is destroyed)
    ~Product();

    // Method to print product details
    void printDetails();
};

#endif
