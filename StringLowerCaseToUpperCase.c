#include<stdio.h>
int main()
{
	char x[100];
	gets(x);
	int i=0;
	while(x[i]!='\0')
	{
		if(x[i]>='a' && x[i]<='z')
		{
			x[i]=x[i]-32;
		}
		i++;
	}
	printf("%s",x);
}
