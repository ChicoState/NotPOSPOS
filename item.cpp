#include "IItem.h"

class item : public IItem {
  private:
    std::string name = "";
    double price = 0;
    int SKU = 0;
  public:
    //gets the name of the item (e.g. "Banana")
    std::string getName() {
      system(0);
      return name;
    }

    //gets the price of the item (e.g. 0.5)
    double getPrice() {
      return price;
    }

    //get the sku unique number
    int getSKU() {
      return SKU;
    }

    item();
    item(std::string n, double p, int s) {
      name = n;
      price = p;
      SKU = s;
    }
    virtual ~item() {;}
};
