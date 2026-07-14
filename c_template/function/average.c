/******************************************************************************
 * Name: Jeeva
 * Date: 5/07/2026
 * Description: average of three numbers
 * ****************************************************************************/
 //Header Inclusion
 #include<stdio.h>
 
 //Creating Function
 
 float avg(int num1, int num2, int num3)
 {
     float average = (num1 + num2 + num3) / 3.0;
     return average;
 }
 
 
 //Main function
 int main()
 {
     //Declaration
     int num1, num2, num3;
     
     //get the 3 numbers from users
     printf("Enter 3 numbers: ");
     scanf("%d%d%d", &num1, &num2, &num3);
     
     //Caliing function
     float average = avg(num1, num2, num3);
     
     //printing the output
     printf("Average is %g", average);
     
     return 0;
 }