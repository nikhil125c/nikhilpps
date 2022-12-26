#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n)
            {
                printf("*");
            }
            else if (j == n + 1 - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}