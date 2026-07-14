/*******************************************************************************
 * Name: Jeeva
 * Date: 26/06/2026
 * Description: print the power of N sereies.
 * *****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //Declaration
     int base, expo, pow = 1;
     
     //Getting input from the user
     //printf("Enter the base and exponential: );
     scanf("%d%d", &base, &expo);
     
     //using for loop for print power N series
     for(int i = 0; i <= expo; i++)
     {
         printf("%d ", pow);
         pow = pow * base;
     }
     return 0;
 }
 