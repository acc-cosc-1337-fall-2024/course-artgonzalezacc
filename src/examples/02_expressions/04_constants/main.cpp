#include<iostream>
#include "constants.h"

using std::cout; using std::cin;

int main()
{
    int value;
    cout<<"Type number: ";
    cin>>value;

    double result = calculate_interest_rate(value);
    cout<<result<<"\n";

    return 0;
}