/********************************************************************************* 
*  Name: Jeeva
*  Date: 07/08/2026
 * Description: Passing structure to function using pass by value and reference
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 #include<string.h>
 
 //Creating Structure
 struct student
 {
     char name[20];
     int num;
     char Id[20];
 };
 
 //Function prototype
 void my_fun(struct student*, struct student);
 
 //Main program starts here()
 int main()
 {
     //Variable declaration for structure
     struct student st1 ={"Jeeva", 83, "jeeva@gmail.com"}, st2;
     
     
     //function call
      my_fun(&st2, st1);
      
      
      return 0;
 }
 
 //Function defnition 
  void my_fun(struct student *st2, struct student st1)
  {
      printf("Enter the details for 2nd student: ");
      scanf("%s%d%s", st2->name, &st2->num, st2->Id);
      
      printf("-----------------------------------------------------------------------------------------------\n");
      printf("-----------------------------------------------------------------------------------------------\n");
      printf("Student1 details:\nName:%5s\nMobile number:%7d\nEmail ID:%10s\n", st1.name, st1.num, st1.Id);
      printf("**************************************************************************************************\n");
      printf("Student2 details: Name:%5s\nMobile number:%7d\nEmail ID:%10s\n", st2->name, st2->num, st2->Id);
      printf("-----------------------------------------------------------------------------------------------\n");
      printf("-----------------------------------------------------------------------------------------------\n");
  }