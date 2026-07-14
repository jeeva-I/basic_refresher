/******************************************************************************
 * Name: Jeeva
 * Date: 2/07/2026
 * Description: To generate AP, GP and Hp series
 * ***************************************************************************/
 
 //Header Inlcusion
 #include<stdio.h>
 int main()
 {
     //Declaration 
     int A, R, N;

     //getting input from user
     printf("Enter A, R, N: \n");
     scanf("%d%d%d", &A, &R, &N);
     
     int AP = A, GP = A,  HP = A;  //storing first number
     float hp;
     
     //using for loop for validation
     if(N < 1)
     {
         printf("Invalid Input");
     }
     else
     {
     printf("AP = ");
     for(int i = 0; i < N; i++) //setting range to print ap,gp,hp series
     {  
         //AP Series:-
         printf("%d ", AP); //printing AP series
         AP = AP + R; //calculating AP 
     }
     printf("\n"); //print new line
     
     printf("GP = ");
     for(int i = 0; i < N; i++)
     {
         //GP Series:-
         printf("%d ", GP); //printing GP series
         GP = GP * R; //calculating GP 
     }
     printf("\n"); //print new line
     
     printf("HP = ");
     for(int i = 0; i < N; i++)
     {
         //HP Series:-
         hp = 1.0 / HP; //calculating HP 
         printf("%f ", hp); //printing HP series
         HP = HP + R;
       
     }
     printf("\n"); //print new line
     }
     return 0;
 }