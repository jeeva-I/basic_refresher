/*******************************************************************************
 * Name: JEEVA
 * Date: 21/08/2026
 * Description: Check the string is pangram or not
 * ****************************************************************************/

//Header Inclusion
#include <stdio.h>

//Function prototype
int pangram(char [],int []);

//Main program starts here()
int main()
{   
    //declaration
    char str[100];
    int arr[26] = {0}; //partial initialisation
    
    //getting input from the user
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    
    //Function call
    int res = pangram(str,arr);
    
    if(res)
    {
        printf("The Entered String is not a Pangram String\n");
        return 1;
    }
    printf("The Entered String is a Pangram String\n");
    
    return 0;
}

//Function definition
int pangram(char str[],int arr[])
{
    ///Using loop for set 1
    for(int i = 0;str[i] != '\0';i++)
    {
        //Usig conditional statement
        if(str[i] >= 'a' && str[i] <= 'z') //checkng the lowercase
        {
            arr[str[i] - 'a'] = 1;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') //Checking the Uppercase
        {
             arr[str[i] - 'A'] = 1;
        }
    }
    
    //using loop to check the array number
    for(int i = 0; i < 26;i++)
    {
        if(arr[i] == 0)
        {
            return 1;
        }
    }
    return 0;
    
}