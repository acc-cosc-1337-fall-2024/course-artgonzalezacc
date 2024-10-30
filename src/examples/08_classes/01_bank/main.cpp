#include "atm.h"

using std::cin; using std::cout; 

int main()
{
	Account& account = get_account_by_reference();

	display_balance(account);

	cout<<"Main: "<<account.get_balance()<<"\n";

/*	Account account(1000);
	ATM atm(account);

	atm.display_balance();
	
	atm.make_deposit();
	atm.display_balance();

	atm.make_withdraw();
	atm.display_balance();

	std::cout<<account.get_balance()<<"\n";*/

	return 0;
}