#include<stdio.h>

int main()
{
    int num, ret;

    printf("Enter the number: ");
    ret = scanf("%d", &num);

    if(ret != 1)
    {
        printf("Invalid input, the number is still %d\n", num);
        return 1;
    }
    else
    {
        printf("Number is modified with %d\n", num);
    }

    return 0;

}