
#include <stdio.h>

int main()
{
    // pattern 2
    // Instantiation syntax
    int stud[5] = {99, 11, 22, 55, 66};

    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &stud[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", &stud[i]);
    }

}
