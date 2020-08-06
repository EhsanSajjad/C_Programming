#include<stdio.h>
void linear_search();
int main()
{
	int A[]={3, 5, 7};
	int n, i, x;
	linear_search(A, 3, 2);
	printf("%d", A);
     
}
void linear_search(int A[], int n, int x)
	{
		int i;
		for(i=0; i<n; i++)
		{
			if (A[i]==x)
			{
			    return i;
	   	    }   
		}
	    i=-1;
	    return i;
    }
