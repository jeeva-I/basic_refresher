#include<stdio.h>

//Function definition
int add(int n1,int n2)
{
    return (n1+ n2);
}

int sub(int n1,int n2)
{
    return (n1 - n2);
}

int oper(int (*fptr)(int, int), int n1, int n2)
{
    return fptr(n1,n2);
}

//Main program starts here()
int main()
{
    int (*fptr[])(int, int) = {add,sub};

    printf("Sum : %d\n", oper(fptr[0],10,10));
    printf("Sub : %d\n", oper(fptr[1],50,10));

    return 0;
}