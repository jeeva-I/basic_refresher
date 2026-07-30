/*******************************************************************************
 * Name: Jeeva
 * Date: 30/07/2026
 * Description: Read the members using structure variable and print using structure variable
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 #include<string.h>
 
 //Creating structure
 struct details
 {
     char let;
     int num;
     float pi;
     char name[20];
 };
 
 //Function prototype
 void display(struct details*);
 
 //Main program starts here()
 int main()
 {
    //Declaration of struct
    struct details dt;
    
    //getting structure input from the user
    printf("Enter the letter,number,float value and name: ");
    scanf(" %c %d %f %s", &dt.let, &dt.num, &dt.pi, dt.name);
    
    //Function call 
    display(&dt);
    
    return 0;
    
 }
 
 //Function Definition
 void display(struct details *sptr)
 {
    //Printing the structure elements
    printf("%c %d %g %s\n", sptr -> let, sptr -> num, sptr -> pi, sptr -> name);
 }
 
 
 