//bank_account.cpp
#include "bank_account.h"

void Account::get_balance_from_db()
{
    balance = (rand()%10000)+1; 
}

void Account::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void Account::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}