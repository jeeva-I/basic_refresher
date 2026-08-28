//Header Inclusion
#include<stdio.h>
#include<stdlib.h>

//Function definition
int sa(const void *ptr1, const void *ptr2)
{
    return *(int *)ptr1 - *(int *)ptr2;
}

int sd(const void *ptr1, const void *ptr2)
{
    return *(int *)ptr2 - *(int *)ptr1;
} 
void print(int *a, int size)
{
    for(int i = 0;i < size;i++)
    {
        printf("%d ", a[i]);
    }
}

//Main program starts here()
int main()
{
    //Declaration
    int arr[6] = {5,3,1,7,4,2};

    //using IN-build function
    qsort(arr,6,sizeof(int),sa);
    printf("Ascending: ");
    print(arr,6); //Function call

    printf("\n"); //new line
    qsort(arr,6,sizeof(int),sd);
    printf("Descending: ");
    print(arr,6); //Function call
    printf("\n"); //new line

    return 0;

}