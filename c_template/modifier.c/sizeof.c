#include<stdio.h>
int main()
{
    int num1 = 5;
    int num2 = sizeof(++num1);

    printf("%d\n%d\n", num1, num2);

    return 0;
}
