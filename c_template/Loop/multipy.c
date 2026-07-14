/*******************************************************************************
 * Name: Jeeva
 * Date: 27/06/2026
 * Description: multiply 2 numbers without operator
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //Declaration 
     int num1, num2, add = 0;
     
     //getting two numbers
     printf("Enter the two numbers: ");
     scanf("%d%d", &num1, &num2);
     
     //using loop 
     int i = 0;
     while(i < num2)
     {
         add = add + num1;
         i++;
     }
     
     //print the output
     printf("The Result is %d", add);
     
     return 0;
 }