/*******************************************************************************
 * Name: Jeeva
 * Date: 10/08/2006
 * Description: Find the occurrences of character 'c' using ftell()
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Main program starts here()
 int main()
 {
    //Declaration
    FILE *fptr = fopen("text.txt","r");
    char ch; 
    
    //validation
    if(fptr == NULL)
    {
        return 1;
    }
    
    while((ch = fgetc(fptr)) != EOF) //reading the character in the file
    {
        if(ch == 'c')
        {
            printf("%ld ", ftell(fptr)); //printing the postion of c 
        }
    }
    
    fclose(fptr); //closing the file
    
    return 0;
    
 }