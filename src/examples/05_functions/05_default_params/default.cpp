#include "default.h"

double get_total(int qty, double price)
{  
    return qty * price;
}

double get_total1(int qty, double price, double bonus)
{
    return qty * price + bonus;
}