#include<stdio.h>
int main()
{
    int num1 = 1, num2 = 0;

     //Or part:-
    // if(++num1 || num2++)
    // {
    //     printf("IF : num1 is %d num2 is %d \n", num1, num2);
    // }
    // else
    // {
    //     printf("else : num1 is %d num2 is %d \n", num1, num2);
    // }

    // if(num2++ || ++num1)
    // {
    //     printf("IF : num1 is %d num2 is %d \n", num1, num2);
    // }
    // else
    // {
    //     printf("else : num1 is %d num2 is %d \n", num1, num2);
    // }
    
    //AND operator:-
    // if(++num1 && num2++)
    // {
    //     printf("IF : num1 is %d num2 is %d \n", num1, num2);
    // }
    // else
    // {
    //     printf("else : num1 is %d num2 is %d \n", num1, num2);
    // }

    if(num2++ && ++num1)
    {
        printf("IF : num1 is %d num2 is %d \n", num1, num2);
    }
    else
    {
        printf("else : num1 is %d num2 is %d \n", num1, num2);
    }
    return 0;
}