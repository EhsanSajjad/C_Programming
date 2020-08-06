#include <stdio.h>

int main(void)
{
    // pointee
    int x;
    x = 5;
    printf("%p\n", &x);

    // pointer
    //
    //
    // pointer to float
    // float* x;
    // pointer to integer
    int* xPtr;
    xPtr = &x;
    printf("%p\n", xPtr);



    // value manipulation
    // dereferencing operator (go to that address where xPtr points to, and access/manipulate value there)
    *xPtr = 25;
    printf("x = %d\n", x);


    int** pointerToxPtr = &xPtr;
    **pointerToxPtr = 100;
    printf("x = %d\n", x);

}

/* // 3 integers */
/* int x, y, z; */
/* int x; */
/* int y; */
/* int z; */
/*  */
/* // 1 pinter others integers */
/* int* x, y, z; */
/* int* x; */
/* int y; */
/* int z; */
/*  */
/* // 3 pointers to integer */
/* // type declaration */
/* int* x, *y, *z; */
/*  */
