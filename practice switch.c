#include <stdio.h>
int main(int argc, char *argv)
{
	int score;
	//printf("Zou Laoshi hao!!\nI just finished the task which you gave in ghe wechat group two");
	printf("Zou Laoshi hao!!\nEnter your students' score. I will show the grades of students: ");
	scanf("%d", &score);
	
	int gradeLevel;
		gradeLevel = (score>=60)+(score>=70)+(score>=80)+(score>=90);
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
