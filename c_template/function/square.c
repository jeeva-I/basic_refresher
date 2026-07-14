/******************************************************************************
 * Name : Jeeva
 * Date: 6/07/2026
 * Description: Function to calculate square a number
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
  void square(int num, int *sqr);
  
  //Main Function
  int main()
  {
      //Declaration
      int num, sqr;
     
     //Get the num from the user
     printf("Enter the number : ");
     scanf("%d", &num);
     
     //calling function'
     square(num, &sqr);
     
     printf("Square is %d", sqr); //printing the output
     
     return 0;
     
  }
  
  //Function definition
 void square(int num, int *sqr)
  {
      *sqr = num * num; //for squaring 
  }