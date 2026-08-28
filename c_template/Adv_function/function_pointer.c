#include<stdio.h>

int sum(int n1,int n2)
{
    return (n1+ n2);
}
int main()
{
    int (*fptr)(int,int) = &sum; //Function pointer used to store address of the function
    int res = (*fptr)(10,10); //Function call through funciton pointer

    printf("Res : %d\n", res); 
    printf("Direct: %d\n", fptr(30,20)); //Printing directly using function pointer

    return 0;
}