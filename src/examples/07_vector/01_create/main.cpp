#include<vector>
#include<iostream>

using std::cout;
using std::vector;

int main()
{
    vector<int> nums{1, 5, 3};

    cout<<"Size of nums: "<<nums.size()<<"\n";
    cout<<"Capacity of nums: "<<nums.capacity()<<"\n";

    nums.push_back(10);

    cout<<"Size of nums: "<<nums.size()<<"\n";
    cout<<"Capacity of nums: "<<nums.capacity()<<"\n";

    nums.push_back(2);
    nums.push_back(11);

    cout<<"Size of nums: "<<nums.size()<<"\n";
    cout<<"Capacity of nums: "<<nums.capacity()<<"\n";

    nums.push_back(25);

    cout<<"Size of nums: "<<nums.size()<<"\n";
    cout<<"Capacity of nums: "<<nums.capacity()<<"\n";

    return 0;
}