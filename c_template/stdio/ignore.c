#include<stdio.h>

int main()
{
    int dd, mm, yy;

    printf("Enter the date : ");
    scanf("%d %*c %d %*c %d", &dd, &mm, &yy);

    printf("Date : %d, Month : %.2d, Year: %d\n", dd, mm, yy);

    return 0;
}