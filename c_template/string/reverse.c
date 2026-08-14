/*******************************************************************************
 * Name: Jeeva
 * Date: 14/08/2026
 * Description: Reverse a string
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 #include<string.h>
 
 //Function definition
 void reverse(char str[]);
 
 //Main program starts here()
 int main()
 {
     //Declaration
     char str[50];
     
     printf("Enter the string: ");
     //Getting input from the user
     fgets(str,sizeof(str),stdin);

    //Removing \n(new line) from the string
    str[strcspn(str,"\n")] = '\0';
    
    //Function call 
    reverse(str);
    
    return 0;
 }
 
 //Function defintion
 void reverse(char str[])
 {  
     //Declaration
     int len = strlen(str); //total length of the string
     
     //Using loop for reversing the string
     for(int i = 0; i < len/2;i++)
     {
         //temp variable
         char temp = str[i];
         str[i] = str[len - i -1];
         str[len - i -1] = temp;
     }
     
     str[len] = '\0';
     
     printf("Reversed string is %s\n", str);
     
     
     
 }