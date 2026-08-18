#include<stdio.h>
int main()
{
    int num = 100;
    char ch = 'a';

    void *iptr = &num;
    void *cptr = &ch;

    printf("%d\n", *iptr); //Trying to derefrencing


    // printf("Size of void pointer : %zu\n", sizeof(iptr));
    // printf("Size of void pointer : %zu\n", sizeof(void*));


    return 0;
}