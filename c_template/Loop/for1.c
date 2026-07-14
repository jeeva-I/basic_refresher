#include<stdio.h>
int main()
{
    int num;
    char ch ='A';

    printf("enter the number:");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%c ", ch);  
        }
        for(int k = i; k <=num; k++)
        {
            printf(" ");  
        }
        printf("\n");
    }
    return 0;
}