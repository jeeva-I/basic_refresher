/******************************************************************************
 * Name: Jeeva
 * Date: 08/07/2026
 * Description: increase the value using pointer 
 * ****************************************************************************/

//Header Inclusion
#include<stdio.h>

//Main function
int main()
{
    float age; //Normal declaration
    
    //getting age from user
    printf("Enter the age : ");
    scanf("%f", &age);
    
    float *fptr = &age; //storing age address in pointer
    
    *fptr = *fptr + 20; //Increasing age value without using age 
    
    printf("Age after increasing by 20 is %.1f\n", age);
    
    return 0;
    
}