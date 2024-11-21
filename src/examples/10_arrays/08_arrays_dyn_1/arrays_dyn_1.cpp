#include "arrays_dyn_1.h"

using std::cout;

void use_dynamic_memory_array(const int size)
{
    int* nums = new int[size]{6, 1, 10};//create heap memory 

    cout<<nums[0]<<"\n";
    cout<<nums[1]<<"\n";
    cout<<nums[2]<<"\n";

    delete[] nums;

}