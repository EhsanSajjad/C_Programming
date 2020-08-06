#include <stdio.h>

int main()
{
	int x, mul=1,i;
	scanf("%d", &i);
	for (x=1; x<=i; x++)
	mul*=x;
    printf("%d", mul);
}

