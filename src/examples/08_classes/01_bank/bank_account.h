//bank_account.h
#include<iostream>
#include<stdlib.h>//access to rand() function

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{

public: //other regions of code, main, test, other function, another class can see the get_balance
    BankAccount(){get_balance_from_db();}//with no parameters-default synthesized constructor
    BankAccount(int b) : balance(b)  {/*empty class function/method block*/ }

    int get_balance(){return balance;}
    void deposit(int amount);
    void withdraw(int amount);

private://only BankAccount can read/write to the balance directly
    int balance{0}; //initialize balance to zero on class creation  
    void get_balance_from_db();
};

#endif