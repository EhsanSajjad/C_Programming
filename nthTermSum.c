#include<stdio.h>
int main()
{
	int i, sum=0, n;
	printf("Summation of nth term series: The nth term is ");
	scanf("%d", &n);
	printf("\n\nSummation: ");
	for(i=1; i<=n;i++)
	{
		printf("%d",i);
		sum+=i;
		
		if(i<n)
		{
			printf("+");
		}
		else
		{
			printf("=");
		}
	}
	printf("%d\n\n", sum);
}
