#include "void.h"

using std::cout;
using std::string;

void display_string_characters(const string str)
{
    for(auto i=0; i < str.size(); i++)
    {
        cout<<str[i]<<"\n";
    }
}

void replace_character_in_string(std::string str, char target, char replace_value)
{
    cout<<str<<"\n";
    
    for(auto i=0; i < str.size(); i++)
    {
        if(str[i] == target)
        {
            str[i] = replace_value;
        }
    }

    cout<<str<<"\n";
}