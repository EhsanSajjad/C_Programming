#include<stdio.h>
int main()
{
	int i, n, a=0, b=1, c;
	printf("The number of Fibonacci sequence : ");
	scanf("%d", &n);
	printf("\n\n");
	printf("%d  ", a);
	printf("%d  ", b);
	
	for(i=1; i<=n; i++)
	{
		c=a+b;
		printf("%d  ", c);
		a=b;
		b=c;
		
	}
	printf("\n\n");
}
