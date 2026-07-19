/*******************************************************************************
 * Name: Jeeva
 * Date: 19/07/2026
 * Description : Find the square and cube of a number.
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 void square_cube(int);
 
 //Main Program starts here(
 int main()
 {
     //Declaration
     int num;
     
     //getting number from user
     printf("Enter the number : ");
     scanf("%d", &num);
     
     //Function call
     square_cube(num);
     
     return 0;
 }
 
 void square_cube(int num)
 {
     printf("Square is %d\nCube is %d\n", (num*num), (num*num*num));
 }