#include "bank_account.h"
#include <ctime> //guarantees a random number

using std::cin; using std::cout;

int main()
{
	auto balance = 0;
	
	cout<<"Enter amount: ";
	cin>>balance;

	Account account(balance);//represents a customer account

	cout<<account.get_balance()<<"\n";

	Account account1(500);//represents another customer's account

	return 0;
}