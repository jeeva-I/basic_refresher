/*******************************************************************************
 * Name: Jeeva
 * Date: 05/07/2026
 * Description: convert to fahrenheit to celsius
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Creating Function
 float conv(int fahren)
 {
     float celsius = ((float)fahren - 32) * 5 / 9;
     return celsius;
 }
 
 //Main function
 int main()
 {
     //Declaration
     int fahren; 
     
     //getiing the fahren from user
     printf("Enter the fahrern : ");
     scanf("%d", &fahren);
     
     //Calling function
     float celsius = conv(fahren);
     
     //printing the output 
     printf("%f", celsius);
 }