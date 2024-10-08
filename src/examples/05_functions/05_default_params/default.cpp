#include "default.h"

double get_total(int qty, double price)
{  
    return qty * price;
}

double get_total1(int qty, double price, double bonus)
{
    return qty * price + bonus;
}

double get_gross_pay(int hours, double rate)
{
    return hours * rate;
}

double get_gross_pay(int hours, double rate, double bonus)
{
    return hours * rate + bonus;
}

double get_gross_pay(double yearly_pay)
{
    return yearly_pay / 26;
}