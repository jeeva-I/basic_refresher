/*******************************************************************************
 * Name: Jeeva
 * Date : 10/07/2026
 * Description: Sum of n natural nnumbers using recursive function
 * ****************************************************************************/

//Header Inclusion
#include<stdio.h>

//Function prototyping
int resum(int num);

//Main function
int main()
{
    //Declaration
    int num, sum;
    
    //getting the number from the user
    printf("Enter the number : ");
    scanf("%d", &num);
    
    //Calling function
    sum = resum(num);
    
    //printing the output 
    printf("Sum of 1st %d numbers is %d\n", num, sum);
    
    return 0;
}

int resum(int num)
{
    if(num == 1) //using if_else to set base condition
        return 1;
    else
        return num + resum(num - 1); //using recursion
}