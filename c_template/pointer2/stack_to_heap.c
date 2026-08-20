/*******************************************************************************
 * Name: JEEVA
 * Date: 20/08/2026
 * Description: Stack to heap
 * ****************************************************************************/
 
 //Header Inclusion 
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 
 //Function prototype
 char *my_strdup(char*);
 
 //Main program starts here()
 int main()
 {
    //Declaration 
    char *str;
    
    //get the input from the user
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    
    //Function call
    char *cptr = my_strdup(str);
    
    printf("%s", cptr); //printing the output 
    
    free(cptr); //free up the heap segment space
    
    return 0;
    
 }
 
 //Function definition
  char *my_strdup(char *str)
  {
      int len = strlen(str) + 1;
      char *ptr = malloc(len); //allocating dynamic memory in heap
      
      //validation
      if(ptr == NULL)
      {
          printf("Memory is not allocated\n");
          return 0;
      }
      printf("Memory is allocated\n");
      
      strcpy(ptr,str); //copys string to heap
      
      return ptr;
      
  }