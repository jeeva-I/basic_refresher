/*
****
****
****
****
*/

#include<stdio.h>

void print(int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    print(n);

    return 0;
}