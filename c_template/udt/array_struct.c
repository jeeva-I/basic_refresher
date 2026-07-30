/*******************************************************************************
 * Name: Jeeva
 * Date: 30/07/2026
 * Description: Create two arrays of student structure name stud_list1 and stud_list2
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 #include<string.h>
 
 //Creating structure
 struct list
 {
     char name[20];
     int age;
     char address[20];
 };
 
 //Function prototype 
 void display(struct list*, int);
 void user(struct list*, int);

 //Main program starts here()
 int main()
 {
    //Structure variable declaration
    struct list stud_list1[2] = {{"Jeeva", 20, "utharavai"}, {"Sabari", 20, "Ramanad"}};
    struct list stud_list2[2];
    
    //Function call for stud_list1
    display(stud_list1, 2);
    
    printf("\n"); //New line 
    
    printf("Enter name,age and address ");
    //Getting input for user for stud_list2
    user(stud_list2, 2);

    //Function call for stud_list1
    display(stud_list1, 2);
    
    printf("\n"); //New line 
    
    //Function call for stud_list2
    display(stud_list2, 2);
    
    return 0;
    
 }
 
 //-------------------------Function Definition--------------------------------
 
 void user(struct list *sptr, int size)
 {  
     //printf("Enter the name,age,address: ");
     //Using loop for storing the input 
     for(int i = 0;i < size; i++)
     {
         scanf("%19s %d %19s", sptr[i].name, &sptr[i].age, sptr[i].address);
     }
 }
 
 void display(struct list *sptr, int size)
 {  
     //Using loop for printing the structure 
     for(int i = 0;i < size; i++)
     {
         printf("%s %d %s\n", sptr[i].name, sptr[i].age, sptr[i].address);
     }
 }
 
 