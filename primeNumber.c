#include<stdio.h>
int main()
{
	int n, i, count=0;
	printf("Enter any number to check it is Prime Number or not:\n\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		count++;
	}
	if (count==2)
	printf("\nIt is a Prime Number\n\n");
	else
	printf("\nIt is not a Prime Number\n\n");
}
