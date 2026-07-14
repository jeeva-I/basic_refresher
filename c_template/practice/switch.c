#include<stdio.h>

int main()
{
    int a = 25;
    switch(a)
    {
        case 25: 
            printf("25");
            break;
        case 10:
            printf("10");
            break;
        default:
            printf("Try again");
    }

    return 0;
}