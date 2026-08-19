/*******************************************************************************
 * Name: JEEVA
 * Date: 19/08/2026
 * Description: replace with single space
 * ****************************************************************************/
 
//Header Inclusion
#include <stdio.h>

//Function prototype
void replace_blank(char []);

//Main program starts here()
int main()
{
    char str[150]; //Declaration
    
    //Getting input from the user    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);
    
    //Function call
    replace_blank(str);
    
    //Displays the output
    printf("%s\n", str);
    
    
    return 0;
}

//Function defintion
void replace_blank(char str[])
{
    //Using loop 
    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] ==' ' && str[i + 1] == ' ')//Comparision
        {
            for(int j = i + 1;str[j] != '\0';j++)
            {
                 str[j] = str[j + 1]; //repalcing all charcter one step back 
            }
            i--; //Decrementation to check the same postion 
        }
    }
}