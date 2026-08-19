#include<stdio.h>

int main()
{
    int num = 7789;
    int last_digit = 0;
    while(num > 0)
    {
        last_digit = num % 10;
        num = num / 10; 
    }
    printf("%d\n", last_digit);
    return 0;
}