#include<stdio.h>
#include<ctype.h>


int main()
{
    char ch;
    
    while((ch = getchar()) != EOF) //press ctrl + d to end
    {
        putchar(toupper(ch));
    }
    puts("EOF Received");
    return 0;
}