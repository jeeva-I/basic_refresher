#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50], str2[50]; //Declaration

    printf("Enter string1 : ");
    fgets(str1,50,stdin); //Getting string 2
    printf("/n"); //New line
    printf("Enter string2 : ");
    fgets(str2,50,stdin); //getting string 2
    int ret = strcmp(str1, str2); //Using string comparision
    printf("The value of strcmp: %d\n", ret); //printing compraion result 
    ret == 0 ? printf("Strings are equal\n") : printf("Strings are not equal\n"); //Using ternary condition 

    return 0;
}