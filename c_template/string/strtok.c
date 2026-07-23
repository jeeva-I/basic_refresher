/*
strtok() --> It will divide the given string into small sub string depending on the delimeter(separator)
*/

//HeaderInclusion
#include<stdio.h>
#include<string.h>

//Main program starts here()
int main()
{
    //Declaration
    char str[50];
    char delim[20];

    //Getting input from user
    printf("Enter the strings : ");
    fgets(str, 50 , stdin);
    printf("Enter the delimeter parameters: ");
    fgets(delim,20,stdin);

    char *token = strtok(str, delim);
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, delim); //Continue from the previous search
    }

    return 0;
}
