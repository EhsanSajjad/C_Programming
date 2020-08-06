#include <stdio.h>

#define STUDENTS 3

int main()
{
    // array of three interger
    int scores[] = {96, 90, 56};
    // in fopen first parameter is the filename with full path
    FILE* sajjadFile = fopen("sores.txt", "w");


    if (sajjadFile != NULL)
    {
        int i;
        for (i = 0; i < STUDENTS; i++) {
            /* fprintf(sajjadFile, "%i\n", scores[i]); */
            fprintf(sajjadFile, "%i\n", scores[i]);
        }
        fclose(sajjadFile);
    }
}
