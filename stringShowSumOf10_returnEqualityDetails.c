#include <stdio.h>

// Here is an analogy to function strcmp
int mySum(int a, int b)
{
    int result = a + b;
    if (result == 10) {
        return 0;
    }
    else if (result > 10)
    {
        return 1;
    }
    else {
        return -1;
    }
}


int main(void)
{
    puts("Send to inputs which will give you summation 10");

   // int mySumFunctionReturn = mySum(1, 9);  -> evabeu likha jabe... tokhon porer dhap er moto likhte hobe

    if (mySum(1, 9) == 0)
    {
        puts("Yeah that is my sum function");
    }
    else if (mySum(1, 9) > 0)
    {
        puts("more than 10");
    }
    else
    {
        puts("Less than 10");
    }

    int mySumFunctionReturn2 = mySum(2, 9);

    if (mySumFunctionReturn2 == 0)
    {
        puts("Yeah that is my sum function");
    }
    else if (mySumFunctionReturn2 > 0)
    {
        puts("more than 10");
    }
    else
    {
        puts("Less than 10");
    }

    int mySumFunctionReturn3 = mySum(2, 5);

    if (mySumFunctionReturn3 == 0)
    {
        puts("Yeah that is my sum function");
    }
    else if (mySumFunctionReturn3 > 0)
    {
        puts("more than 10");
    }
    else
    {
        puts("Less than 10");
    }

}
