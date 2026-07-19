/*******************************************************************************
 * Name: Jeeva
 * Date: 19/07/2026
 * Description: Check if the system is little or big endian
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype 
 void Check_endian(char*);
 
 //Main program starts here()
 int main()
 {
     //Declaration
     int num = 0x12345678;
     
     //Function call
     Check_endian(&num);
     
     return 0;
 }
 
 //Function Definition
 void Check_endian(char *cptr)
 {
     //Using if else to check the endian type
     if(*cptr == 0x78)
     {
         printf("Ours  is a little endian");
     }
     else
     {
         printf("Ours  is a big endian");
     }
 }