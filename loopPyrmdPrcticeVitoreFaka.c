#include<stdio.h>

int main()
{
    int x,y,n;
    
    scanf("%d", &n);
    
    for(x=n;x>=1;x--)
    {
        for (y=1; y<=x; y++)
        { 
        	printf(" ");
		}
	    printf("*");
		for(y=1;y<x;y++)
        {
            printf("");
        }
        for(y=n;y>x;y--)
        {
            printf("  ");
             printf("");
        }
        printf("*\n");
    
	}
	for(x=n;x>=1;x--)
	{
			printf("* ");
	}
	printf("**");

}
