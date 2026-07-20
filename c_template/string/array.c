#include<stdio.h>
int main()
{
    char str[] = "Good Morning";

    printf("%s\n", str);
    printf("%c\n", *(str + 3));
    printf("%s\n", str+5);

    return 0;
}