/******************************************************************************
 * Name: Jeeva
 * Date: 27/06/2026
 * Description: print right angle alphabet triangle
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //Declaration
     int max_line;
     char ch = 65;
     
     //getiing the max_line from user 
     //printf("Enter the max_line: ");
     scanf("%d", &max_line);
     
     //using for loop for print right angle triangle 
     for( int i = 0; i < max_line; i++)
     {
         for(int j = 0; j <= i; j++)
         { 
             printf("%c ", ch);
             ch++;
         }
         printf("\n");
     }
     
    return 0;
 }