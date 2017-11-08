#include "order.h"

order::order() {
  tax = 7;
}

void order::addItem(item i) {
  itemList.push_back(i);
}

vector<item> order::getItems() {
  return itemList;
}

double order::getSubtotal() {
  double price = 0;
  for(int i = 0;i < itemList.size();i++) {
    price += itemList[i].getPrice();
  }
}

double order::getTax() {
  return tax;
}

double order::getTotal() {
  return getSubtotal() * (1 + (tax / 100.0));
}

double order::balance(double paid) {
  return getTotal() - paid;
}
