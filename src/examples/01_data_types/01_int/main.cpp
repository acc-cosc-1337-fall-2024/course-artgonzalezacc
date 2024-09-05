#include<iostream>
#include "int.h"

using std::cout;

int main()
{
    int num = 5;

    int result = echo_variable(num);

    cout<<"Echo variable num value is: "<<num<<" result is "<<result;

    return 0;
}