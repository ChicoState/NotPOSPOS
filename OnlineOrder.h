#ifndef ONLINE_ORDER_H
#define ONLINE_ORDER_H

#include <vector>

#include "IOrder.h"

class OnlineOrder : public IOrder {
  public:
    //adds an item to the order
    void addItem(item);

    //returns a vector of the items purchased
    std::vector <item> getItems();

    //returns cost (before taxes)
    double getSubtotal();

    //returns taxed amount (7.25 sales tax)
    double getTax();

    //returns total amount with taxes included
    double getTotal();

    //returns balance, given an amount paid
    double balance(double);
  private:
    std::vector<item> items;
    double taxRate = 7.25;
};

#endif
