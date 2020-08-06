#include <stdio.h>

void AGHead()
{
    printf("Yeah I am the final boss\n");
    puts("Army Headquater Permission granted");
}

void CollegePrincipal()
{
    printf("Hi I am the College Principal\n");
    AGHead();
    puts("College principal approval done");
}

void CollegePrefect()
{
    printf("ok, I will report to the principal\n");
    CollegePrincipal();
    puts("Our prefect is boss");
}

int main(void)
{
    CollegePrefect();
}
