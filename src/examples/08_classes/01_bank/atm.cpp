//atm.cpp
#include "atm.h"

using std::cout; using std::cin;

void ATM::display_balance()
{
    cout<<"Balance: "<<account.get_balance()<<"\n";
}

void ATM::make_deposit()
{
    auto amount = 0;
    cout<<"Enter deposit amount: ";
    cin>>amount;

    account.deposit(amount);
}

void ATM::make_withdraw()
{
    auto amount = 0;
    cout<<"Enter withdraw amount: ";
    cin>>amount;

    account.withdraw(amount);
}