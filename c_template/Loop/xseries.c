#include<stdio.h>
int main()
{

    for(int i = 1; i <= 5; i++) //row 
    {
        for(int j = 1; j <= 5; j++) //column
        {
            if(i + j == 6 || i == j) //printing numbers loop
            {
                printf("%d", j);
            }
            else    //printing the space loop 
            {
                printf("_");
            }
        }
        printf("\n"); //printing the new line 
    }
    return 0;


}
