#include<iostream>

using std::cout;

int main()
{
    int num = 5;
    int &num_ref = num;//work with the memory address of num

    cout<<"Value of num: "<<num<<"\n";
    cout<<"num_ref value: "<<num_ref<<"\n";
    num_ref = 10;
    cout<<"num_ref value: "<<num_ref<<"\n";

    cout<<"Value of num: "<<num<<"\n";


    return 0;
}