#include<stdio.h>
int main()
{
	int row, col;
	int n;
	scanf("%d", &n);
	printf("pyramid\n\n");
	for(col = 1; col < n; col++)
	{
		for(row = n; row > col; row--)
		{
			printf(".");
		}
		for(row = 1; row < col; row++)
		{
			printf("OO");
		}
		
		printf("0\n");
	}
	
}
