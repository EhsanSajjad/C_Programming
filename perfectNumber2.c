#include<stdio.h>
int main()
{
	/* when the summation of all factorials of the given number is divided by 2 and is equal to the given number is called Perfect number.
	   for example: the given number is 6.
	   
	   the summation of all factors of given number / 2 = n(perfect number) 
	                 (1+2+3+6) = 12                 / 2 = 6 
	*/
	
					     
	int n, i, sum=0;
	printf("Enter any number to see it is a perfect number or not.\n");
	scanf("%d", &n);
	
	
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		sum+=i;
	}
	
	if(n==sum/2)	
	printf("\nit is a perfect number\n");
	else
	printf("\nit is not perfect number\n");
}

