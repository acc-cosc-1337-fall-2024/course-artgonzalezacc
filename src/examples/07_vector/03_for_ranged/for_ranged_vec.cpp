#include "for_ranged_vec.h"

using std::cout;
using std::vector;

void loop_vector_w_while()
{
    vector<int> nums{8, 6, 10};
    auto index = 0;
    nums[0] = 100; //can modify values with indexing

    while(index < nums.size())
    {
        cout<<nums[index]<<"\n";
        index++;
    }
}

void loop_vector_w_for()
{
    vector<int> nums{8, 6, 10};

    for(long unsigned int i=0; i < nums.size(); i++)    
    {
        cout<<nums[i]<<"\n";           
    }
}

void loop_vector_w_for_ranged()
{
    vector<int> nums{8, 6, 10};

    for(auto num:nums)
    {
        cout<<num<<"\n";
    }
}