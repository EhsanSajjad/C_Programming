#include<stdio.h>

void condition();
void enter();
void triangle_left();
void triangle_left_up();
void triangle_left();
void triangle_left_up();
void traiangle_right_up();
void triangle_right();
void traiangle_right_up();
void triangle_right();
void pyramid();
void pyramid_ulta();


int main()
{
    condition();
  //  printf("\nPress ENTER to continue...\n");
    enter();
    //getchar();
    triangle_left();
    triangle_left_up();
    triangle_left();
    triangle_left_up();
    traiangle_right_up();
    triangle_right();
    traiangle_right_up();
    triangle_right();
    pyramid();
    //printf("\n");
    pyramid_ulta();
}

void condition()
{
    printf("choose a number\n\n");
    int x;
    scanf("%d",&x);
    if(x<0)
    {
        printf("it is a negative number\n");
    }
    else if(x>0)
    {
        printf("it is a positive number\n");
    }
    else
    {
        printf("it is a non-negative number\n");
    }
    if(x>=1 && x<=50)
    {
        printf("the number is between 1 and 50\n\n");
    }
    else if(x<0)
    {
        printf("the number is smaller than 0\n\n");
    }
    else if(x>50)
    {
        printf("the number is above 50\n\n");
    }
    else
    {
        printf("The number is smaller than 1 and bigger than -1\n\n");
    }
}
// vai progrm strt hoise ..bt kisu nai.. ekta entr chap dile pore shob show korbe.. eta kmne korbo??


void enter()
{
    printf("\nPress ENTER to continue...\n");
    getchar();
}


void triangle_left()
{
    int x,y;
    for(x=1;x<=10;x++)
    {
        for(y=1;y<x;y++)
        {
            printf("#");
        }
        printf("*\n");
    }
}

void triangle_left_up()
{
    int x,y;
    for(x=10;x>=1;x--)
    {
        for(y=1;y<x;y++)
        {
            printf("#");
        }
        printf("*\n");
    }
}


void traiangle_right_up()
{
    int x, y;
    for(x=1;x<=10;x++)
    {
        for(y=2;y<=x;y++)
        {
            printf(" ");
        }
        for(y=10;y>x;y--)
        {
            printf("#");
        }
        printf("*\n");
    }
}


void triangle_right()
{
    int x, y;
    for(x=10;x>=1;x--)
    {
        for(y=1;y<x;y++)
        {
            printf(" ");
        }
        for(y=10;y>x;y--)
        {
            printf("#");
        }
        printf("*\n");
    }
}


void pyramid()
{
    int x,y;
    for(x=10;x>=1;x--)
    {
        for(y=1;y<x;y++)
        {
            printf("  ");
        }
        for(y=10;y>x;y--)
        {
            printf("****");
        }
        printf("*\n");
    }

}


void pyramid_ulta()
{
    int x,y;
    for(x=1;x<=10;x++)
    {
        for(y=1;y<x;y++)
        {
            printf("  ");
        }
        for(y=9;y>=x;y--)
        {
            printf("****");
        }
        printf("*\n");
    }
}



