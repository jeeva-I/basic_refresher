/*******************************************************************************
 * Name: Jeeva
 * Date: 13/08/2026
 * Description: Program to set ,clear and get nth bit of a given number
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Main program starts here()
 int main()
 {
    //Declaration
    unsigned char  num;
    int position;
    unsigned int mask;
    printf("Enter the number in the hexadecimal format: ");
    scanf("%hhx", &num);
    printf("Enter n value: ");
    scanf("%d", &position);
    
    mask = 1 << position; //generic mask
    
    //for setting bit
    printf("Result after setting nth bit is : %hhX\n", num | mask);
    
    mask = ~(1 << position);
    printf("Result after clearing nth bit is : %hhX\n", num & mask);
    
    //get bit
    printf("Get bit at nth position is : ");
    //validation
    if(num & (1 << position))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    

    return 0;

 }