#include <stdio.h>
int main()
{
    int x,y;
    for(x=10;x>=0;x--)
    {
        for(y=0;y<x;y++)
        {
            printf(" ");
        }
        for(y=10;y>x;y--)
        {
            printf("#");
        }
        printf("*\n");
    }


}
