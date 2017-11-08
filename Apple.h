#ifndef APPLE_H
#define APPLE_H

#include "IItem.h"

class Apple : public IItem {
  public:
    std::string getName();
    double getPrice();
    int getSKU();
  private:
    std::string name = "Apple";
    double price = 0.50;
    int SKU = 1359;
};

#endif
