/*******************************************************************************
 * Name: Jeeva
 * Date: 25/06/2026
 * Description: Check prime or not 
*******************************************************************************/


//Header Inclusion
#include <stdio.h>
int main()
{
    //Declaration
    int num, flag = 1;
    
    //getting number from user
    //printf("Enter a number: ");
    scanf("%d", &num);
    
    //using for loop  
    if( num < 0)
    {
        printf("Invalid input");
    }
    else if(num == 0 || num == 1)
    {
        printf("%d is not a prime number", num);
    }
    else
    {
    for(int i = 2; i * 1 < num; i++)
    {
        if(num%i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
    }
    
    return 0;
    
}