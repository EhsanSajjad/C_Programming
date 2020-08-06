#include<stdio.h>
int main()
{
	
	int arr[]={3, 3, 4, {5,12,5}, 34, 45, 2, 4};
	int i;
	for(i=0; i<19; i++)
	{
		printf("%d\n", arr[i]);
	}
}
