/*******************************************************************************
 * Name: JEEVA
 * Date: 20/08/2026
 * Description: Remove the same charcter in a string
*******************************************************************************/

//Header Inclusion
#include <stdio.h>

//Function prototype
void squeeze(char [], char []);

//MAin program starts here()
int main()
{
    char str1[30], str2[30]; //Declaration
    
    //Getting str1 from the user
    printf("Enter string1:");
    scanf("%[^\n]", str1);
    
    //Gettin str2 from the user
    printf("Enter string2:");
    scanf(" %[^\n]", str2);
    
    //Function call
    squeeze(str1, str2);
    
    //Display the output
    printf("After squeeze s1 : %s\n", str1);
    
    
    return 0;
}

//Function defintion
void squeeze(char str1[],char str2[])
{
    //using loop for checking
    for(int i = 0; str1[i] != '\0';i++)
    {
        for(int j = 0;str2[j] != '\0';j++)
        {
            if(str2[j] == str1[i])
            {
                for(int k = i; str1[k] != '\0';k++)
                {
                    str1[k] = str1[k + 1];
                }
            }
        }
    }
}
