#include<stdio.h>
int main()
{
	int n, r, c, sum=0;
	printf("Enter a number to check it is Armstrong or not :\n");
	scanf("%d", &n);
	int temp;
	temp=n;
	while(n!=0)  //while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;       // sum+=c;
		n=n/10;          // n/=10;
	}
	n=temp;
	printf("\nSummation of the cube of the digits of %d is %d\n\n", n, sum);

	if(n==sum)
	{
		printf("so %d is an Armstrong number\n\n", n);
	}
	else
	{
		printf("so %d is not an Armstrong number\n\n", n);
	}
}
