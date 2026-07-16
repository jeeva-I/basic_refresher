#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        int left, right;

        if(i <= n / 2)
        {
            left = i + 1;
            right = n - i;
        }
        else
        {
            left = n - i;
            right = i + 1;
        }

        for(j = 0; j < n; j++)
        {
            if(j == i || j == n - i - 1)
            {
                if(j == i)
                    printf("%d", left);
                else
                    printf("%d", right);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
