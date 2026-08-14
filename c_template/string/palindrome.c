/*******************************************************************************
 * Name: Jeeva
 * Date: 14/08/2026
 * Description: Checking the given string is palindrome or not
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 #include<string.h>
 
 //function prototype
 void palindrome(char[]);
 
 //Main program starts here()
 int main()
 {
    //Declaration
    char str1[50];
    
    //getting the input from the user
    printf("Enter the string: ");
    fgets(str1,sizeof(str1),stdin);
    
    str1[strcspn(str1,"\n")] = '\0';
    //Function call
    palindrome(str1);
    
    return 0;
 
 }
 
 //Function definition
 void palindrome(char str1[])
 {
    //Declaraion
    int len = strlen(str1);
    for(int i = 0; i < len/2;i++)
    {
        if(str1[i] != str1[len - i - 1])
        {
           printf("No, Entered string is not palindrome.\n");
           return;
        }
    }
    printf("Yes, Entered string is palindrome.\n");
       
 }