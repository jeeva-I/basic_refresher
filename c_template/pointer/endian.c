/******************************************************************************
 * Name: Jeeva
 * Date: 09/07/2026
 * Description: Check the sytem is little or big endian/
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 //program starts here
 int main()
 {  
     
     //Declaration
     int num = 0x12345678;
     char *cptr = (char *)&num; //declare char pointer with type casting
     *cptr =0xAB;
     printf("%X\n", num);
     
    //  //Using if else to check the system
    //  if( *cptr == 78)
    //  {
    //      printf("ours is a little endian ");
    //  }
    //  else
    //  {
    //       printf("ours is a big endian ");
    //  }
     
     return 0;
     
 }