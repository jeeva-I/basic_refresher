#include <stdio.h>

//Function definition
void display(char (*str)[10])
{
    
    printf("%s %s %s ", str[0], str[1],str[2]);
    
}
int main()
{
    char str[3][10] = {"Hello", "Hi", "Hey"};
    
    //function call 
    display(str);

    return 0;
}