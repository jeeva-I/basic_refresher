/*******************************************************************************
 * Name: Jeeva
 * Date: 5/07/2026
 * Description: Print the product of two nunmbers without using *
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 
 //Creating function
 int mul(int num1, int num2)
 {
     int add = 0;
    
    for(int i = 0; i < num2; i++)
    {
        add = add + num1;
    }
    
    return add;
     
 }
 
 int main()
 {
     //Declaration
     int num1, num2;
     
     //getiing the num1 and num2 from user
     printf("Enter num1 and num2 : ");
     scanf("%d%d", &num1, &num2);
     
     //calling function 
     int sum = mul(num1, num2);
     
     //printing the output
     printf("%d", sum);
     
     return 0;
     
     
 }