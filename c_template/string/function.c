/******************************************************************************
 * Name: Jeeva
 * Date: 20/07/2026
 * Description: Print the string using function
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 void print(char*);
 
 //Main program starts here()
 int main()
 {
     //Declaration
     char str[20];
     
     printf("Enter the name : ");
     //Getting string from the user
     fgets(str, sizeof(str), stdin);
     
     //Function call
     print(str);
     
     return 0;
 }
 
 //Function definition
 void print(char *cptr)
 {
     printf("%s", cptr); //printing the string 
 }