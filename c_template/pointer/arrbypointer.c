/******************************************************************************
 * Name: Jeeva
 * Date: 13/07/2026
 * Description: print the elements of array using pointer
 * ***************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Program starts here
 int main()
 {
     //Declaration
     int arr[5] = {10, 20, 30, 40, 50};
     
     //declarign array
     int *ptr = arr;
     
     printf("Array's elements are \n");
     //printf("%p\n", ptr);
     //using for loop to print the output
     for(int i = 0; i < 5; i++)
     {
        //printf("%d\n", *++ptr); //printing the value stores in pointer 
        //ptr++; //incrementing pointer
        //printf("%p\n", ptr); 
        printf("%p\n", ++ptr);
    }

     
     return 0;
     
 }
