#include "bank_account.h"
#include <ctime> //guarantees a random number
#include<vector>

using std::cin; using std::cout; 
using std::vector;

int main()
{
	vector<Account> accounts;
	auto balance = 0;
	
	cout<<"Enter amount: ";
	cin>>balance;

	Account account1(balance);//represents a customer account
	accounts.push_back(account1);

	cout<<"Enter amount: ";
	cin>>balance;
	Account account2(balance);//represents a customer account
	accounts.push_back(account2);

	for(auto account: accounts)
	{
		cout<<account.get_balance()<<"\n";
	}

	return 0;
}