#include <stdio.h>
int main()
{
    int a[80][89], i, k, j, n, m, temp = 0;
    printf("enter the value of the m");
    scanf("%d", &m);
    printf("enter the value of the n");
    scanf("%d", &n);
    printf("enter thr element of the mtrix");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i < j)
            {
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
}