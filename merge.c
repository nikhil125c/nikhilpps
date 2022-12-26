#include <stdio.h>
int main()
{
    int i, j, k, m, n, a[50], b[70], c[90];
    printf("enter the value of the n\n");
    scanf("%d", &n);
    printf("enter the va;ue of the m\n");
    scanf("%d", &m);
    printf("enter the matrix\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    k = i;
    printf("enter matrix B\n");
    for (j = 0; j < m; j++)
    {
        scanf("%d", &b[j]);
        c[k] = b[j];
        k++;
    }
    printf("the merge array is");
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }
}