/*******************************************************************************
 * Name: Jeeva
 * Date: 18/07/2026
 * Description: Creating function for finding punctuation character
 * ****************************************************************************/

//Header Inclusion
#include <stdio.h>

//Function prototype
void my_ispunct(char);

//Main program starts here()
int main()
{
    char ch; //Declaration
    
    printf("Enter the character:");
    scanf("%c", &ch); //Getting the character from the user

    //Function call
    my_ispunct(ch);
    
    return 0;
}

void my_ispunct(char ch)
{
    //using if_else to check the character
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        printf("Entered character is not punctuation character");
    }
    else
    {
        printf("Entered character is punctuation character");
    }
}