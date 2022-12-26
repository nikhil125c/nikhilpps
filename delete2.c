#include <stdio.h>
int main()
{
    int i, a[40], n;
    printf("enter the number of the element of the array\n");
    scanf("%d", &n);
    printf("enter the element of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        a[2 + i] = a[3 + i];
    }
    printf("the deleted array");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }
}
