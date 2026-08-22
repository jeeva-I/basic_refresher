/*******************************************************************************
 * Name: JEEVA
 * Date: 22/08/2026
 * Description: Convert integer into string
 * ****************************************************************************/

// Header Inclusion
#include <stdio.h>

// Function prototype
void itoa(int num, char str[]);

// Main program starts here()
int main()
{
    // Declaration
    int num = 0;
    char str[12];

    // Getting input from the user
    printf("Enter the number : ");

    if(scanf("%d", &num) != 1)
    {
        num = 0;
    }

    // Function call
    itoa(num, str);

    // Printing the output
    printf("Integer to string is %s\n", str);

    return 0;
}

// Function definition
void itoa(int num, char str[])
{
    int i = 0;
    int start = 0;

    // Handle zero
    if(num == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        return;
    }

    // Handle negative number
    if(num < 0)
    {
        str[i] = '-';
        i++;
        start = 1;
        num = -num;
    }

    // Extract digits
    while(num != 0)
    {
        str[i] = (num % 10) + '0';
        num = num / 10;
        i++;
    }

    // Null termination
    str[i] = '\0';

    // Reverse the digits
    int left = start;
    int right = i - 1;

    while(left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}