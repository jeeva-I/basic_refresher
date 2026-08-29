#include<stdio.h>

int add(int n1,int n2)
{
    return (n1+ n2);
}

int sub(int n1,int n2)
{
    return (n1 - n2);
}

int main()
{
    int (*fptr[])(int , int) = {add,sub}; //array function pointer

    printf("ADD : %d\n", fptr[0](23,23));
    printf("SUB : %d\n", fptr[1](30 ,10));

    return 0;
}