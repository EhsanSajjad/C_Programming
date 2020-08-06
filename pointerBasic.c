#include<stdio.h>
int main()
{
	int i=100;
	int *ptr;  //int *ptr;
	ptr=&i;
	printf("i       = %d\n", i);
	printf("ptr     = %d\n", ptr);       //as address is positive integer value. better to use %u instead of %d
	printf("&i      = %d\n", &i);         //as address is positive integer value. better to use %u instead of %d
	printf("&ptr    = %d\n", &ptr);        //as address is positive integer value. better to use %u instead of %d
	printf("*ptr    = %d\n", *ptr);
	printf("*(&i)   = %d\n", *(&i));
	printf("&(*ptr) = %d\n", &(*ptr));     //as address is positive integer value. better to use %u instead of %d
}
/*
    %u = unsigned int (positive integer value) 
*/
