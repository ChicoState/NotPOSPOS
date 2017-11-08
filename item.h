#ifndef ITEM_H
#define ITEM_H

#include<string>
#include "IItem.h"

class item : IItem
{
public:
    item();
    std::string getName();
    double getPrice();
    int getSKU();
    
private:
    std::string name;
    double price;
    int SKU;
    
};

#endif