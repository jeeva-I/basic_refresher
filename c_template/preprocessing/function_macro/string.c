#include<stdio.h>

#define PRINT(arg) #arg // # --> converting into string

int main()
{
    printf("%s\n", PRINT(x == 0));
    return 0;
}