#include<stdio.h>
int main()
{
	int n, result;
	scanf("%d", &n);
	result=fact(n);
	printf("%d", result);
}


int fact(int n)
{
	int res;
	if(n==0)
	{
		res=1;
	}
	else
	{
		res=n*fact(n-1);
	}
	return res;
}
