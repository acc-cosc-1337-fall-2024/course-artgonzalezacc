#include<iostream>
#include <cstdlib> //access to rand

#ifndef ACCOUNT_H
#define ACCOUNT_H

//bank_account.h
class Account
{
friend void display_balance(Account& account);

public:
    Account(){std::cout<<"Default constructor\n"; get_balance_from_db(); }//default constructor - does nothing
    Account(int b) : balance(b){std::cout<<"Constructor w 1 param\n";} //constructor
    virtual int get_balance() const{return balance;}//inline
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance (){return bank_balance;}
//by default all functions/variables are private
protected:
    int some_function(){}
private://access specifier
    int balance;
    void get_balance_from_db();
    static int bank_balance;
};

#endif

//FREE FUNCTIONS-NOT PART OF THE CLASS!!!!!!
Account get_account_by_value();
Account& get_account_by_reference();