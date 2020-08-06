#include <stdio.h>

void sum();
void mul();
void div();
void dec();

int main()
{
    sum();
    mul();
    div();
    dec();
}
void sum()
{
    printf("PRESS ANY NUMBER TO ADD:\n\n");
    int x,y;
    scanf("%d %d", &x,&y);
    printf("addition:%d\n\n",x+y);

}

void mul()
{
    printf("TO SEE THE MULTIPLICATION, ENTER THE NUMBERS\n\n");
    int s,m;
    scanf("%d %d",&s,&m);
    printf("multiplication:%d\n\n",s*m);
}

void div()
{
    printf("CHOOSE NUMBERS AND DIVIDE:\n");
    int q,w;
    scanf("%d %d",&q,&w);
    printf("division:%d\n\n",q/w);
}

void dec()
{
    printf("decimal subtraction............... :D\n");
    float a,b;
    scanf("%f %f", &a,&b);
    printf("subtraction of decimal numbers:%f\n\n",a-b);
}
