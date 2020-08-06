#include <stdio.h>
int main()
{
	printf("\nEnter any number. I will show you the Grade: ");
	
	int i;
	scanf("%d", &i);
	printf("\n");
	
	if (i>=0 && i<=59)
	printf("Grade: F\n");
	
	else if (i>=60 && i<=69)
	printf("Grade: D\n");
	
	else if (i>=70 && i<=79)
	printf("Grade: C\n");
	
	else if (i>=80 && i<=89)
	printf("Grade: B\n");
	
	else if (i>=90 && i<=100)
	printf("Grade: A\n");
	
	else
	printf("Wrong input. Please do it again.\n");
}
