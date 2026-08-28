#include<stdio.h>

//Function definition
int sum(int n1,int n2)
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
    //declaration
    int res;

    res = oper(sum,10,20);

    printf("Sum : %d\n", res);
    printf("Sub : %d\n", oper(sub,10,10));

    return 0;
}