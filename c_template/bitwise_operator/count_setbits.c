/*******************************************************************************
 * Name: Jeeva
 * Date: 31/08/2026
 * Description: Count the number of set bits in the entered number
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 unsigned int count_bits(unsigned int);
 
 //Main pgm starts here()
 int main()
 {
    //Declaration
    unsigned int num;

    //Getting input from the user
    printf("Enter the number: ");
    scanf("%x", &num);
    
    //Function call
    printf("Number of set bits: %u\n", count_bits(num));
    
    return 0;
 }
 
 //Function definition 
 unsigned int count_bits(unsigned int num)
 {
    unsigned int count = 0; //Declaration
    while(num > 0) //using loop to count the bits
    {
        count += (num & 1); //check the last bit
        num >>= 1; //shift by one
    }
    
    return count;
 }