/******************************************************************************
 * Name: Jeeva
 * Date: 08/07/2026
 * Description: Changing the value using pointer
 * ****************************************************************************/

 //Header Inclusion
 #include<stdio.h>
 
 //Main function
 int main()
 {
    int num = 10; //Normal declaration

    int *iptr = &num; //storing num address in pointer varaible 

    printf("Before: %d\n", num); //printing num before modification

    *iptr = 46; //changing num value using pointer

    printf("After(*ptr): %d\n", *iptr); //print *ptr after modify
    printf("After(num): %d\n", num);  //print num after modify

    return 0;
 }