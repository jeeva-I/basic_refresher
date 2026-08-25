
#include <stdio.h>
void display(char *str[]) //array of pointer or multilevel pointer
{
    
    printf("%s %s %s ", str[0], str[1],str[2]);
    
}
int main()
{
    char *str[3] = {"Hello", "Hi", "Hey"};
    
    //function call 
    display(str);

    return 0;
}