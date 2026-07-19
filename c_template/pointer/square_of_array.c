/******************************************************************************
 * Name: Jeeva
 * Date: 19/07/2026
 * Description: Square of each elements 
 * ****************************************************************************/

//Header Inclusion
#include <stdio.h>

//Function prototype 
void square(int arr[], int size);

//Main program starts here()
int main()
{
    //Declaration
    int size;
    
    //Getting size from user
    printf("Enter the size : ");
    scanf("%d", &size);
    
    int arr[size]; //declaring array 
    //getting array element
    printf("Enter the array elements: ");
    for(int i = 0;i < size;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //Function call
    square(arr, size);
    
    return 0;
}

void square(int arr[], int size)
{
    //using loop for squaring
    for(int i = 0;i < size;i++)
    {
        arr[i] = arr[i] * arr[i];
    }
    
    printf("Square is ");
    for(int j = 0; j < size;j++)
    {
        printf("%d ", arr[j]);
    }
    
}