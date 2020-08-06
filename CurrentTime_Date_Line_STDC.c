#include<stdio.h>
#include<string.h> 

int main()
{
	char curr_time[20];
	char curr_date[20];
	int std_c;
	
	strcpy(curr_time, __TIME__);
	strcpy(curr_date, __DATE__);
	printf("Current Time : %s\n", curr_time);
	printf("Current date : %s\n\n", curr_date);
	printf("The file location of this programme : %s\n\n", __FILE__);
	
	printf("The number of this line is : %d\n\n", __LINE__);
	
	std_c = __STDC__;
	printf("STDC is : %d\n", std_c);
	
	return 0;	
	
}
