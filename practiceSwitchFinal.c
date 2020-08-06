#include <stdio.h>

void input();
void check();
void output();


void input()
{
	int i;
	printf ("Zou Laoshi hao!!\nEnter your students' score. I will show the grades of students:") ;
	scanf ("%d", &i) ;
    check(i) ;
}



void check(int i)
{
	if (i>=0 && i<=100) 
	output(i);
	else
	input();
	
}



void output(int i)
{
	printf("\nGrade:" );
		switch(i/10)
		{
			case 10:
			case 9: printf("A\n\n");
			break;
			case 8: printf("B\n\n");
			break;
			case 7: printf("C\n\n");
			break;
			case 6: printf("D\n\n");
			break;
			default: printf("F\n\n");
			break;
		}
}



int main ()
{
    input();
}

