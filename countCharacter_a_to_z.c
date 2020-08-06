/* Count character between (a-z) , case insensitive*/ 


#include <stdio.h>
main()
{
	char c;
	int num[26], i;
	for (i=0; i<26; i++)
	{
		num[i]=0;
	}
	while ((c=getchar())!=EOF)
	{
		if (c>='a' && c<='z')
		{
			num [c-'a']++;
		}
		else if (c>='A' && c<='Z')
		{
			num [c-'A']++;
		}
	}
	
	for (i=0; i<26; i++)
	{
		printf("The count of %c is %d\n",i+'a', num[i]);
	}
	return 0;
}
