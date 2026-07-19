/*******************************************************************************
 * Name: Jeeva
 * Date: 19/07/2026
 * Description: Find the average of array's elements.
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype 
 float average_array(int arr[], int);
 
 //Main program starts here()
 int main()
 {
     //Declaration 
     int size;
    
     //Getting size from the user
     printf("Enter the size :");
     scanf("%d", &size);
     printf("\n"); //New line

     printf("Enter the array elements :");
     int arr[size]; //Declaring array
     printf("\n"); //New line


     //Using loop for getting array elements
     for(int i = 0;i < size;i++)
     {
        scanf("%d", &arr[i]); //Storing array elements
     }
     
     //Function call 
     float res = average_array(arr, size);
     
     //Printing the output
     printf("Average of array elements : %g\n", res);
     
     return 0;
 }
 
 //Function Definition
 float average_array(int arr[], int size)
 {
     float avg = arr[0]; //Declaration
     
     //Using for loop 
     for(int i = 1; i <= size;i++)
     {
         avg = avg + arr[i]; //adding array elements
     }
     
     
     //average formula
     avg = avg / size;
     
     return avg;
 }
 
 
 
 
 
 
 
 
 
 
 
 