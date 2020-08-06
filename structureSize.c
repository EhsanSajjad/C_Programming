#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	float esal;
};

int main()
{
	struct emp e;                             
	printf("%d\n", sizeof(e));            
	printf("%d\n", sizeof(struct emp));
	// in the sizeof() anyone we can pass either variable or the data type only. result is same.
}	
	/* 
	both of the above printf() are doing the same functoinalities. sizeof() gives us the size of the stucture memory.
	i.e in the above : int, char, float data type have 2(or 4), 20, 4 bytes memory respectivly. 
	So sizeof gives us the TOTAL size of the memory that is 28 or 26.
	*/

