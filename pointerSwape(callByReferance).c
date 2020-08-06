#include<stdio.h>

void swape(int*, int*);

void main()
{
	int a=10, b=20;
	printf("before swapping :\ta=%d\tb=%d\n", a, b);
	swape(&a, &b);
	printf("After swapping  :\ta=%d\tb=%d\n", a, b);	
}

void swape(int* x, int* y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	//printf("After swapping :\ta=%d\tb=%d\n", *x, *y);
} 
