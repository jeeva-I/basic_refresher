/*******************************************************************************
 * Name: Jeeva
 * Date: 19/08/2026
 * Description: Reverse the string using recursive"
 * ****************************************************************************/
 
//Header Inclusion
#include <stdio.h>
#include<string.h>

//function prototype
void reverse_recursive(char str[], int len);

//Main program starts here()
int main()
{
    char str[30]; //Declaration
    
    //Getting the input from the user
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    int len = strlen(str); //length of the string
    
    //function call
    reverse_recursive(str, len);
    
    //Displays the output
    printf("Reversed string is %s\n", str);
    
    return 0;
}

//Function defintion 
void reverse_recursive(char str[], int len)
{
    //Base condition
    if(len <= 1)
    {
        return;
    }
    
    //swap the elements
    char temp = str[0];
    str[0] = str[len -1];
    str[len - 1] = temp;
    
    //Function call 
    reverse_recursive(str + 1,len - 2);
    
}