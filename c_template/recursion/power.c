/******************************************************************************
 * Name: Jeeva
 * Date: 24/07/2026
 * Description: Find n to the power of m value using recursive function
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 int power(int, int);
 
 //Main program starts here()
 int main()
 {
     //Declaration
     int n, m;
     
     //getting numbers from user
     printf("Enter the numbers for n,m : ");
     scanf("%d%d", &n, &m);
     
     //Function call and printing the ouptput
     printf("%d to the power of %d is %d\n", n, m, power(n, m));
     
     return 0;
 }
 
 //Function definition
 int power(int n, int m)
 {
    //base condition
    if(m == 0)
        return 1;
    
    return n * power(n, m - 1); //Using recursion
 }