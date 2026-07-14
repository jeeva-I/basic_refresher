/**************************************************************************
 * Name: Jeeva
 * Date: 24/06/2026
 * Description: print the pyramid pattern
 * **********************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     int n;     //Declaring variable
     scanf("%d", &n);   //Getting input from the user
    
    //Using loop to print pattern 
        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            for(int k = 0; k < 2 * i - 1; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    
     
     return 0;
 }