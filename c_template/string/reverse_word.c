/*******************************************************************************
 * Name: JEEVA
 * Date: 24/08/2026
 * Description: Reverse each words in the string
 * ****************************************************************************/
 
 ///Header Inclusion
 #include<stdio.h>
 #include<string.h>
 
 //function prototype
 void rev_word(char str[]);
 
 //Main program starts here()
 int main()
 {
    //Declaration
    char str[100];
    
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    
    //Function call
    rev_word(str);
    
    return 0;
 }
 
 //Function definition
 void rev_word(char str[])
 {
     //Declaration
    int len = strlen(str); //finding the string length
    int start = 0;
    int left, right;
    char temp;
    
    //reversing the whole charcter
    for(int i = 0; i < len/2;i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    
    //Reversing the each word in the array
    for(int i = 0;i <= len;i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            left = start;
            right = i - 1;
        while(left < right) //using while to reverse the word
        {
            temp = str[left];
            str[left] = str[right];
            str[right] = temp; 
            left++;
            right--;
        }
         start = i + 1; //changing the starting position after reversing the ecah word
        }
    }
    
    printf("Reversed string: %s\n", str);
 }