#include<stdio.h>
int main()
{
	int num[5], i, large;
	for(i=0; i<5; i++)
	{
		scanf("%d", &num[i]);
	}
	
	large=num[0];
	for(i=0; i<5; i++)
	{
		if(num[i]>large)
		{
			large=num[i];
		}
	}
	printf("\nthe largest number is %d\n ", large);
}
