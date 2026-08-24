/*******************************************************************************
 * Name: JEEVA
 * Date: 24/08/2026
 * Description: Implement my_strcat() function
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 #include<string.h>
 
 //Function prototype
 void my_strcat(char [],char []);
 
 //Main program starts here()
 int main()
 {
    //Declaration
    char str1[100];
    char str2[50];
     
    //Get the input from the user
    printf("Enter the str1: ");
    scanf("%99s", str1);
    printf("Enter the str2: ");
    scanf("%49s", str2);
    
    //Function call
    my_strcat(str1,str2);
    
    return 0;
 }
 
 //Function definition
 void my_strcat(char str1[],char str2[])
 {
    int len = strlen(str1); //finding length of str1 to store the str2 in it
    
    for(int i = 0;str2[i] != '\0';i++)
    {
        str1[len] = str2[i];
        len++;
    }
    str1[len] = '\0';
    
    printf("concatenate string is %s\n", str1);
 }