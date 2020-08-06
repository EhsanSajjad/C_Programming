#include <stdio.h>
#include <string.h>
/// c author implemented c string library

int main(void)
{
    /// null character /0
    /// string is a character array with extra null character
    /// As array is pointer, so string is a pointer
    /// String is pointer to character (char* )

    ///pattern 1:
    char c[20] = "I love my Android";
    int i;
    for(i = 0; i < 20; i++)
    {
        printf("%c", c[i]);
    }
    puts("");
    ///ekhane 20 er jaygay 18 dileu hobe...as "I love my Android" ekhane total 17 ta character ache...r tar sathe null char add dile hoy 17+1=18...evn 20 er besi dileu somossa nai


    ///pattern 2:
    char like[5] = { 'l', 'i', 'k', 'e', '\0' };
    printf("%s", like);
    /// here, s for string

    /// 's' represents char
    /// "s" represents string



    ///pattern 3:
    char* Pori = "Pori is sweet";
    puts("");
    printf("%s", Pori);


    ///pattern 4:
    char* wife = "Pori";
    puts("");
    if (strcmp(wife, "Pori") == 0)
    {
        puts("Yeah my wife");
    }
    else {

        puts("not my wife");
    }
}
