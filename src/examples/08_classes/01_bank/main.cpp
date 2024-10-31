#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
#include<vector>

using std::cin; using std::cout; 
using std::vector;

int main()
{
	auto account_index = 0;
	vector<Account> accounts = {CheckingAccount(), SavingsAccount()};
	cout<<"1 - Checking 2 - Savings";
	cin>>account_index;
	Account account = accounts[account_index - 1];
	ATM atm(account);

	atm.display_balance();
	
	atm.make_deposit();
	atm.display_balance();

	atm.make_withdraw();
	atm.display_balance();

	std::cout<<account.get_balance()<<"\n";

	return 0;
}