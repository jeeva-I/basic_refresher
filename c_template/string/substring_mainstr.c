/*******************************************************************************
 * Name:Jeeva
 * Date:05/08/2026
 * Description: Check if the substring is found in main string
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 void my_serachstr(char*, char*);
 
 //Main program starts here()
 int main()
 {
     //Declaration
     char str1[50];
     char str2[20];
     
    //Getting the input from the user
    printf("Enter the main string : ");
    fgets(str1,50,stdin);
    printf("Enter the sub string : ");
    fgets(str2,20,stdin);
     

     //Function call call 
     my_serachstr(str1, str2);
     
     return 0;
 }
 
 //Function definition
 void my_serachstr(char *str1, char *str2)
  {
    //Declaration of pointers
    char *m;
    char *s;
    
    while(*str1 != '\0')
    {
        m = str1;
        s = str2;

        while(*m == *s && *s != '\0')
        {
            m++;
            s++;
        }
        if(*s == '\0')
        {
            printf("%s", str1);
            break;
        }
        str1++;
    }
        
  }