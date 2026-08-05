#include<stdio.h>
int main()
{
    //Declaraing variables
    int num = 123;
    char ch = 'R';
    char str1[] = "Hello guyzzzzz";
    char str2[100];

    sprintf(str2, "%d %c %s", num , ch, str1); //this function is used to store the values in some space permanently 
    printf("%s\n", str2); //all are stored in str2 array 
    return 0;
}
