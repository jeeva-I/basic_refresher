/************************************************************************
* Name: Jeeva
* Date: 02/07/2026
* Description: Practicing array  
****************************************************************/

//Header inlcusion
#include<stdio.h>
int main()
{
    //Declaration of arrray
    int size;
    
    //getting size of the array
    printf("Enter the size : ");
    scanf("%d", &size);

    int arr[size];

    //using loop to get each element 
    printf("Enter the arrray elements : ");
    for(int i = 0; i < size; i++) //setting range
    {
        scanf("%d", &arr[i]); //storing each element using i as index value
    }
    printf("Array elements are : ");
    for(int j = 0; j < size; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
    
}