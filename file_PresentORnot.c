#include<stdio.h>
void main()
{
	FILE* fp;
	fp=fopen("F:/Prog Files/C Programming (File Folder)/file Present or not.txt", "r");
	if(fp==NULL)
	printf("The file is not present\n");
	else
	printf("The file is present\n");
}
