/******************************************************************************
 * Name: Jeeva
 * Date: 08/08/2026
 * Description: Find the factorial of the number
 * ****************************************************************************/

//Header inclusion
#include <stdio.h>

int main()
{
    static int num;
    static int first = 1;
    static  int fact = 1;
    
    //getting the scanf() only one time 
    if(first)
    {
        printf("Enter the number: ");
        scanf("%d", &num);
        first = 0;
    }
    
    if(num < 0)
    {
        printf("Invalid Input\n");
    }
    else if(num == 0)
    {
    printf("Factorial of the given number is %d\n", fact);
    }
    else 
    {
        fact = fact * num;
        num--;
        if(num != 0)
        {
            main();
        }
        if(!first)
       {
         printf("Factorial of the given number is %d\n", fact);
         first = 1;
        }
    
    }
    
    return 0;
}