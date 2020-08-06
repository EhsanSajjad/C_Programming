#include<stdio.h>
struct emp
{
	int eno;
	char ename[50];
	float esal;
};

int main()
{
	//struct emp e={2982, "MD EHSANUL ISLAM SAJJAD", 50000};  // ei line likhle next dui line likhte hobe na.
	struct emp e;
	scanf("%d %s %f", &e.eno, &e.ename, &e.esal);
	printf("Employee details:\n");
	printf("Employee No. : %d\nEmployee's Name : %s\nEmployee's salary : %f", e.eno, e.ename, e.esal);
}
