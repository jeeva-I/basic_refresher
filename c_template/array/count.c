/*******************************************************************************
 * Name: Jeeva
 * Date: 26/06/2026
 * Description: Count even and odd numbers in array
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //Declaration
     int size;
      
     //get the size from the user
     printf("Enter the size : ");
     scanf("%d", &size);
     
     int arr[size], even_count = 0, odd_count = 0;
     
     printf("Enter the array elements : ");
     //get the array elements
     for(int i = 0; i < size; i++)
     {
         scanf("%d", &arr[i]); //this stores the array elements 
     }
     
     //checking the even or odd
     for(int i = 0; i < size; i++)
     {
         if(arr[i] % 2 == 0)
         {
             even_count++; //check the even number
         }
         else
         {
             odd_count++; //checks the odd number
         }
     }
     
     
     //printing the even and odd count
     printf("Even count: %d \nOdd count: %d \n", even_count, odd_count);
     
     
     return 0;
      
     
 }