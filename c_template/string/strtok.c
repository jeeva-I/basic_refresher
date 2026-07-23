/*
strtok() --> It will divide the given string into small sub string depending on the delimeter(separator)
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Bengaluru Chennai Mumbai delhi";
    char delim[] = " ";

    char *token = strtok(str, delim);
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, delim); //Continue from the previous search
    }

    return 0;
}
