#include <stdio.h>

int sumRecurse(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sumRecurse(n - 1) + n;
}

int main(void)
{
    printf("%d\n", sumRecurse(10));
}
