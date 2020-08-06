#include <stdio.h>
int main()
{
	char input;
	long blank=0, tab=0, newline=0;
	while((input=getchar())!=EOF)
	{
		if (input==' ')
		++blank;
		else if (input=='\t')
		++tab;
		else if (input=='\n')
		++newline;
	}
	
	printf("\nTotal blanks : %d\nTotal tabs : %d\nTotal new lines : %d", blank, tab, newline);
}
