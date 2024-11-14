//atm.cpp
#include "atm.h"

using std::cout; using std::cin;
using std::unique_ptr; using std::make_unique;
using std::vector;

void ATM::display_balance()
{
    cout<<"Balance: "<<account->get_balance()<<"\n";
}

void ATM::make_deposit()
{
    auto amount = 0;
    cout<<"Enter deposit amount: ";
    cin>>amount;

    account->deposit(amount);
}

void ATM::make_withdraw()
{
    auto amount = 0;
    cout<<"Enter withdraw amount: ";
    cin>>amount;

    account->withdraw(amount);
}

//free functions
void run_menu()
{
   	auto account_index = 0, banking_menu_choice=0;

	vector<unique_ptr<Account>> accounts;
	accounts.push_back(make_unique<CheckingAccount>());
	accounts.push_back(make_unique<SavingsAccount>());

	cout<<accounts[0]->get_balance()<<"\n";
	cout<<accounts[1]->get_balance()<<"\n";

    do
    {
        cout<<"1-Checking 2-Savings\n";
        cin>>account_index;

        do
        {
            display_menu();
            cin>>banking_menu_choice;

            cout<<"Enter menu choice: ";
            auto* account = accounts[account_index - 1].get();

            ATM atm(account);

            handle_menu_option(atm, banking_menu_choice);
        } while (banking_menu_choice != 4);

    } while (true);

}

void display_menu()
{
    cout<<"\nACC Banking\n";
    cout<<"1-Deposit\n";
    cout<<"2-Withdraw\n";
    cout<<"3-Balance\n";
    cout<<"4-Exit Menu\n";
}

void handle_menu_option(ATM& atm, int menu_choice)
{
    switch ((menu_choice))
    {
    case 1:
        atm.make_deposit();
        break;
    case 2:
        atm.make_withdraw();
        break;
    case 3:
        atm.display_balance();
        break;
    case 4:
        cout<<"Exiting...\n";
        break;
    
    default:
        cout<<"Invalid option\n";
        break;
    }
}