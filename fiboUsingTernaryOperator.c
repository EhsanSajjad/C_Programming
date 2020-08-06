#include <stdio.h>

// function definition
int fibo(int n)
{
    return (n == 1 || n == 2) ? 1 : fibo(n - 1) + fibo(n - 2);
}

int main(void)
{
    printf("%d\n", fibo(6));
}
