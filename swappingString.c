 #include<stdio.h>
 
 int Stringlength(char[]);

 int main()
 {
 	char x[10];
 	gets(x);
 	int i=0, j=Stringlength(x), temp; 
 	
 	while(i<j)
 	{
 		temp=x[i];
 		x[i]=x[j];
 		x[j]=temp;
 		i++;
 		j--;
 		
	}
	//printf("%s",x);
 }
 
 
 int Stringlength(char x[])
 {
 	int i=0, count=0;
 	while(x[i] != 0)
 	{
 		count++;
 		i++;
	}
	return count;
 }
