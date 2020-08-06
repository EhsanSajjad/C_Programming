#include<stdio.h>
int main()
{
	char x[100];
	gets(x);
	int i=0;
	while(x[i]!='\0')
	{
		//if(x[i]>=65 && x[i]<=90)		
		if(x[i]>='A' && x[i]<='Z')
		{
			x[i]=x[i]+32;
		}
		i++;
	}
	printf("%s",x);
}
