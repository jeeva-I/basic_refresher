#include<stdio.h>

int main()
{
    char num;
    int position;
    unsigned char mask;
    
    printf("Enter the number: ");
    scanf("%hhx", &num);

    printf("Enter the position 0 to 7: ");
    scanf("%d", &position);

    mask = 1 << position;

    printf("After setting %d position bit of %hhx : %hhx\n", position, num, num | mask);

    return 0;

}
