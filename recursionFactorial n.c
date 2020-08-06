/*Calculate factorial (n!) of an integer using recursion function*/ 


#include <stdio.h>
int fact (int n)
{
	if (n==1) 
	return 1;
	else
	return n*fact(n-1);
}

int main ()
{
	int i;
	printf("Input a number:\n"); 
	scanf("%d",&i); 
	printf("%d!=%d\n",i,fact(i)); 
	return 0;
}
