#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
    string s0 = "initial string";

    string s1(s0, 8, 3);
    cout<<s1<<"\n";

    string s2("another character sequence", 12);
    cout<<s2<<"\n";

    string s3(10, 'x');
    cout<<s3<<"\n";

    string s4(10, 42);//10 *
    cout<<s4<<"\n";

    string s5("123456abac**(**)");
    cout<<s5<<"\n";

    return 0;
}