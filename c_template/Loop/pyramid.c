/*******************************************************************************
 * Name: Jeeva
 * Date: 16/07/2026
 * Description: Print numbers in pyramid patterns
 * ****************************************************************************/
 
 //Header inclusion
 #include<stdio.h>
 
 //Function prototype
 void upper_pyramid(int n);
 void lower_pyramid(int n);
 
 //Main program
 int main()
 {
     //declaration
     int n;
     
    scanf("%d", &n); //Getting n from user
    
    //Function calling 
    upper_pyramid(n);
    lower_pyramid(n);
    
    return 0;
 }
 
 //Function definition
 void upper_pyramid(int n)
 {
     //Using for loop for print the upper pyramid
     for(int i = n;i >= 1; i--)
     {
        for(int j = i; j <= n;j++)
        {
            printf("%d ", j); //printing the upper pyramid
        }
        printf("\n"); //New line
     }
 }
 
 void lower_pyramid(int n)
 {
     //Using loop for printing the lower pyramid
     for(int i = 2; i <= n; i++)
     {
         for(int j = i;j <= n;j++)
         {
             printf("%d ", j); //Printing the lower pyramid
         }
         printf("\n"); //New line
     }
 }