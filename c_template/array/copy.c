/************************************************************************
* Name: Jeeva
* Date: 02/07/2026
* Description: Practicing array  
*************************************************************************/

//Header Inclusion
#include<stdio.h>
int main()
{
    //Declaration of variables
    int size;
    
    //getting size form the user
    printf("Enter the size : ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    //Getting arra1 elements using the for loop 
    printf("Enter the arra1 elements : ");
    for(int i = 0; i < size; i++) // Tjis loop for storing array1 elements
    {
        scanf("%d", &arr1[i]);
    }

    for(int j = 0; j < size; j++) //This loop copy the array1 elements to array2
    {
        arr2[j] = arr1[j];
    }

    printf("Array1 elements : ");   
    for(int i = 0; i < size; i++) //this loop for array1 elements
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Array2 elements : ");
     for(int j = 0; j < size; j++)  //this loop for array2 elements
    {
        printf("%d ", arr2[j]);
    }
    printf("\n");
    return 0;

}