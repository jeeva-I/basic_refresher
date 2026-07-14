/*
About the code:
modifying the value using pointer and function
*/

//Header Inclusion
#include<stdio.h>

//Function prototype
void print_array(int arr[], int size);
void modify_array(int *arr, int size);

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    modify_array(array, 5);
    print_array(array, 5);
    return 0;
}

//Function definition
void print_array(int arr[], int size)
{
    int iter;
    for(iter = 0; iter < size; iter++)
    {
        printf("Index %d has element %d\n", iter, arr[iter]);
    }
}

void modify_array(int *arr, int size)
{
    int iter;
    for(iter = 0; iter < size; iter++)
    {
        *(arr + iter) += 10;
    } 
}
