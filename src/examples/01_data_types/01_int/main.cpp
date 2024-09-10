#include<iostream>
#include "int.h"

using std::cout;
using std::cin;

int main()
{
    char letter; //create a variable; don't have to provide a value/assign value

    cout<<"Enter a letter: ";
    cin>>letter;

    int ascii = return_ascii_value(letter);

    cout<<"ASCII value: "<<ascii<<"\n";

    return 0;
}