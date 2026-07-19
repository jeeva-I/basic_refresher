/*******************************************************************************
 * Name: Jeeva
 * Date: 19/07/2026
 * Description: Print the sum and product of two numbers
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype 
 void sum_product(int*, int*);
 
 //Main program starts here
 int main()
 {
     //Declaration
     int num1, num2;
     
     //getiing two numbers from the user
     printf("Enter the two numbers : ");
     scanf("%d%d", &num1, &num2);
     
     //Function call
     sum_product(&num1, &num2);
     
     return 0;
 }
 
 //Function definition
 void sum_product(int *ptr1, int *ptr2)
 {
     //Printing the output
     printf("sum = %d, product = %d\n", *ptr1 + *ptr2, *ptr1 * *ptr2);
     
 }