#include "do_while.h"

using std::cout; using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue. 
void prompt_user()
{
    auto choice = 'Y';

    do
    {
        cout<<"Enter Y or y to continue...";
        cin>>choice;

    } while (choice == 'Y' || choice == 'y');
    
} 

void display_menu()
{
    cout<<"1-Echo number\n";
    cout<<"2-Get char ASCII\n";
    cout<<"3-Exit\n";
}

void run_menu()
{
    auto option = 0;
    
    do
    {
        display_menu();
        cout<<"Enter menu option: ";
        cin>>option;

        handle_user_option(option);

    }while(option != 3);
}

void handle_user_option(int num)
{
    auto num1 = 0;
    int result1;
    auto letter = 'a';

    switch(num)
    {
    case 1:
        
        cout<<"Enter a number: ";
        cin>>num1;

        result1 = echo_number(num1);
        cout<<"You entered "<<result1<<"\n";
        break;
    case 2:
        letter = 'a';
        cout<<"Enter a char\n";
        cin>>letter;

        result1 = get_ascii_value(letter);
        cout<<"ASCII value for "<<letter<<" is "<<result1<<"\n";

        break;
    case 3:
        cout<<"Program exiting...\n";
        break;
    default:
        cout<<"Invalid option\n";
        break;
    }
}

int echo_number(int num)
{
    return num;
}

int get_ascii_value(char letter)
{
    return letter;
}





