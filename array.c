#include <stdio.h>
int main()
{
    int a[40], i, n;
    printf("enter the number of element n\n");
    scanf("%d", &n);
    printf("enter the element of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the element of the array");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}