/******************************************************************************
 * Name: Jeeva
 * Date: 16/07/2026
 * Description: print numbers from 0 to n
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 void print(int n);
 
 //Main program
 int main()
 {
     //Declaration
     int n;
     
     printf("Enter the number : ");
     scanf("%d", &n); //Getting the number from user
     
     //Function call
     print(n);
     
     return 0;
 }
 
 //Function Definition
 void print(int n)
 {
     static int i = 0; //intialized static variable
     
     if(i > n) //setting range using if_else
     {
         return;
     }
     
     printf("%d ", i); //printing the outpur
     i++; //Incrementation
     
     print(n); //Using recursion
     
     
 }