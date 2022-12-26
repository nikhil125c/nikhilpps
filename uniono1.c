#include <stdio.h>
int main()
{
    int i, j, a[20], b[67], c[67];
    printf("enter the matrix A");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    int k = 5, count;
    printf("enter the matrix b");
    for (i = 0; i < 5; i++)
    {
        count = 0;
        scanf("%d", &b[i]);
        for (j = 0; j < 5; j++)
        {
            if (c[j] != b[i])
            {
                count++;
            }
            if (count == 5)
            {
                c[k] = b[i];
                k++;
            }
        }
    }
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}
