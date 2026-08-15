/*******************************************************************************
 * Name : Jeeva
 * Date: 15/08/2026
 * Description : wap to set clear and get n bits to the right from given position 
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Main program starts here()
 int main()
 {
    
    //Declaration
    unsigned char num;
    int m;
    int n;
    unsigned int mask;
    printf("Enter the number in the hexadecimal format: ");
    scanf("%hhx", &num);
    printf("Enter of bits in decimal: ");
    scanf("%d", &m);
    printf("Enter the position : ");
    scanf("%d", &n);
    
    
    mask = ((1 << m) - 1) << (n - m + 1); //generic mask for set bit
    //for setting bit
    printf("After setting %d bits from %d pos :  %hhX\n",m,n, num | mask);
    
    mask = ~((((1 << m) - 1)) << (n - m + 1)); //generic mask for clear bit
    printf("After clearing %d bits from  %d pos : %hhX\n", m, n, num & mask);
    
    mask = ((1 << m) - 1) << (n - m + 1); //generic mask for set bit
    //get bit
    printf("After getting %d bits from %d pos : %hhX\n", m, n, (num & mask) >> (n - m + 1));

    return 0;
 }
 