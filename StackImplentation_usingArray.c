/* Stack implentation using static array */

#include<stdio.h>
#define CAPACITY 5   // pre-processor macro
int stack[CAPACITY], top=-1;   // global variable

void push(int);    // prototype
int pop();         // prototype
int isFull();      // prototype
int isEmpty();     // prototype
void traverse();    // prototype
void peek();       // prototype

void main()
{
	int ch, item;
	while(1)
	{
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Peek\n");
		printf("4. Traverse\n");
		printf("5. Quit\n");
		
		printf("Enter your choise : ");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1 : 	printf("Enter element :");
						scanf("%d", &item);
						push(item);  // "void push(item);" likhleu hobe, as kichu return korbe na tai void likha na likha same
			            break;
			            
			case 2 : 	item = pop();
						if(item == 0)
						{
							printf("There is no element in the stack.\n");							
						}
						else
						{
							printf("%d is popped\n", item);
						}
						break;
						
			case 3 : peek();
					 break;
			
			case 4 : traverse();
					 break;
			
			case 5 : exit(0);
			
			default: printf("Invalid input \n\n");
		}
	}
	
	 
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

int pop()
{
	if(isEmpty())
	{
		return 0;
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

void peek()
{
	if(isEmpty())
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("peek element : %d\n", stack[top]);
	}
}

void traverse()
{
	if(isEmpty())
	{
		printf("stack is empty\n");
	}
	else
	{
		int i;
		for(i=0; i<=top; i++)
		{
			printf("%d \t", stack[i]);
		}
	}
}
