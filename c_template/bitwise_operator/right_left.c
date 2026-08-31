/*******************************************************************************
 * Name: JEEVA
 * Date: 31/08/2026
 * Description: Perform left and right shift on entered number
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Main program starts here()
 int main()
 {
    //Declaration
    int num, pos;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the position to shift: ");
    scanf("%d", &pos);
    
    printf("After shifting to the right, the output is : %d\n", (num >> pos));
    printf("After shifting to the left, the output is : %d\n", (num << pos));
    
    return 0;
 }