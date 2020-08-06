#include <stdio.h>

void grade1();
void grade2();



int main(int argc, char *argv)
{
	grade1();
	grade2();
	
}


void grade1()
{
	int score;
	printf("Zou Laoshi hao!!\nEnter your students' score. I will show the grades of students: ");
	scanf("%d", &score);
	
	if (score<0 || score>100)
	{
		printf("\n\nError, error, error...................\nPlease enter the score correctly. It's not your student's score\n\n");
	}
}



void grade2()
{
	
	int gradeLevel; 
		gradeLevel = (gradeLevel>=60)+ (gradeLevel>=70)+ (gradeLevel>=80)+ (gradeLevel>=90);
		printf("Grade: ");
		switch(gradeLevel)
		{
			case 4: printf("A\n\n");
			break;
			case 3: printf("B\n\n");
			break;
			case 2: printf("C\n\n");
			break;
			case 1: printf("D\n\n");
			break;
			default: printf("F\n\n");
			break;
		}
}

