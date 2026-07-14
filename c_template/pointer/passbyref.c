/******************************************************************************
 * Name: Jeeva
 * Date: 09/07/2026
 * Description: Using pass by reference
 * ****************************************************************************/

 //Header Inclusion
 #include<stdio.h>

 //Function prototype
 int modify(int *ptr1, int *ptr2);

 //Main function 
 int main()
 {
    //Declaration
    int num1 = 10, num2 = 20;

    printf("Before : %d%d\n", num1, num2); //print before modifying 
   
    //Calling function
    modify(&num1, &num2); //using pass by reference

    printf("After : %d%d\n", num1, num2); //printf after modify 

    return 0;

 }

 //Function definition
 int modify(int *ptr1, int *ptr2)
 {
    *ptr1 = *ptr1 + 10; //adding 10 to value storing in the pointer memory address by defrencing
    *ptr2 = *ptr2 + 10; //adding 10 to value storing in the pointer memory address by defrencing
 }