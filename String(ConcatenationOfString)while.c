/* how marge two strings OR how to concatenate two strings*/


#include<stdio.h>
int main()
{
	char s1[100], s2[100];
	printf("Enter 1st String\n");
	gets(s1);
	printf("Enter 2nd String\n");
	gets(s2);
	int len1, len2,i=0;
	len1=strlen(s1);
	len2=strlen(s2);
	while(i<=len2)
	{
		s1[len1+i]=s2[i];
		i++;
	}
	printf("%s", s1);
}
