//bank_account.cpp
#include "bank_account.h"

void Account::get_balance_from_db()
{
    balance = (rand()%10000)+1; 
}