#include<stdio.h>
int main()
{
	int x = 64;
	
	// use of left shift :::::::  64 * (2^3)
	int res1 = x << 3;
	
	// use of right shift :::::::  64 / (2^3)
	int res2= x >> 3;
	
	printf("%d %d", res1, res2);
	
	
}
