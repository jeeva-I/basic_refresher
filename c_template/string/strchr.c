/******************************************************************************
 * Name:Jeeva
 * Date: 23/07/2026
 * Description: Check if the character is found in a string (using build in method of string)
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 #include<string.h>
 
 //Main Program starts here()
 int main()
 {
     //Declaration
     char main_str[50], ch;
     
     //getting input from the user
     printf("Enter the string :");
     scanf("%49[^\n]", main_str);
     printf("Enter the character : ");
     scanf(" %c", &ch);
     
     char *res = strchr(main_str,ch); //using Buildin string function for searching
     
     res != NULL ? printf("%s\n",res) : printf(" Character is not found in the string"); //Printing the output
     
     return 0;
     
 }