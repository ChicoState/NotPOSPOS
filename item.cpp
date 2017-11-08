#include "item.h"
#include <string>

item::item{
    name = "Apple";
    price = 0.49;
    SKU = 2948923;
}

std::string item::getName(){
    return name;
}

double item::getPrice(){
    return price;
}

int item::getSKU(){
    return SKU;    
}