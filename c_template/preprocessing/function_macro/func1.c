/*******************************************************************************
 * Name: JEEVA
 * Date: 29/08/2026
 * Descripton : product of two numbers using macro
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Defining function macro 
 #define MUL(n1,n2) n1*n2
 
 //Main program starts here()
 int main()
 {
    //Declaration
    int a, b;
    float c, d;
    
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("Enter c and d: ");
    scanf("%f %f", &c, &d);
    
    printf("Product of %d and %d is %d\n",a,b, MUL(a,b));
    printf("Product of %g and %g is %g\n",c, d, MUL(c,d));
    
    return 0;
     
 }