/*******************************************************************************
 * Name: Jeeva
 * Date: 30/07/2026
 * Description: Usage of nested struct
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 #include<string.h>
 
 //Creating structure
 struct student
 {
     struct 
     {
         char state[20];
         int code;
     }address;
 };
 
 //Function prototype 
 void display(struct student*);
 
 
 //Main program starts here()
 int main()
 {
     //Declaration of variables
     struct student st1 = {{"Tamilnadu",100}}, st2;
     
     printf("enter the state and zip code: ");
     //getting input from the user
     scanf("%19s %d", st2.address.state, &st2.address.code);
     
     //Function call
     display(&st1);
     display(&st2);
     
     return 0;
     
 }
 
 //Function defintion
  void display(struct student *sptr)
  {
      printf("%s %d\n", (*sptr).address.state, (*sptr).address.code);
  }