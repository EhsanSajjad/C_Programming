#include <stdio.h>

/// a copy of the int n can be changed within the function without affecting the calling code
void passByValue(int n)
{
    n = 12;
}

/// a pointer to m is passed instead. No copy of m itself is created.
void passByAddress(int *m)
{
    *m =14;
}
int main(void)
{
    int x = 3;


    /// pass a copy of x's value as the argument
    passByValue(x);
    /// pass x's address as the argument
    passByAddress(&x);
    /// x was actually changed by the function and is now equal to 14 here

    return 0;
}
