#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter the number from which the sequence will start :\n");
	scanf("%d", &i);
	printf("Enter the last number :\n");
	scanf("%d", &n);
	while(1)
	{
		printf("%d ", i);
		if(i==n)
		break;
		i++;
	}
}
