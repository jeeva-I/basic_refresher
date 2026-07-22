/*\
strcat(des,src) --> merging two strings
*/


#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[50]; //Declaration

    printf("Enter string1 : ");
    fgets(str1,50,stdin); //Getting string 2
    printf("Enter string2 : ");
    fgets(str2,50,stdin); //getting string 2
    strcat(str1, str2); //Using string merging
    printf("%s", str1); //printing Merged string
    

    return 0;
}