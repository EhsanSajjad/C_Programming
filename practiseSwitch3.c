#include <stdio.h>
int main()
{
	int a,b;
	printf("Zou Laoshi hao!!\nEnter your students' score. I will show the grades of students: ");
	scanf("%d", &a);

	if (a>100 || a<0)
	{
		printf("\n\nError, error, error...................\nPlease do it again and enter the score correctly. It's not your student's score\n\n");
		//return 0;
	}

	printf("\ngrade:" );
	b=a/10;
		switch(b)
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
