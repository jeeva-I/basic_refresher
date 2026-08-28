//Header Inclusion
#include<stdio.h>
#include<stdlib.h>

static int *ptr; //Declaring static global variable

//Function definition
void test(void)
{
    puts("In test"); //printing the string, it will automatically add newline
    exit(0);
}

void my_exit(void)
{
    printf("In my_exit\n");
    if(ptr)
    {
        free(ptr); //freeup the spaces
    }
}

//Main program starts here()
int main()
{
    atexit(my_exit); //Inbuild function of stdlib library
    printf("Start\n");
    ptr = malloc(50);
    test(); //Function call
    printf("Main ends\n");
    return 0;
}