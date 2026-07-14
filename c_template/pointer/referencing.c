/*****************************************************************
*Name: Jeeva
*Date: 08/07/2026
*Description: Referencing means storing the address in another pointer using & operator
********************************************************************/

//Header Inclusion
#include<stdio.h>

//program starts here
int main()
{
    //Declaration
    int num = 10; //declaring normal variable
    int *iptr = &num; //storing the num address in pointer 

    //printing the address
    printf("Address of num: %d\n", iptr);
    return 0;


}
