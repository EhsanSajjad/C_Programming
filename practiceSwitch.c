#include <stdio.h>


void input()
{
	int x;
	scanf("%d", &x);
	check(x);	
}


void check(x)
{
	if(x>=0 && x<=100)
	{
		output(x);	
	}
	else
	{
		printf("Enter the number correctly\n\n");
		input();
	}
}


void output(x)
{
	printf("Grade:");
	
	switch(x/10)
	{
		case 10:
		case 9 : printf("A\n\n");break;
		case 8 : printf("B\n\n");break;
		case 7 : printf("C\n\n");break;
		case 6 : printf("D\n\n");break;
		default: printf("F\n\n");break;
	}	
}



int main()
{
	int n;
	for(n=1;n<=5;n++)
	{
		input();	
	}
}

