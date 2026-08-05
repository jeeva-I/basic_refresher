#include<stdio.h>

int main()
{
    //printf("Hello guys\r hi frds\n");
    char str[] = "Hello World";

    printf("%zu\n", sizeof(str));

    int ret = printf("%s-%d\n", str, 100);

    printf("The returning of printf is %d ", ret);

    return 0;
}