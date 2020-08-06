#include <stdio.h>

int summation(int input1, int input2);
int multiplication(int input1, int input2);

int summation(int input1, int input2)
{
    int sumResult = input1 + input2;
    return sumResult;
}

int multiplication(int input1, int input2)
{
    return input1 * input2;
}

int main()
{
    int sum = summation(3, 6);
    printf("summation of 3 and 6      :   %d\n\n", sum);

    int mul = multiplication(3, 6);
    printf("multiplication of 3 and 6 :   %d\n", mul);
}
