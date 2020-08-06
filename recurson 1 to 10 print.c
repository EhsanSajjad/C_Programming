#include <stdio.h>

void printRecursion(int n)
{
    if (n == 10)
    {
        return;
    }
    printf("%d ", n );
    printRecursion(n + 1);
}

int main()
{
    printRecursion(1);
}
