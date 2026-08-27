/*******************************************************************************
 * Name: JEEVA
 * Date: 27/08/2026
 * Description: Get n bits from the m position
 * ****************************************************************************/

//Header Inclusion
#include <stdio.h>

//Function prototype
int get_nbits_from_pos(int, int, int);

//Main program starts here()
int main()
{
    //Declaration
    int num, n, pos, res = 0;
    
    //getting input the user
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    //Function call
    res = get_nbits_from_pos(num, n, pos);
    
    //Printing the output
    printf("Result = %d\n", res);
    
    return 0;
}

//Function defintion
int get_nbits_from_pos(int num, int n, int pos)
{
    //Declaring mask
    int mask = ((1 << n) - 1) << (pos - n + 1);
    
    return (num & mask) >> (pos - n + 1);
}