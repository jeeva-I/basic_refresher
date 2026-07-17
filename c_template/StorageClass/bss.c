#include<stdio.h>
int main()
{
    static int num = 5;
    if(--num)
    {
        main(); //recursion 
    }
    printf("%d\n", num);

    return 0;
}