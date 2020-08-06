#include<stdio.h>
#include<string.h>

int main()
{
	char str1[] = "Faujdarhat Cadet College, ";
	char str2[] = "Chittagong";
	char str3[17];
	strcpy(str3, str1); // str1 will be copied into ste3
	strcat(str3, str2); // Appending :: after str3, str2 will be started
	printf("%s", str3);
}
