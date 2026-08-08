/*******************************************************************************
 * Name: Jeeva
 * Date: 08/08/2026
 * Description: Generating fibonacci sequence usin function
 * ****************************************************************************/
#include <stdio.h>

void positive_fibonacci(int, int, int);

int main()
{
    //Declaration
    int limit;
    
    //Gettiing input from the user
    //printf("Enter the limit : ");
    scanf("%d", &limit);
    
    //Function call
    positive_fibonacci(limit, 0, 1);
    
    return 0;
}

//Function defintion
void positive_fibonacci(int limit, int first, int sec)
{
    //Base condition
    if(limit < 0)
    {
        printf("Invalid input");
    }
    else
    {
     if(first <= limit)
        {
            printf("%d, ", first);
            //Function call
            positive_fibonacci(limit, sec, first + sec);
        }
    }
}