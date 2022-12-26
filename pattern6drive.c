#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            // printf(" ");
            if (j >= 3 && j <= 5)
            {
                if (j == 4)
                {
                    printf("%d", 2 * i - 1);
                }
                else
                {
                    printf("2");
                }
            }
        }
        printf("\n");
    }
}
