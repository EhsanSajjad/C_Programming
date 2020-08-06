/* how marge two strings OR how to concatenate two strings*/


#include<stdio.h>
int main()
{
	char s1[100], s2[100];
	printf("Enter the first String :\n");
	gets(s1);
	printf("Enter the second String :\n");
	gets(s2);
	int i, len1=strlen(s1), len2=strlen(s2);
	for(i=0;i<=len2;i++)
	{
		s1[len1+i]=s2[i];
	}
	printf("%s", s1);
	
}
