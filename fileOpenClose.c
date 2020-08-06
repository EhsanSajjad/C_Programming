#include <stdio.h>

int main()
{
    FILE* sajjadFile;
    // comma seperation is the number of parameter/argumnet
    sajjadFile = fopen("file.txt", "r");

    // deallocating memory
    fclose(sajjadFile);
}
