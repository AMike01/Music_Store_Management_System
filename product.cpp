#include "product.h"


// Constructor and Destructor

Product::Product(std::string n, double p): name(n), price(p) {}

Product::~Product() {}

// Get Methods

std::string Product:::getName() const { return name;}
double Product::getPrice() const { return price;}

// Set Methods

void Product::setName(std::string newName) { name = newName;}
void Product::setPrice(double newPrice) { price = newPrice;}

