#include <stdio.h>
int main()
{
    int i, x, y, k, n, a[20], ele, mid;
    printf("enter the vakue of n");
    scanf("%d", &n);
    printf("enter the ekement to be searched");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    x = 0;
    y = n - 1;
    while (x <= y)
    {
        mid = (x + y) / 2;
        if (ele < a[mid])
        {
            y = mid - 1;
        }
        else if (ele > a[mid])
        {
            x = mid + 1;
        }
        else
        {
            printf("element not found");
        }
    }
}