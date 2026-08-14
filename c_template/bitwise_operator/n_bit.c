/*******************************************************************************
 * Name : Jeeva
 * Date: 14/08/2026
 * Description : wap to set clear and get n bits from lsb
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Main program starts here()
 int main()
 {
    
    //Declaration
    unsigned char num;
    int n;
    unsigned int mask;
    printf("Enter the number in the hexadecimal format: ");
    scanf("%hhx", &num);
    printf("Enter n value : ");
    scanf("%d", &n);
    
    mask = (1 << n) - 1; //generic mask
    
    //for setting bit
    printf("After setting %d bits from lsb :  %hhX\n",n, num | mask);
    
    mask = ~((1 << n) - 1);
    printf("After clearing %d bits from lsb : %hhX\n", n,  num & mask);
    
    mask =  (1 << n) - 1;
    //get bit
    printf("After getting %d bits from lsb : %hhX\n", n, num & mask);

    return 0;
 }
 