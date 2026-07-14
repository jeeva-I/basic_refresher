#include<stdio.h>
int main()
{
    int a = 10, b = 20, c = 30;

   int max = a > b ? (max = a > c ? a : c) : (max = b > c ? b : c);

    printf("%d \n", max);

    return 0;
}
