#include <stdio.h>

int multiply(int n)
{
    printf("I am in multiply process now\n");
    return n * n;
}

int divide(int n)
{
    printf("I am in division process now\n");
    return (multiply(n) / n);
}

int plus(int n)
{
    printf("I am in plus now\n");
    return (divide(n) + n);
}

int minus(int n)
{
    printf("I am in minus now\n");
    return (plus(n) - n);
}

int main(void)
{
    printf("\nFinal result: %d\n", minus(3));
}
