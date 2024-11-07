#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
#include<vector>
#include<memory>

using std::cin; using std::cout; 
using std::vector; using std::shared_ptr; using std::make_shared;

int main()
{

	shared_ptr<int> num_sp1 = make_shared<int>(10);
	cout<<*num_sp1<<"\n";
	cout<<num_sp1.use_count()<<"\n";
	shared_ptr<int> num_sp2 = num_sp1;
	cout<<*num_sp2<<"\n";
	cout<<num_sp2.use_count()<<"\n";

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