/*
Using function how to print the elements of array 
*/

//Header inclusion
#include<stdio.h>

//function prototype
void display_arr(int arr[], int size);
//int read(int, int);

//Main function
int main()
{
    //declaration
    int size;
    printf("Enter the size of array :");
    scanf("%d", &size);

    int arr[size];
    //Getting input the user
    printf("Enter the array elements :");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);    
    }
    //Calling function
    display_arr(arr,size);
    return 0;
}

// int read(int size, int arr[])
// {
//     for(int i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     return arr;
// }

//Function definition
void display_arr(int arr[], int size)
{
    printf("Array elements are :");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

}
