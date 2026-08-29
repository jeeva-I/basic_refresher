#include<stdio.h>

#define PRINT(Y) Y##_num

int main()
{
    int int_num = 10;
    float float_num = 20.6;
    printf("%d\n", PRINT(int));
    printf("%g\n", PRINT(float));

    return 0;

}