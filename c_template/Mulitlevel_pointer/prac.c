#include<stdio.h>

int main()
{
    int num = 46;
    int *ptr1 = &num; //single level pointer
    int  **ptr2 = &ptr1; //double pointer

    //printing
    printf("%p\n", ptr2);
    printf("%p\n", *ptr2);
    printf("%d\n", **ptr2);

    return 0;
}