#include<iostream>
#include<limits.h> //access to INT_MAX

using std::cout; using std::cin;

int main() //overflow
{
    int max_int = INT_MAX;
    //ADD 1 to max_int
    cout<<"Value of max_int: "<<max_int<<"\n";
    
    max_int += 1;
    cout<<"Value of max_int: "<<max_int<<"\n";

    //underflow
    float floatVar = 3.0E-47; //C++ can't represent a number that's too close to 0
    cout<<"Value of floatVar: "<<floatVar<<"\n";

    return 0;
}