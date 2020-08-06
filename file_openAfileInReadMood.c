#include<stdio.h>
int  main()
{
	FILE* fp;
	fp=fopen("F:/Prog Files/C Programming (File Folder)/helloSajjad.txt", "w");
	int ch;
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c", ch);
	}
}
