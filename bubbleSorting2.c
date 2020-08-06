#include<stdio.h>

int main()
{
	int A[10], n, i, j, temp;
	printf("Enter number of sorting : ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
	}
	
	printf("Before sorting : ");
	for(i=0; i<n; i++)
	{
		printf("%d\t", A[i]);
	} 
    
	
    printf("\n");for(i=0; i<n-1; i++){  
	  	
		for(j=0; j<n-i-1; j++){ 
				
		if(A[j]>A[j+1]){
			
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
	    	}
        }
    }
    printf("After sorting  : ");
	for(i=0; i<n; i++)
	{
		printf("%d\t", A[i]);
	} 
    
}
