
/*******************************************************************************
 * Name: Jeeva
 * Date: 6/07/2026
 * Description: Print the modify value
 * ****************************************************************************/
 
 //Header Inclusion
#include<stdio.h>

//function prototyping
int modifyval(int num);

//Main function
int main()
{
    //Declaration
    int num;
    
    //get the num from the user
    printf("Enter the number : ");
    scanf("%d", &num);
    //calling function
     num = modifyval(num);
     
    printf("After modifying, num is %d\n", num); //printing the output
    return 0;
}

//Creating function
int modifyval(int num)
{
    num = num + 5; //adding 5 to the user entered value
    return num; //returning the value to the main function 
}