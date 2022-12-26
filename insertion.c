#include <stdio.h>
int main()
{
    int i, ele, n, a[40];
    printf("enter the element to be inter\n");
    scanf("%d", &ele);
    printf("enter the element of the array a\n ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 4; i >= 2; i--)
    {
        a[i + 1] = a[i];
    }
    a[2] = ele;
    printf("the insert array is\n");
    for (i = 0; i <= 5; i++)
    {
        printf("%d ", a[i]);
    }
}