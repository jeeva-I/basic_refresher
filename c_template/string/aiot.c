/*******************************************************************************
 * Name: JEEVA
 * Date: 22/08/2026
 * Description: Convert the string into integer
 * ****************************************************************************/

//Header Inclusion
#include <stdio.h>

//Function prototype
int my_atoi(const char []);

//Main program starts here()
int main()
{
    //Declaration
    char str[50];
    int res;
    
    //Getting input from the user
    printf("Enter a numeric string : ");
    scanf("%[^\n]", str);
    
    //Function call
    res = my_atoi(str);
    
    printf("String to integer is %d\n", res);
    
    return 0;
}

//Function definition 
int my_atoi(const char str[])
{
    //Declaration
    int num = 0, flag = 0,i = 0;
    
    //Comparision
    if(str[0] == '+' || str[0] == '-')
    {
        if(str[0] == '-')
        {
            flag = 1;
        }
        i++;
    }
    
    //using loop 
    for(i; str[i] != '\0';i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            num = num * 10; 
            num = num + (str[i] - '0'); //converting ascii into integer
        }
        else
        {
            break;
        }
    }
    
    //return the value using validation 
    if(flag)
    {
        return -num;
    }
    else
    {
        return num;
    }
}