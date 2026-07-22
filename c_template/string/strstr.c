/*
strstr(des,src) --> Used to search the given substring in the main string
*/


#include<stdio.h>
#include<string.h>

int main()
{
    char Main_str[100], sub_str[50]; //Declaration

    printf("Enter Main_string : ");
    fgets(Main_str,50,stdin); //Getting string 2
    printf("Enter sub_string : ");
    fgets(sub_str,50,stdin); //getting string 2
    char *res = strstr(Main_str, sub_str); //Using string merging
    
    res != NULL ? printf("%s sub_string is present in main_string of %s\n", sub_str, Main_str) : printf("sub_string is not present in main string \n");
    

    return 0;
}