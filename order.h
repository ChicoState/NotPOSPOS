#include "IOrder.h"
#include <string>
#include <vector>

class order : public IOrder {
  private:
    std::vector<item> itemList;
  void addItem(item newItem);
  std::vector<item> getItems() {return itemList;};
  double getSubtotal();
  double getTax();
  double getTotal();
  double balance(double amtPaid);
};