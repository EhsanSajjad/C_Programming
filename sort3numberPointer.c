/*Write a function using pointer which can sort three numbers from small to big */ 


#include <stdio.h>
void sort3(int *i1, int *i2, int *i3)
{
	if (*i1>*i2)
	{
		int temp; temp=*i1; *i1=*i2; *i2=temp;
	}
		if (*i1>*i3)
	{
		int temp; temp=*i1; *i1=*i3; *i3=temp;
	}

	if (*i2>*i3)
	{
		int temp; temp=*i2; *i2=*i3; *i3=temp;
	}
}


int main()
{
	int i1; int i2; int i3;
	scanf("%d %d %d",&i1, &i2, &i3); sort3(&i1,&i2,&i3);
	printf("%d %d %d",i1,i2,i3); 
	return 0;
}
