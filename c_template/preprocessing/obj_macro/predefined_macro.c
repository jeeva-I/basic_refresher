#include<stdio.h>

int main()
{
    printf("Program : \"%s\" ", __FILE__); //return the file
    printf("was completed on %s at %s. ", __DATE__, __TIME__); //return date and time 
    printf("This print is from function: \"%s\"", __func__); //return the function
    printf(" at line %d\n", __LINE__); //current line number

    return 0;
}