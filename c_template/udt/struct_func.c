/******************************************************************************
 * Name: Jeeva
 * Date: 29/07/2026
 * Description: Usage of pointer and -> operator
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 #include<string.h>
 
 //Creating structure
 struct student
 {
    int id;
    char name[40];
    char address[120];
 };
 
 //Function prototype
 void display(struct student*);
 
 //Main program starts here()
 int main()
 {
     //variable declaration for structure 
     struct student st = {46, "Jeeva", "Utharavai"};
     
     //Function call 
     display(&st);
     
     return 0;
     
     
 }
 
 //Function definition
 void display(struct student *sptr)
 {
     //priniting the structure
     printf("Id: %d\n", sptr -> id);
     printf("name: %s\n", sptr -> name);
     printf("Address: %s\n", sptr -> address);
 }