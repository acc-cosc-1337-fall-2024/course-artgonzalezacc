#include<iostream>
#include<vector>

using std::cout;
using std::vector;

int main()
{
    vector<int> nums {1, 5, 3};
    auto num = 5;

    cout<<"Address of lang: "<<&nums<<"\n";
    cout<<"Address of num: "<<&num<<"\n\n";

    cout<<nums[0]<<"\n";
    cout<<"Address of character at 0 index value 1: "<<&nums[0]<<"\n";
    cout<<"Address of character at 1 index value 5: "<<&nums[1]<<"\n";
    cout<<"Address of character at 2 index value 3: "<<&nums[2]<<"\n";
}