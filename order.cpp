#include "order.h"

void order::addItem(item newItem) {
    itemList.push_back(newItem);
}

double order::getSubtotal() {
  double sum = 0;
  for(int i = 0; i < itemList.size(); i++) {
      sum += itemList[i].getPrice();
  }
  return sum;
}

double order::getTax() {
  return getSubtotal()*0.1;
}

double order::getTotal() {
  return getSubtotal() + getTax();
}

double order::balance(double amtPaid) {
  return getTotal() - amtPaid;
}