/******************************************************************************
 * Name: Jeeva
 * Date: 27/06/2026
 * Description: Reverse elements in array 
 * ***************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //Declaration 
     int size;
     
     //get the user size 
     printf("Enter array size: ");
     scanf("%d", &size);
     
     int arr[size], left = 0, right = size - 1, temp;
     
     //get the array elements using loop
     printf("Enter array elements: ");
     for(int i = 0; i < size; i++)
     {
         scanf("%d", &arr[i]); //stores the array elements in the array
     }
     
     //printing the array before reversing
     printf("Elements before reversing: \n");
     for(int i = 0; i < size; i++)
     {
         printf("%d ", arr[i]);
     }
     
     printf("\n"); //print new line
     
     //using while loop to reverse the array elements
     while(left < right)    //checks the index range 
     {
        temp = arr[left];   //stores  array value in temp 
        arr[left] = arr[right]; //It moves last value to the first index
        arr[right] = temp;  //stored array value move to last index 
        
        left++; //increments 0 to size-1
        right--; //decrements size to 0
     }
     
     //printing the array after reversing
     printf("Elements after reversing: \n");
     for(int i = 0; i < size; i++)
     {
         printf("%d ", arr[i]);
     }
     printf("\n"); //prints new line
     
    return 0; 
 }