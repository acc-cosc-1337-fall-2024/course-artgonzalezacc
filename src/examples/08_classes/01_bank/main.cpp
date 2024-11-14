#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
#include<vector>
#include<memory>

using std::cin; using std::cout; 
using std::vector; using std::unique_ptr; using std::make_unique;


int main()
{
	auto account_index = 0;

	vector<unique_ptr<Account>> accounts;
	accounts.push_back(make_unique<CheckingAccount>());
	accounts.push_back(make_unique<SavingsAccount>());

	cout<<accounts[0]->get_balance()<<"\n";
	cout<<accounts[1]->get_balance()<<"\n";

	/*cout<<"1 - Checking 2 - Savings";
	cin>>account_index;
	Account account = *accounts[account_index - 1];

	cout<<account.get_bank_balance()<<"\n";
	ATM atm(account);

	atm.display_balance();
	
	atm.make_deposit();
	atm.display_balance();

	atm.make_withdraw();
	atm.display_balance();

	std::cout<<account.get_balance()<<"\n";

	cout<<account.get_bank_balance()<<"\n";
	Account s = *accounts[1];	
	cout<<s.get_bank_balance()<<"\n";*/

	return 0;
}