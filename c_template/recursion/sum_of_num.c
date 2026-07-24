/*******************************************************************************
 * Name: Jeeva
 * Date: 24/07/2026
 * Description: Sum of the digits of a number using recursive
 * ****************************************************************************/
 
 //Header inclusion
 #include<stdio.h>
 
 //Function prototype
 int sum(int num);
 
 //Main Program starts here()
 int main()
 {
     //Declaration 
     int num;
     
     //Getting the input from the user
     printf("Enter the number: ");
     scanf("%d", &num);
     
     //Function call and also printing the output 
     printf("Sum of the digits is %d\n", sum(num));
     
     return 0;
 }
 
 //Function definition 
  int sum(int num)
  {
      //Setting the base condition
      if(num == 0)
        return 0;
        
        return (num % 10) + sum(num / 10);
  }