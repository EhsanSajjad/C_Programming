#include<stdio.h>
void main()
{
	FILE *fp1, *fp2;
	int ch;
	fp1=("F:/Prog Files/C Programming (File Folder)/copyFile.txt", "r");
	fp2=("F:/Prog Files/C Programming (File Folder)/copyOutput.txt", "w");
	while((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch, fp2);
	}
	printf("copied");
}
