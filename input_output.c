#include<stdio.h>

int main()
{
	int a, b, c;
	int output;
	
	a = 10;
	b = 10;
	c = 20;
	
	output = (a == b) && (c > b);	// true
	printf( "%d\n" , output );			
	
	return 0;	
}


