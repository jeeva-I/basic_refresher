/*******************************************************************************
 * Name: Jeeva
 * Date: 18/08/2026
 * Description: Swap the two numberws of any datatype using a single function
 * ****************************************************************************/
 
 //Header inclusion
 #include<stdio.h>

 //Function prototype
 void generic_swap(void*, void*, int);
 
 //Main programm starts here()
 int main()
 {
    //declaraion
    int num1 = 10, num2 =20;
    float n1 = 10.5, n2 = 20.5;
    
    //Before swapping
    printf("Before swapping num1 = %d, num2 = %d\n", num1, num2);

    
    //Function call
    generic_swap(&num1,&num2,sizeof(num1));
    //After swapping 
    printf("After swapping num1 = %d, num2 = %d\n", num1, num2);
    
    //Before swapping
    printf("Before swapping n1 = %.1f, n2 = %.1f\n", n1, n2);
    //Function call
    generic_swap(&n1, &n2, sizeof(n1));
    
    //After swapping 
    printf("After swapping n1 = %.1f, n2 = %.1f\n", n1, n2);
    
    return 0;
    
 }

//Function definition 
 void generic_swap(void *vptr1, void *vptr2, int size)
 {
    //Declartion
    char temp;
    
    //using loop 
    for(int i = 0;i < size;i++)
    {
        temp = *(char *)vptr1;
        *(char *)vptr1 = *(char *)vptr2;
        *(char *)vptr2 = temp;
        vptr1++;
        vptr2++;
    }
 }