/*******************************************************************************
 * Name:JEEVA
 * Date: 19/08/2026
 * Description : finding the length of the string
 * ****************************************************************************/

//Header Inclusion
#include <stdio.h>

//Function prototype
void getword(char str[]);

//Main program starts here()
int main()
{
       //Declaration
	    char str[100];
    
        //Getting the input from the user
		printf("Enter the string : ");
		scanf(" %[^\n]", str);
		
		//Function call
		getword(str);

        
        return 0;
}

//Function definition 
void getword(char str[])
{
    int count = 0; //Declaration
    
    //using loop 
    for(int i = 0; str[i] != '\0' && str[i] != ' ';i++)
    {
        count++;
    }
    str[count + 1] = '\0';
    
    //printing the output
    printf("You entered %s and the length is %d\n", str,count);
}