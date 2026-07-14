/******************************************************************************
 * Name: Jeeva
 * Date: 08/07/2026
 * Description: print the value of the number using pointer
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 //Main function
 int main()
 {

    int num = 100; //decalring normal interger variable

    int *ptr = &num; //storing the num address in pointer

    //Printing different aspect of pointer 
    printf("&num: %p\n", &num); //Address of num
    printf("Ptr: %p\n", ptr); //Address stored in pointer
    printf("&ptr: %p\n", &ptr); //Address of pointer
    printf("*ptr: %d\n", *ptr); //Value present in the address

    return 0;
 }

