#include <stdio.h>
int main()
{
    int i, j, k, a[80][80], b[90][90], n, m;

    printf("enter value m\n");
    scanf("%d", &m);
    printf("enter value m\n");
    scanf("%d", &n);
    printf("enter the matrix A\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("transpose matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}