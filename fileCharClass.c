#include <stdio.h>
#define STUDENT 5

int main()
{
    char vowel[] = {'a', 'e', 'i', 'o', 'u'};
    FILE* vowelFile = fopen("fileVowelOpen.txt", "w");

    if (vowelFile !=0)
    {
        int i;
        for(i = 0;i<STUDENT;i++)
        {
            fprintf(vowelFile,"%c\n", vowel[i]);
        }
        fclose(vowelFile);
    }

}
