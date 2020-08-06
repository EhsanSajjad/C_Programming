#include<stdio.h>
int main()
{
	int n, i, mul=1;
	
	printf("let, the nth term factorial in n. So n is ");
	scanf("%d", &n);
	printf("\n\n");
	
	for(i=1;i<=n;i++)
	{
		mul*=i;
		printf("%d", i);
		
		if(i<n)
		{
			printf("*");
		}
		else
		{
			printf(" = ");
		}
	}
	printf("%d\n\n", mul);
}
