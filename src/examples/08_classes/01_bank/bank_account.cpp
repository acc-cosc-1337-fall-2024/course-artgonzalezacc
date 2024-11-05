//bank_account.cpp
#include "bank_account.h"

using std::cout;

void Account::get_balance_from_db()
{
    balance = (rand()%10000)+1; 
}

void Account::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
        bank_balance += amount;
    }
}

void Account::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
        bank_balance -= amount;
    }
}

//FREE FUNCTIONS-NOT PART OF THE CLASS
void display_balance(Account& account)
{
    account.balance = 0;
    cout<<"friend function: "<<account.balance<<"\n";
}

Account get_account_by_value()
{
    Account account;
    return account;
}

Account& get_account_by_reference()
{
    Account account;
    return account;
}

int Account::bank_balance = 100000;//initialize Account bank_balance