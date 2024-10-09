#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
    string lang = "C++";

    cout<<"size of lang: "<<lang.size()<<"\n";
    cout<<"capacity of lang: "<<lang.capacity()<<"\n";

    lang.append("1");
    lang.append("2");
    lang.append("3");
    lang.append("4");
    lang.append("5");

    lang.append("6");
    lang.append("7");
    lang.append("8");
    lang.append("9");
    lang.append("0");

    lang.append("1");
    lang.append("2");

    cout<<"size of lang: "<<lang.size()<<"\n";
    cout<<"capacity of lang: "<<lang.capacity()<<"\n";

    lang.append("3");

    cout<<"size of lang: "<<lang.size()<<"\n";
    cout<<"capacity of lang: "<<lang.capacity()<<"\n";

    return 0;
}