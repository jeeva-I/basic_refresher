//Printing row and column

#include<stdio.h>

int main()
{
    int arr[2][3] = {1,2,3,4,5,6}; //Declaration and intialization

    for(int i = 0; i < 2;i++) //Row
    {
        for(int j = 0; j < 3;j++)//column
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); //New line
    }

    return 0;
}