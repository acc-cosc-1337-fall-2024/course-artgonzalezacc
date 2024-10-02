#include<iostream>
#include "reference.h"

using std::cout;

int main()
{
    int num = 5;
    cout<<"num: "<<num<<"\n";

    ref_param(num);

    cout<<"num: "<<num<<"\n";

    return 0;
}