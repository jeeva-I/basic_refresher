#include<stdio.h>

#define SUM_PROD(n1,n2,s,p) \
        s = n1 + n2;        \
        p = n1 * n2;

int main()
{
    int  a = 20, b = 40, sum, prod;

    SUM_PROD(a,b,sum,prod);

    printf("%d %d\n", sum, prod);
    return 0;
}
