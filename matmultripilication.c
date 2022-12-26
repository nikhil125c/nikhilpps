#include <stdio.h>
int main()
{
    int i, j, k, a[80][80], b[90][90], c[88][98], m, n, p, q, sum;

    printf("enter value m\n");
    scanf("%d", &m);
    printf("enter value m\n");
    scanf("%d", &n);
    printf("enter value m\n");
    scanf("%d", &p);
    printf("enter value m\n");
    scanf("%d", &q);
    printf("enter the matrix A\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix B\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (n == q)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < p; j++)
            {
                sum = 0;
                for (k = 0; k < m; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                    c[i][j] = sum;
                }
            }
        }
    }
    printf("matrix multiplication is \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}