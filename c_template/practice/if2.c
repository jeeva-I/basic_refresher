#include<stdio.h>
int main()
{
    int i = -1;
    for(;i < sizeof(i); i++)
    {
        printf("%d\n",i);
    }
    return 0;
}