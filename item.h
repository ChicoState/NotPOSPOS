#include "IItem.h"
#include <string>

class item : public IItem {
  public:
    item(){this->name=""; this->price=0.0; this->sku=0;}
    item(std::string name, double price, int sku) {
      this->name = name;
      this->price = price;
      this->sku = sku;
    };
  std::string getName(){return name;};
  double getPrice(){return price;};
  int getSKU(){return sku;};
  private:
    std::string name;
    double price;
    int sku;
};