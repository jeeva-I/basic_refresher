/*******************************************************************************
 * Name:Jeeva
 * Date: 07/08/2026
 * Description: print the sorted array without modifying or copying the array
 * ****************************************************************************/
  
#include <stdio.h>

void print_sort(int [], int);

int main()
{
    int size, iter;
    
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the %d elements\n", size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }
    
    print_sort(arr, size);
    printf("\n");
    
    printf("Original array values ");
    for(iter = 0;iter < size;iter++)
    {
        printf("%d ", arr[iter]);
    }
    printf("\n");
    return 0;
}

//Function definition
void print_sort(int arr[], int size)
{
   //Declaration 
   int large = arr[0];
   int small = arr[0];
   int  sec_small;
   
   //Finiding large and small elements
   for(int i = 0;i < size;i++)
   {
       if(large < arr[i])
       {
           large = arr[i];
       }
       else if(small > arr[i])
       {
           small = arr[i];
       }
   }
   
   printf("After sorting: ");
   printf("%d ", small);
  //Validation 
  for(int i =0;i < size - 1;i++)
  {
      sec_small = large;
      for(int j = 0;j < size;j++)
      {
        if(arr[j] > small && arr[j] < sec_small)
        {
          sec_small = arr[j];
          
        }
      }
      small = sec_small;
      printf("%d ", small); 
  }
}