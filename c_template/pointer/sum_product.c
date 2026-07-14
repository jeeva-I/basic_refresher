/******************************************************************************
 * Name: Jeeva
 * Date : 10/07/2026
 * Description: function for sum and product of two numbers
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 void res(int num1, int num2, int *sum, int *product);
 
 //Main function 
 int main()
 {
     //Declaration
     int num1, num2, sum, product;
     
     //get the two numbers
     printf("Enter the number1 and number2 : ");
     scanf("%d%d", &num1, &num2);
     
     //calling function 
     res(num1, num2, &sum, &product);
     
     printf("Sum is %d\nProduct is %d\n", sum, product); //printing the output 
     
     return 0;
 }
 
 //Function definition
 void res(int num1, int num2, int *sum, int *product)
 {
     *sum = num1 + num2; //For sum 
     *product = num1 * num2; //for product
 }  