#include <stdio.h>
int main()
{
    int i, j, k, m, n, a[20], b[20], c[20];
    printf("enter the value of n");
    scanf("%d", &n);
    printf("enter the elemnt of m");
    scanf("%d", &m);
    printf("enter the element A");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element of B");
    for (j = 0; j < m; j++)
    {
        scanf("%d", &b[j]);
    }
    i = 0;
    j = 0;
    k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    if (i < n)
    {
        while (i < n)
        {
            c[k] = a[i];
            k++;
            i++;
        }
    }
    else
    {
        while (i < m)
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }
    for (i = 0; i < m + n; i++)
    {
        printf("%d", c[i]);
    }
}