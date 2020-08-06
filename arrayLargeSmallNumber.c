#include<stdio.h>
int main()
{
	int num[5], i, large, small;
	for(i=0; i<5; i++)
	{
		scanf("%d", &num[i]);
	}
	
	large=num[0];
	small=num[0];
	for(i=0; i<5; i++)
	{
		if(num[i]>large)
		{
			large=num[i];
		}
		if(num[i]<small)
		{
			small=num[i];
		}
	}
	printf("\nthe largest number is %d\n ", large);
	printf("\nthe smallest number is %d\n ", small);
	
}
