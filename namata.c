#include<stdio.h>
int main()
{
	int i=1, j, n;
	printf("Enter any smaller number :\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("\t\t\t\t\t\t  %d X %d = %d\n", j, i, i*j );
		}
		printf("\n");
	}
}
