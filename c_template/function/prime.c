/*******************************************************************************
 * Name: Jeeva
 * Date: 5/07/2026
 * Description : checking if the number is prime or not
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>

//Function prototype 
int prime(int num);

//Main function
int main()
{
    //Declaration
    int num, flag;
    
    //getting number from user
    printf("Enter the number: ");
    scanf("%d", &num);
    
    //calling function
    flag = prime(num);

    //Using if_else
    if(flag)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    
    return 0;
}

//Function Definition
int prime(int num)
{
    int flag = 1; //it indicates as prime number
    
    //using if_else to check the number
    if(num == 0 || num == 1)
    {
        flag = 0;
    }
    else
    {
        for(int i = 2;i < num;i++)
        {
            if(num % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
