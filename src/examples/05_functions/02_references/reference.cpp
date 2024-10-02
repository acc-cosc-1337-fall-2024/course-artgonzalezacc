#include "reference.h"

void ref_param(int &num)
{
    num = 10;
}

void const_ref_param(const int &num)
{
   //num = 10;this statement generates a build error. Variable is read only
}