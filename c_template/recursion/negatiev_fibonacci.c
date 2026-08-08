/*******************************************************************************
 * Name: Jeeva
 * Date: 08/08/2026
 * Description : Generate the negative fibannoci series using recursive function
 * ****************************************************************************/

//Header Inclusion
#include <stdio.h>

//Function prototype
void negative_fibonacci(int, int, int);

int main()
{
    //Declaration
    int limit;
    
    //printf("Enter the limit : ");
    scanf("%d", &limit); //Getting input from the user
    
    //Validation
    if(limit > 0)
    {
        printf("Invalid input");
    }
    else
    {
    //Function call
    negative_fibonacci(limit, 0, 1);
    }
    
    return 0;
}

//Function defintion 
void negative_fibonacci(int limit,int first, int sec)
{
    //Base condition
    if(first < -limit || first > limit) 
    {
       return;
    }
    
        printf("%d, ",first);
        
        //Function call
        negative_fibonacci(limit, sec, first - sec);
}