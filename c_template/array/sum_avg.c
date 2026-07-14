/******************************************************************************
 * Name: Jeeva
 * Date: 26/06/2026
 * Description: Finding sum and avg of the array elements
 * ***************************************************************************/
 
 //Header Inclusion 
 #include<stdio.h>
 int main()
 {
     //Declaration
     int size;
     
     //Get the size fromt the user
     //printf("Enter the size : ");
     scanf("%d", &size);
     
     int arr[size], sum = 0;
     float avg = 0;
     
     //printf("Enter the array elements : ");
     //Get the elements fromt the user
     for(int i = 0; i < size; i++)
     {
         scanf("%d", &arr[i]); //Stores the elements in the array 
     }
      
     for(int i = 0; i < size; i++)  //this loop for sum 
     {
         sum = sum + arr[i]; // this add the elements and stores in sum
     }
     
     avg = sum/(float)size; // This validate and stores the average 
     
     //printing the output
     printf(" Sum : %d\nAverage: %f\n", sum, avg);
     
     return 0;
}