/*******************************************************************************
 * Name: JEEVA
 * Date: 27/08/2026
 * Description: Get the n bits from lsb 
 * ****************************************************************************/

//Header Inclusion
#include <stdio.h>

//function prototype
int get_nbits(int, int);

//Main program starts here()
int main()
{
    //Declaration
    int num, n, res = 0;
    
    //getting input from the user
    printf("Enter num and n:");
    scanf("%d%d", &num, &n);
    
    //Function call
    res = get_nbits(num, n);
    
    //printing the output 
    printf("Result = %d\n", res);
    
    return 0;
}

//Function definition
int get_nbits(int num, int n)
{
    //declaration
    int mask = (1 << n) - 1;
    
    return (num & mask);
}