#include <vector>

#include "OnlineOrder.h"

//adds an item to the order
void addItem(item) {
  this->items.push_back(item);
}

//returns a vector of the items purchased
std::vector <item> getItems() {
  return this->items;
}

//returns cost (before taxes)
double getSubtotal() {
  double subtotal = 0;
  for (int i = 0; i < this->items.size(); i++) {
    subototal += items[i].getPrice();
  }
  return subtotal;
}

//returns taxed amount (7.25 sales tax)
double getTax() {
  return this->getSubtotal() * this->taxRate;
}

//returns total amount with taxes included
double getTotal() {
  return this->getSubtotal() + this->getTax();
}

//returns balance, given an amount paid
double balance(double amountPaid) {
  return this->getTotal() - amountPaid;
}
