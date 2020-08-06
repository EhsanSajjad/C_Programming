/* how to find a length of a string without using a libreray function. */


#include<stdio.h>
int main()
{
	char str[30];
	int len;
	printf("Enter any Sring...\n");
	gets(str);
	len=stringlength(str);
	printf("The String length is %d", len);
	
}


int stringlength(char x[])
{
	int i=0, count=0;
	while(x[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}
