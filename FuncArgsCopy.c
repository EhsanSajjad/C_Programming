#include <stdio.h>

void swapTwoValues(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int x = 10;
    int y = 20;
    printf("x = %d , y = %d\n", x, y);
    // address(reference)
    swapTwoValues(&x, &y);
    printf("x = %d , y = %d\n", x, y);
}
