/*******************************************************************************
 * Name: Jeeva
 * Date: 6/07/2026
 * Description: Print the modify value
 * ****************************************************************************/
 
 //Header Inclusion
#include<stdio.h>

//Creating function
int modifyval(int num1, int num2)
{
    num1 = num1 + 5;
    num2 = num2 + 5;
    return num1;
    return num2;
}

//Main function
int main()
{
    //Declaration
    int num1, num2;
    
    //get the num from the user
    printf("Enter the numbers : ");
    scanf("%d%d", &num1, &num2);
    //calling function
    num2, num1 = modifyval(num1, num2);
    printf("After modifying, num1 is %d\nnum2 is %d\n", num1, num2); //printing the output
    return 0;
}