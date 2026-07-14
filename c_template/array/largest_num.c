/*******************************************************************************
 * Name: Jeeva
 * Date: 2/07/2026
 * Description: print the largest number in the array elements
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //declaration
     int size;
     
     //getting size from the user
     printf("Enter the size: ");
     scanf("%d", &size);
     
     int arr[size], temp =0;
     
     printf("Enter array element: ");
     //getting array element from the user
     for(int i = 0; i < size; i++)
     {
         scanf("%d", &arr[i]);
     }
     
     //sorting(bubble) the array elements
     for(int i = 0; i < size - 1; i++)
     {
         for(int j = 0; j < size - 1 - i; j++) 
         {
             if(arr[j] > arr[j + 1]) //this loop for check the array element
             {
                 temp = arr[j];
                 arr[j] = arr[j + 1];
                 arr[j + 1] = temp;
             }
         }
     }
     
     //printing the largest number 
      printf("Largest element is : %d\n", arr[size -1]);
     
     return 0;
 }