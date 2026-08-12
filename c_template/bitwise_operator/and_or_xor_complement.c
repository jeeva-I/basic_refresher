#include<stdio.h>

int main()
{
    char num1 = 0x35;
    char num2 = 0x45;

    //AND_operator
    printf("%hhd\n", num1 & num2); //decimal value 
    printf("%#hhx\n", num1 & num2); //Hexa value

    //Or_operator
    printf("%hhd\n", num1 | num2); //decimal value
    printf("%#hhx\n", num1 | num2);  //Hexa value

    //XOR_operator
    printf("%hhd\n", num1 ^ num2); //decimal value
    printf("%#hhx\n", num1 ^ num2); //Hexa value

    //Complement_operator
    printf("%#hhx\n", ~num1);  //Hexa value

    return 0;
}