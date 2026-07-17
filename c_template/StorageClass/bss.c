#include<stdio.h>
int main()
{
    static int num = 5;
    if(--num)
    {
        return main(); //recursion wth return
    }
    printf("%d\n", num);

    return 0;
}