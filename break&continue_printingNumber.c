#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=10;i++)
	{
		if(i==3)
		{
			printf("  ");
			continue;
		}
		if(i==9)
		break;
		printf("%d ", i);
	}
}
