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

void checker(int a, int b)
{
    int mySumFunctionReturn = mySum(a, b);
/// ekhane uporer full lyn na likhe direct call korleu hobe...mane niche if er vitore "mySumFunctionReturn" na likhe "mySum(a, b)" eta likhleu hobe..tokhon uporer int er lyn likhte hobe na
    if (mySumFunctionReturn == 0)
    {
        puts("Yeah that is my sum function");
    }
    else if (mySumFunctionReturn > 0)
    {
        puts("more than 10");
    }
    else
    {
        puts("Less than 10");
    }
}

int main(void)
{
    puts("Send to inputs which will give you summation 10");

    checker(9, 1);
    checker(9, 2);
    checker(9, 0);
}
