
#include <stdio.h>

int main()
{
    // pattern 1
    int students[5];

    // individual element syntax
    students[0] = 99;
    students[4] = 100;
    students[1] = 69;
    students[2] = 59;
    students[3] = 95;

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", students[i]);
    }

    // pattern 2
    // Instantiation syntax
    int stud[5] = {99, 11, 22, 55, 66};

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", stud[i]);
    }

    // pattern3
    int slut[] = {99, 11, 22, 55, 66, 44, 11};

    for (i = 0; i < sizeof(slut)/ sizeof(slut[0]); i++)
    {
        printf("%d\n", slut[i]);
    }
}
