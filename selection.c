#include <stdio.h>
int main()
{
    int n, i, j, tem, a[40];
    printf("enter the value of the n");
    scanf("%d", &n);
    printf("ente rthe elment of the matrix");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}