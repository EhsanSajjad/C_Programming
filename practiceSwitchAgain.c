#include<stdio.h>


void input();
void check();
void output();



void input()
{
	int i;
	printf("\nZqli laoshi hao!!\nI am Sajjad. My Chinese name is Zhi an.\nHere I made a mini marksheet, where if you give any input(the mark of your student), I will show you the grade of the   student.\n\n");
	printf("\nPlease type a number: ");
	scanf("%d", &i);
	check(i);
}


void check(int i)
{
	if (i>=0 && i<=100)
	    output(i);
	    
	else if (i<0 ) 
	{
        printf("\nPlease Enter the number correctly.");
	    input();}
	   // else if ( i>100)
	  //  {
	  //  	 printf("\nPlease Enter the number correctly.");
	   /// 	 input();
	//	}
	/* In the above ( 'if' and 'else' ) those are for the numbers.
       But if you Enter any letter or anything ecxpet the numbers then i will ask you again for the input. how can I do that??
   	*/
	   
		
	// I tried in the below at 'else'. But may be the way is not right. Laoshi will you help me?
	else
        printf("\nPlease choose a number.\n\n\n");
	    input();
}


void output(int i)
{
	printf("\nGrade : ");
	switch(i/10)
	{
		case 10:
		case  9: printf("A\n");
		break;
		case  8: printf("B\n");
		break;
		case  7: printf("C\n");
		break;
		case  6: printf("D\n");
		break;
		default: printf("F\n");
	}
}



int main ()
{
	input();
}
