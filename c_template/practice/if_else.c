#include<stdio.h>
int main()
{
    // int i = 0;
    
    // for(;--i;)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    int i, j;
    i = j = 0;
    for(;i < 2, j < 5;)
    {
        printf("%d %d\n", i++, j++);
    }
    return 0;
}