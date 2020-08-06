// the program has some bug. the real output is not coming ( MAY BE)


#include<stdio.h>
struct emp
{
	int eno;
	char ename[10];
	float esal;
};

void main()
{
	int* i;
	char* name[20];
	struct emp* e;
	printf("Size of int* is : %d\n", sizeof(i));
	printf("Size of char* is : %d\n", sizeof(name));
	printf("Size of struct emp* is : %d\n", sizeof(e));
}


