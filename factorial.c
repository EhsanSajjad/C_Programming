#include <stdio.h>

int factorial(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }
    // recursive case
    return n * factorial(n - 1);
}

// iterative
int factLoop(int n)
{
    int product = 1;

    while (n >= 1)
    {
        product = product * n;
        n = n - 1;
    }
    return product;
}


int main()
{
    // printf("%d\n", factorial(5));
    printf("%d\n", factLoop(5));
}
