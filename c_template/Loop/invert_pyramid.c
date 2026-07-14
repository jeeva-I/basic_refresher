/******************************************************************************
 * Name: Jeeva
 * Date: 25/06/2026
 * Description: printing the pattern
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //Declaration
     int n;
     
     //getting  vlaue from user
     //printf("Enter n value: ");
     scanf("%d", &n);
     
     //using loop for printing the patterns 
     //upper pyramid
     for(int i = 1; i <= n; i++)
     {
         for(int j = 1;j <= (n - i);j++) //This loop for space
         {
             printf(" ");
         }
         for(int k = 1;k <= (2 * i - 1); k++) //This loop for star
         {
             printf("*"); //New line
         }
         printf("\n");
     }
     
     //lower Triangle
     for(int i = n -1; i >= 1;i--)
     {
          for(int j = 1;j <= (n - i);j++) //This loop for space
         {
             printf(" ");
         }
         for(int k = 1;k <= (2 * i - 1); k++) //this loop for star
         {
             printf("*");
         }
         printf("\n"); //New line
     }
     
     return 0;
 }
 