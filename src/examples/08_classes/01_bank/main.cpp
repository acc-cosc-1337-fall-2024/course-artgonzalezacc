#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
#include<vector>

using std::cin; using std::cout; 
using std::vector;

int main()
{
	auto account_index = 0;
	Account account = SavingsAccount();
	cout<<account.get_balance()<<"\n";
	Account* account_ptr = &account;
	cout<<account_ptr->get_balance()<<"\n";
	SavingsAccount* savings_account_ptr = static_cast<SavingsAccount*>(account_ptr);
	cout<<savings_account_ptr->get_balance()<<"\n";


/*	vector<Account> accounts = {CheckingAccount(), SavingsAccount()};
	cout<<"1 - Checking 2 - Savings";
	cin>>account_index;
	Account account = accounts[account_index - 1];

	cout<<account.get_bank_balance()<<"\n";
	ATM atm(account);

	atm.display_balance();
	
	atm.make_deposit();
	atm.display_balance();

	atm.make_withdraw();
	atm.display_balance();

	std::cout<<account.get_balance()<<"\n";

	cout<<account.get_bank_balance()<<"\n";
	Account s = accounts[1];	
	cout<<s.get_bank_balance()<<"\n";*/
	return 0;
}