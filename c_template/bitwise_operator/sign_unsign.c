/*******************************************************************************
 * Name: JEEVA
 * Date: 31/08/2026
 * Description: signed and unsigned right shift on the given number
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 void right_shift(signed int);
 
 //Main program starts here()
 int main()
 {
    int num1;//Declaration
    
    printf("Enter the  number: ");
     scanf("%d", &num1);
  
    //Function call
    right_shift(num1); 
    
    return 0;
 }
 
 //Function definition
  void right_shift(int num1)
 {
    for(int i = 1;i <= 2;i++)
    {
        printf("Signed >> %d = %d\n",i,  (num1 >> i));
    }
      for(int i = 1;i <= 2;i++)
    {
        printf("Unsigned >> %d = %u\n",i,  ((unsigned)num1 >> i));
    }
    
 } 