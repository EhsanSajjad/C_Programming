#include <stdio.h>

// function definition
int fibo(int n)
{
    // base case
    // function call
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }


    // recursive case
    return fibo(n - 1) + fibo(n - 2);
}

int main(void)
{
    printf("%d\n", fibo(6));
    return 0;
}
