//   somossa ase ei code e 



#include<stdio.h>
#define CAPACITY 5

int pop(int);
int isEmpty();

int stack[CAPACITY], top=-1;

int main()
{
	int item;
	printf("Enter number to delete : ");
	scanf("%d", &item);
	int pop(item);
//	printf("\n%d is deleted\n", item);
}

int pop(int ele)
{
	if(isEmpty())
	{
		printf("The stack is Empty");
	}
	else
	{
	//	return stack[top];
	//	--top;	
		return stack[top--];
			
	}
}

int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

