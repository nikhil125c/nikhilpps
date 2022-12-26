#include <stdio.h>
int main()
{
    int i, ele, a[90], n;
    printf("enter the number of the element n\n");
    scanf("%d", &n);
    printf("enter the elemnet of the element to be search\n");
    scanf("%d", &ele);
    printf("enter the element of the matrix\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == ele)
        {
            printf(" element is found at index %d", i);
            break;
        }
    }
    if (i == n)
    {
        printf("element not found");
    }
}
