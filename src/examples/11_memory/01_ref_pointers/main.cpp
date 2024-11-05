#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num1 = 10, num2=20;
	int& num_ref = num1;
	cout<<"Value of num1 via num_ref: "<<num_ref<<"\n";
	num_ref = num2;
	num_ref = 30;
	cout<<"Value of num?? via num_ref: "<<num_ref<<"\n";
	cout<<num2<<"\n";
	cout<<num1<<"\n";
	
	int* num_ptr = &num1;//point to memory of num1
	*num_ptr = 100;
	cout<<"Value of num1 via num_ptr: "<<*num_ptr<<"\n";
	cout<<"Address of num1: "<<&num1<<"\n";
	cout<<"Address that num_ptr points to: "<<num_ptr<<"\n";
	cout<<"Address of num_ptr: "<<&num_ptr<<"\n";

	num_ptr = &num2;
	cout<<"Value of num2 via num_ptr: "<<*num_ptr<<"\n";



	return 0;
}