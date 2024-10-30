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
    int get_balance() const{return balance;}//inline
    void deposit(int amount);
    void withdraw(int amount);
//by default all functions/variables are private
protected:
    int some_function(){}
private://access specifier
    int balance;
    void get_balance_from_db();
};

#endif