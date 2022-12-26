#include <stdio.h>
int main()
{
    int a[10], b[10], c[30], i, j, k;

    printf(" enter the element of the array a");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf(" enter the element of the array b");
    for (j = 0; j < 5; j++)
    {
        scanf("%d", &b[j]);
    }
    i = 0, j = 0, k = 0;
    while (i < 5 && j < 5)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            k++, i++;
        }
        else
            c[k] = b[j];
        j++, k++;
    }
    while (i < 5 && j < 5)
    {
        printf("%d", c[k]);
    }
}