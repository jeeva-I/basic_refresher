#include<stdio.h>

int digits(int n)
{
    if(n == 0)
      return 0;
    return digits(n / 10) + 1;
}

int main()
{
    printf("%d\n", digits(4567));
    return 0;
}
