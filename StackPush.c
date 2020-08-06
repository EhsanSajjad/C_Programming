#include <stdio.h>

#define CAPACITY 5   // pre-processor macro
int stack[CAPACITY], top=-1;   // global variable

void push(int);
int isFull();

int main(){
	
	int item;
	printf("Enter element :");
	scanf("%d", &item);
	push(item); 
}

void push(int ele)
{
	if(isFull())
	{
		printf("stack is overflow\n");
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("%d is pushed\n", ele);
	}
}

int isFull()
{
	if(top == CAPACITY-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
