/*******************************************************************************
 * Name: Jeeva
 * Date : 10/07/2026
 * Description: Factorial  using recursive function
 * ****************************************************************************/

//Header Inclusion
#include<stdio.h>

//Function prototyping
int fact(int num);

//Main function
int main()
{
    //Declaration
    int num, sum;
    
    //getting the number from the user
    printf("Enter the number : ");
    scanf("%d", &num);
    
    //Calling function
    sum = fact(num);
    
    //printing the output 
    printf("Sum of 1st %d numbers is %d\n", num, sum);
    
    return 0;
}

int fact(int num)
{
    if(num == 0) //using if_else to set base condition
        return 1;
    else
        return num * fact(num - 1); //using recursion
}