#include "function_str.h"

int main()
{
    std::string lang = "abc";
    //copy_string_param(lang);
    //copy_string_param_ref_loop(lang);
    //ref_string_param(lang);
    ref_string_param_ref_loop(lang);
    
    return 0;
}