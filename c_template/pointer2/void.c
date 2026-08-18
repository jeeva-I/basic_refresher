#include<stdio.h>
int main()
{
    int num = 100;
    char ch = 'a';

    void *iptr = &num;
    void *cptr = &ch;

    printf("%d\n", *(int *)iptr); //Trying to derefrencing using type conversion
    printf("%c\n", *(char *)cptr);


    // printf("Size of void pointer : %zu\n", sizeof(iptr));
    // printf("Size of void pointer : %zu\n", sizeof(void*));


    return 0;
}