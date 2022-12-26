
#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= 5 - i; k++)

        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
            printf("%d", j);
        {
            for (j = 2; j <= i; j++)

                printf("%d", j);
        }
    }
    printf("\n");
}
