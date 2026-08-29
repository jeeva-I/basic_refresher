#include<stdio.h>

#define TEST

int main()
{
    #ifdef TEST
        puts("Hello world\n");
    #else
        puts("hi,How are you\n");
    #endif

    return 0;
}