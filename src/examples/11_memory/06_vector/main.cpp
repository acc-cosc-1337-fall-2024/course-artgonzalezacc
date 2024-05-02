//
#include "my_vector.h"

using std::cout;

int main()
{   
    Vector v(3);
    v.Push_Back(5);
    
    cout<<v[0]<<"\n";

    v.Push_Back(10);
    cout<<v[1]<<"\n";

    v.Push_Back(7);
    cout<<v[2]<<"\n";
    cout<<"Capacity "<<v.Capacity()<<"\n";

    v.Push_Back(4);
    cout<<v[3]<<"\n";
    cout<<"Capacity "<<v.Capacity()<<"\n";
}

