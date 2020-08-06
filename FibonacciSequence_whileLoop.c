#include<stdio.h>
int main()
{
	int n, i, a=0, b=1, c;
	scanf("%d", &n);
	
	printf("%d ", a);
	printf("%d ", b);
	
	i=1;
	while(i<=n)
	{
	    c=a+b;
	    printf("%d ", c);
		a=b;
		b=c;
		i++;	
	}
}
