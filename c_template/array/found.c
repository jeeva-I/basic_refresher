/*******************************************************************************
 * Name: Jeeva
 * Date: 26/06/2026
 * Description: Check wheather the element is present in the array or not
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //Declaration
     int size;
     
     //get the size from the user
     printf("Enter array size: ");
     scanf("%d", &size);
     
     int arr[size], n, flag = 0;
     
     printf("Enter  array elements: ");
     //get the array elements
     for(int i = 0; i < size; i++)
     {
         scanf("%d", &arr[i]); //stores the elements in array
     }
     
     //getting the element to search in array 
     printf("Enter the element to search: ");
     scanf("%d", &n); //stores the element in n
     
     //using looop to find the variable
     for(int i = 0; i < size; i++)
     {
         if(arr[i] == n) //check the element in the array
         {
            flag = 1;
            break;
         }
         
     }
     
     
     //printing the output
     if(flag)
     {
         printf("Element Found\n");
     }
     else
     {
         printf("Not Found\n");
     }
  
    return 0;   
     
 }