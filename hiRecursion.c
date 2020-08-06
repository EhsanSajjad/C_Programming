#include <stdio.h>

void hi(int i)
{
    if (i <= 0) {
        printf("Bye\n");
        return;
    }
    printf("Hi\n");
    hi(i - 1);
}

int main()
{
    hi(4);
}
