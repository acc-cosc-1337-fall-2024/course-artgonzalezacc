#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
#include<vector>
#include<memory>

using std::cin; using std::cout; 
using std::vector; using std::unique_ptr; using std::make_unique;


int main()
{
	unique_ptr<Account> savings = make_unique<SavingsAccount>();
	cout<<savings->get_balance()<<"\n";

	unique_ptr<Account> checking = make_unique<CheckingAccount>();
	cout<<checking->get_balance()<<"\n";

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