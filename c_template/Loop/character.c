/******************************************************************************
 * Name: Jeeva
 * Date: 26/06/2026
 * Description: print characters
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //Declaration
     int n, m, side;
     
     //Getting input from user
     //printf("Enter n : ");
     //printf("Enter m : ");
     scanf("%d%d", &n, &m);
     
     //formula for validation
     side = (n - m) / 2;
     
     //Using loop for printing the characters
         for(int j = 0; j < side; j++)
         {
             printf("$");
         }
         for(int k = 0; k < m; k++)
         {
             printf("*");
         }
         for(int l = 0; l < side; l++)
         {
             printf("$");
         }
     return 0;
 }
