/******************************************************************************
 * Name: Jeeva
 * Date: 27/06/2026
 * Description: check the palindrome
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //Declaration
     int or_num, digit, reverse = 0;
     
     //get the number from the user
     //printf("Enter the number: ");
     scanf("%d", &or_num);
     
     int num = or_num;
     
     //Using loop for check the palindrome 
     
     while( num > 0)
     {
     digit = num % 10;  //Extracing the last digit 
     
     reverse = reverse * 10 + digit;    //Storing the last digit in the first
     
     num = num / 10; //removing the last digit after storing the last as first 
     }
     
     //using if_else to print 
     if(or_num == reverse)
     {
         printf("The Entered number is an palindrome.");
     }
     else
     {
         printf("The Entered number is not an palindrome.");
     }
     
     return 0;
     
     
 }