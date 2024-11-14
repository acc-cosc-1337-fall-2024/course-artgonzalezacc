//atm.h
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include <iostream>
#include<memory>
#include<vector>

//header guard
#ifndef ATM_H
#define ATM_H
class ATM
{
public:
    ATM(Account* a) : account(a){/*empty code block*/}
    void display_balance();
    void make_deposit();
    void make_withdraw();
private:
    Account* account;
};

#endif

//free functions
void run_menu();
void display_menu();
void handle_menu_option(ATM& atm, int menu_choice);
