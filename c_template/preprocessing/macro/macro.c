#include<stdio.h>
#define size 100
#define msg "Enter the string"

int main()
{
    char str[size];
    printf("%s\n", msg);
    fgets(str,size,stdin);
    printf("%s\n", str);

    return 0;
}