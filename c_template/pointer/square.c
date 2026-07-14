/******************************************************************************
 * Name: Jeeva
 * Date: 14/07/2026
 * Description: print the square of array's elements using a function
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 void display(int arr[], int size);
 void square(int arr[], int size);
 
 //Main program
 int main()
 {
     //Declaration
     int size;
     
     printf("Enter the size : ");
     scanf("%d", &size); //Getting the array size from the user
     
     int arr[size]; //declare and storing the array
     
     printf("Enter the array elements : ");
    //getting the array elements from the user
    for(int i = 0; i < size; i++)
    {   
        scanf("%d", &arr[i]); //storing the values in array 
    }
    
     printf("Array elements before squaring : ");
    //Function call
    display(arr, size); //Before squaring
    
    square(arr, size); //Squaring the array function
    
    printf("\n"); //New line
    printf("Array elements after squaring : ");
    display(arr, size); //After squaring
    
    return 0;
 }
 
 //Function definition
  void display(int arr[], int size) 
  {
     
      for(int i = 0; i < size; i++) //using for loop for printing the array 
      {
          printf("%d ", arr[i]); 
      }
  }
  
   void square(int arr[], int size)
   {
       for(int i = 0; i < size; i++) //using for loop for squaring the array 
      {
         arr[i] = arr[i] * arr[i]; //Squaring logic
      }
   }
 
  