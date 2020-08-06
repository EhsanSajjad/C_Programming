#include<stdio.h> 
int main()
{
	char string[100], temp;
	int i, j;
	//gets(string);  
	scanf("%s", &string);
	i=0; 
	j=strlen(string)-1;
	while(i<j)
	{
		temp=string[i];
		string[i]=string[j];
		string[j]=temp;
		i++;
		j--;
	}
	printf("\nThe reverse string is '%s'\n", string);
	printf("\nThe string length is %d\n\n\n", strlen(string));
    //getch();
	return 0;
	
}
