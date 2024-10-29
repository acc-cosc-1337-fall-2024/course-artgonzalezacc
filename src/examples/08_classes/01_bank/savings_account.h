//savings_account.h
#include "bank_account.h"

#ifndef SAVINGS_ACCOUNT_H
#define  SAVINGS_ACCOUNT_H

class SavingsAccount: public Account
{
public:    
    SavingsAccount(){}
    SavingsAccount(int b): Account(b){}
};

#endif