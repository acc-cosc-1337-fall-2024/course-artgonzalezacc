#include<iostream>
#include <cstdlib> //access to rand


//bank_account.h
class Account
{
public:
    Account(){std::cout<<"Default constructor\n"; get_balance_from_db(); }//default constructor - does nothing
    Account(int b) : balance(b){std::cout<<"Constructor w 1 param\n";} //constructor
    int get_balance() const{return balance;}//inline
//by default all functions/variables are private
private://access specifier
    int balance;
    void get_balance_from_db();
};
