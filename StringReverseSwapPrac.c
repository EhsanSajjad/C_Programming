#include<stdio.h>
int main()
{
	printf("Enter a String... I will show the reverse of the String.\n\n");
	char x[100], temp;
	gets(x);
	int i=0, j=strlen(x)-1;	
	while(i<j)
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
		i++;
		j--;
	}
	printf("%s", x);
	printf("\n%d\n\n", strlen(x));
}
