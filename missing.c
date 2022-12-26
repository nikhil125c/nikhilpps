#include <stdio.h>
int main()
{
    int i, ele, n, a[80];
    printf("enter the missing element\n");
    scanf("%d", &ele);
    printf("enter the number of the array\n");
    scanf("%d", &n);
    printf("enter the element of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] = ele)
        {
            printf("element found");
        }
        else
        {
            printf("element are missing");
        }
    }
}