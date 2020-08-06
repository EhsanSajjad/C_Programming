#include<stdio.h>
int main()
{
	
	 /* when the summation of all factorials eccept the given number is equal to the given number is called Perfect number.
	    For example: 6 (the factorials are 1,2,3,6. the sum of factorials eccept the number itself is 1+2+3=6)*/
	 
	 
	 int n, i, sum=0;
	 
	 printf("Type any number to see it is perfect number or not\n");
	 scanf("%d", &n);
	 
	 
	 for(i=1; i<n; i++)
	 {
	 	if(n%i==0)
	 	sum=sum+i;
	 }
	 
	 
	 if(n==sum)
	 {
	 	 printf("\n%d is a perfect number", n);	
	 }
	 
     else
	 {
		printf("\n%d is not a perfect number", n);
	 }
	 
}
