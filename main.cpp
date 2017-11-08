#include <iostream>
#include <iomanip>
#include "order.h"
#include "item.h"

using std::cout;
using std::endl;

//the user's actions
int main()
{
  cout<<"======================\n"
           <<"Welcome to Not POS POS\n"
           <<"======================\n";
  order current;
  item newItem;
  item apple("Apple", 18, 1002);

  current.addItem(newItem);
  current.addItem(apple);

  cout << std::fixed;
  cout << std::setprecision(2);

  cout << "Subtotal: $" << current.getSubtotal() << endl;
  cout << "Tax: $" << current.getTax() * current.getSubtotal() << endl;
  cout << "Total: $" << current.getTotal() << endl;

  cout << "Paid: $6.40" << endl;
  cout << "Balance: $" << current.balance(6.4) << endl;

  return 0;
}
