/******************************************************************************
 * Name: Jeeva
 * Date: 08/07/2026
 * Description: print the value of the number using pointer
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 //Main function
 int main()
 {
     //Declaration
     int num; 
     
     //getting the value
     //printf("Enter the num : ");
     scanf("%d", &num);
     int *iptr = &num; //storing in pointer
     
     //printing the value stored in the address
     printf("Value is %d", *iptr);
     
     return 0;
 }