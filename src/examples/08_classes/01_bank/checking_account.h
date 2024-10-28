//checking_account.h
#include "bank_account.h"

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

class CheckingAccount: public Account
{
 public:
    CheckingAccount(){}
    CheckingAccount(int b) : Account(b){}
};

#endif