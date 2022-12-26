#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i <= 5)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
        }

        else if (i > 5)
        {
            for (j = 1; j <= 10 - i; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}