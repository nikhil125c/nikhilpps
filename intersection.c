#include <stdio.h>
int main()
{
    int i, j, a[40], b[80], c[90];
    printf("enter the marrix A");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the matrix B");
    for (j = 0; j < 5; j++)
    {
        scanf("%d", &b[j]);
    }
    int k = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i] == b[j])
            {
                c[k] = a[i];
                k++;
            }
        }
    }
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}