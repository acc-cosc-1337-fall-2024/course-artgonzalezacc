#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	//create memory
	int* num = new int(5);//create memory on the heap

	//use memory
	cout<<*num<<"\n";

	//delete/free memory
	delete num;

	
	return 0;
}