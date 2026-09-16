/*******************************************************************************
 * Name: JEEVA
 * Date: 16/09/2026
 * Description: Swap the nipples using bit fields
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 unsigned int swap(unsigned int);
 
 //Main program starts here()
 int main()
 {
    //Declaration
    unsigned int num;
    
    //getting the input from the user
    printf("Enter the hexa-decimal value : ");
    scanf("%X", &num);
    
    //Function call 
    num = swap(num);
    
    //printing the output 
    printf("After swap nibble: %02x\n", num);
    
    return 0;
 }
 
 //Function defintion
 unsigned int swap(unsigned int num)
 {
    //structure creation
    struct
     {
        unsigned int lower : 4;
        unsigned int upper : 4;
     }data;
    
    //Extracting the nibbles
    data.lower = num & 0x0f;
    data.upper = (num >> 4) & 0x0f;
    
    //swapping the nibbles
    num = (data.lower << 4) | data.upper;
    
    //returning the swapped values
    return num;
 }