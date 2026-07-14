/*******************************************************
* Name: Jeeva
* Date: 1/07/2026
* Description: practicing for loop
*******************************************************/

//Header Inclusion
// #include<stdio.h>
// int main()
// {
//     // //using for loop
    // for(int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", i);
    // }

    // int num = 1; //declaration
    // for(int i = 1; i <= 100; i++)
    // {
    //     if(num % 3 == 0 && num % 5 == 0)
    //     {
    //         printf("FizzBuzz ");
    //     }
    //     else if(num % 3 == 0)
    //     {
    //         printf("Fizz ");
    //     }
    //     else if(num % 5 == 0)
    //     {
    //         printf("Buzz ");
    //     }
    //     else
    //     {
    //         printf("%d ", num);
    //     }
    //     num++;

    // }

    /******************************************************************************
 * Name: Jeeva
 * Date: 22/06/2026
 * Description: Usage of break using nested loop
 * ***************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //Declaration
     int range;
     
     printf("Enter the number: "); //Getting ragne from the user
     scanf("%d", &range);
     
     //Using nested loop to print the numbers
     for(int i = 1; i <= range; i++) //This is a outer loop 
     {
         for(int j = 1; j <= range; j++)
         {
             if(j == 3)
             {
                 break;
             }
             else
             {
                 printf("(%d,%d) ", i, j);
             }
         }
         printf("\n");
     }
     return 0;
 }

    