#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num1 = 5, num2 = 10;
	int* num_ptr; //don't have to point to amything
	num_ptr = &num1;
	cout<<"Address of num1: "<<&num1<<"\n";
	cout<<"Address that num_ptr points to: "<<num_ptr<<"\n";
	cout<<"Value of the variable num_ptr points to: "<<*num_ptr<<"\n";

	num_ptr = &num2;
	cout<<*num_ptr<<"\n";

	
	return 0;
}