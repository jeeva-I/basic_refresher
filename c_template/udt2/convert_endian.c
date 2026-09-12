/*******************************************************************************
 * Name: JEEVA
 * Date: 11/09/2026
 * Description: Convert little endian to big endian
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 void convert_B(int, char*);
 
 //Main program starts here()
 int main()
 {
    //Declaration
    int size, num;
    
    //getting input from the user
    printf("Enter the size: ");
    scanf("%d", &size);
    
    printf("Enter any number in Hexadecimal: ");
    scanf("%X", &num);
    
    //declaring character pointer
    char *cptr = (char *)&num;
    
    //for testing 
    int i = 1;
    char *tptr = (char *)&i;
    
    //displays the output
    printf("After conversion ");
    //comparing to check the endian type
    if(*tptr == 1)
    {
        convert_B(size, cptr);
        printf("%X\n", num);
    }
    else
    {
        printf("%X\n", num);
    }
    
    return 0;
 }
 
 
 //Function definition 
 void convert_B(int size, char *ptr)
 {
    //Declaration
    char temp;
    //Comparing the size to swap the elements
    if(size == 2)
    {
        /*  swapping the elements of 2bytes */
        temp = ptr[0];
        ptr[0] = ptr[1];
        ptr[1] = temp;
    }
    else
    {
        /* swapping the elements of 2 bytes */
        temp = ptr[0];
        ptr[0] = ptr[3];
        ptr[3] = temp;
        
        temp =ptr[1];
        ptr[1] = ptr[2];
        ptr[2] = temp;
    }
 }