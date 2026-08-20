#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = calloc(6,sizeof(int));

    //validation
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Memory is allocated\n");

    return 0;



}