#include <stdio.h>

// Here is an analogy to function strcmp
int mySum(int a, int b)
{
    int result = a + b;
    if (result == 10) {
        return 0;
    }
    return -1;
}

int main(void)
{
    puts("Send to inputs which will give you summation 10");

    if (mySum(1, 9) == 0)
    {
        puts("Yeah that is my sum function");
    }
    else {

        puts("not expected");
    }

    if (mySum(5, 5) == 0)
    {
        puts("Yeah that is my sum function");
    }
    else {

        puts("not expected");
    }

    if (mySum(4, 5) == 0)
    {
        puts("Yeah that is my sum function");
    }
    else {

        puts("not expected");
    }

    if (mySum(10, 0) == 0)
    {
        puts("Yeah that is my sum function");
    }
    else {

        puts("not expected");
    }
}
