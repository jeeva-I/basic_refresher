/*
Finding the second largest in the number in the array.
*/

//Header Inclusion
#include<stdio.h>

//Function prototype
int sec_largest(int *,int);

//Main program starts here()
int main()
{
    //Declaration
    int size;

    //get the size from the user
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    //get the array elements from the user
    for(int i = 0;i < size;i++)
    {
        scanf("%d", &arr[i]);
    }

    //Function call
    printf("The second largest number in the array : %d\n", sec_largest(arr,size));

    return 0;
}

//Function definition
int sec_largest(int arr[], int size)
{
    //Declaration 
    int larg = arr[0];
    int small = arr[0];
    int sec_larg;

    //for validation
    for( int i = 1;i < size;i++)
    {
        if(larg < arr[i])
        {
            larg = arr[i];
        }
        else if(arr[i] < small)
        {
            small = arr[i];
        }
    } 
    sec_larg = small;

    for(int i = 0;i < size;i++)
    {
        if(arr[i] < larg && arr[i] > sec_larg)
        {
            sec_larg = arr[i];
        }
    }
    // printf(" Small is %d, Large is %d\n", small, larg);

    return sec_larg;

}
