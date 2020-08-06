#include<stdio.h>
int main()
{
	int a[100][100];
	int i, j, n;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<i+1;j++);
		{
			if(i==j || i==0)
			a[i][j]=1;
			else
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
	for(i=0;i<n;i++)
	{
		for (j=0;j<=n-i;j++)
		{
			printf("  ");
		}
		for (j=0;j<=i;j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
