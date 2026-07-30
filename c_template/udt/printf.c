/******************************************************************************
 * Name: Jeeva
 * Date: 28/07/2026
 * Description: Initialize a structure and print structure's elements
 * ****************************************************************************/
 
 //Header Inlcusion
 #include<stdio.h>
 #include<string.h>
 
 //Creating  structure and datatypes
 struct details
 {
     char name[40];
     int id;
     char address[40];
 };
 
 //Main function starts here()
 int main()
 {
     //Using structure 
     struct details d1, d2, d3; //declaring variables to the structure datatypes
     
     //Giving values to the variables
     
     //----details of structure 1-----//
     strcpy(d1.name,"Emertxe"); //Using string copy for arrays
     d1.id = 100;
     strcpy(d1.address,"Bangalore");
     
     //----details of structure 2 ----//
     strcpy(d2.name,"Web stack"); //Using string copy for arrays
     d2.id = 200;
     strcpy(d2.address,"Chennai");
     
     //Prinitng the structure
     printf("Structure 1 has name = %s, id = %d, address = %s\n", d1.name, d1.id, d1.address);
     printf("Structure 2 has name = %s, id = %d, address = %s\n", d2.name, d2.id, d2.address);
     
     return 0;
     
 }