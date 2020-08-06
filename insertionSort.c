#include <stdio.h>

int main()
{
	int i, j, n, temp, arr[100], p;
	printf("How many numers do you want to insert?\n");
	scanf("%d", &n);
	printf("Give %d number for insertion:\n", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i=1; i<n; i++)
	{
		temp=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>temp)
		{
			arr[j-1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;	
	}
	
//	printf("\n");	
//	for(i=0; i<n; i++)
//	{
//		printf("%d\t", arr[i]);	
//	}
//	return 0;
}
