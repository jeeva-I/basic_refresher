/*
Passing string into the function
*/

#include<stdio.h>

void  display_str(char*);

int main()
{
    char str[] = "Jeeva";
    display_str(str);
    return 0;
}

void display_str(char *cptr)
{
    while(*cptr != '\0')
    {
        printf("%c", *cptr++);
    }
    printf("\n");
}