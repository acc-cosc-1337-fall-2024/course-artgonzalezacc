#include "function_str.h"

using std::cout;
//abc
void copy_string_param(std::string str)
{
    cout<<str<<"\n";//abc

    for (auto ch: str)//no memory operator means copy
    {
        ch = 'x';
    }

    cout<<str<<"\n";//xxx
}

void copy_string_param_ref_loop(std::string str)
{
    cout<<str<<"\n";//abc

    for (auto &ch: str)//no memory operator means copy
    {
        ch = 'x';
    }

    cout<<str<<"\n";//xxx
}

void ref_string_param(std::string &str)
{
    cout<<str<<"\n";//abc

    for (auto ch: str)//no memory operator means copy
    {
        ch = 'x';
    }

    cout<<str<<"\n";//xxx????
}

void ref_string_param_ref_loop(std::string &str)
{
    cout<<str<<"\n";//abc

    for (auto &ch: str)//no memory operator means copy
    {
        ch = 'x';
    }

    cout<<str<<"\n";//xxx????
}