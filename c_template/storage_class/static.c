#include<stdio.h>

int *modify();

int main()
{
    int *ptr;
    ptr = modify();
    printf("%d\n", *ptr);
    return 0;
}

int *modify()
{
    int array[5] = {10, 20, 30, 40, 50};
    return array;
}