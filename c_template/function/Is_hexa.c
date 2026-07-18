/*******************************************************************************
 * Name: Jeeva
 * Date: 19/07/2026
 * Description: Creating function for checking the hexadecimal value
 ******************************************************************************/
 
//Header Inclusion
#include <stdio.h>

//Function prototype
void is_xdigit(char);

//Main program starts here
int main()
{
    char ch; //Declaration
    
    printf("Enter the character: ");
    scanf("%c", &ch); //getting the character from user
    printf("\n"); //New line
    //Function call
    is_xdigit(ch);
    
    return 0;
}

void is_xdigit(char ch)
{
    //Using if_else to check the ch is hexa or not
    if((ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F') || (ch >= '0' && ch<= '9'))
    {
        printf("Entered character is an hexadecimal digit");
    }
    else
    {
        printf("Entered character is not an hexadecimal digit");
    }
}
