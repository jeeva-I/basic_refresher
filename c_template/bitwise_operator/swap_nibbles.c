/*******************************************************************************
 * Name: JEEVA
 * Date: 09/09/2026
 * Description: Swap the nibbles
 * ****************************************************************************/
 
 //Header Inclusion 
 #include<stdio.h>
 
 //Function prototype
 int swap_nibbles(int);
 
 //Main program starts here()
 int main()
 {
    //Declaraion
    unsigned int num;
    
    printf("Enter the hexa decimal number: ");
    scanf("%X", &num);
    
    //Function call
    printf("After swap : %X\n", swap_nibbles(num));
    
    return 0;
 }
 
 //Function defintion
 int swap_nibbles(int num)
 {
     return ((num & 0x0F) << 4) | ((num & 0xF0) >> 4); //swapping logic 
 }