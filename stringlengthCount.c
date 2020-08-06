#include<string.h>
int  main()
{
	char str[30];
	unsigned int len;
	printf("enter the string\n");
	gets(str);
	len=strlen(str);
	printf("length of '%s' is '%d' ", str,len);
	
}
