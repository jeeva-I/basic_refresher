#include<stdio.h>

int main()
{
    int num = 7789;
    int count = 0;
    while(num > 0)
    {
        count++;
        num = num / 10; 
    }
    printf("%d\n",count);
    return 0;
}