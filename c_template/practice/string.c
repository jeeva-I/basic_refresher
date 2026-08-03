#include<stdio.h>
#include<string.h>

int main()
{
    char str[10];
    char *str1;

   scanf("%9s %s", str, str1);

    printf("Array string :%s\n", str);
    printf("Pointer string : %s\n", str1);

    return 0;
}