#include "while.h"

using std::cout; using std::setw;

//void means this function doesn't return a value
void display_hello(int num)
{
    while(num > 0)
    {
        cout<<"Hello\n";
        num--; //same as num -= 1
    }
}

//Using a while loop write code for sum_of_squares function that accepts an int and returns  
//the sum of all the squares of that number from 1 to the number. 
//Example: sum_of_squares(4) 
//1*1 + 2 * 2 + 3*3 + 4*4 = 30
int sum_of_squares(int num)
{
    auto total = 0;

    while(num > 0)
    {
        total += num * num;
        num--;
    } 

    return total;
}


//Using a while loop write code for display function that accepts a string and displays 
//each character of the string in a line
//Example: display("Hello")
/*
result:

H
e
l
l
0

*/


void while_nested_loop(int num1, int num2)
{
    auto i = 0;

    while(i < num1)
    {
        cout<<"Outer Loop\n";
        auto j = 0;

        while(j < num1)
        {
            cout<<"\tInner Loop\n";
            j++;
        }

        i++;
    }
}

void while_multiplication_table(int rows, int cols)
{
    auto i = 0;

    while(i < rows)
    {
        auto j = 0;
        
        while(j < cols)
        {
            auto product = (i + 1) * (j + 1);
            cout<<setw(4)<<product;
            j++;
        }

        cout<<"\n";
        i++;
    }
}