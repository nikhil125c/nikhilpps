#include <stdio.h>
int main()
{
    int i, a[30];
    printf("enter the elemnt of the matrix");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 3; i > 0; i--)
    {

        a[i] = a[i - 1];
    }
    for (i = 1; i < 7; i++)
    {
        printf("%d", a[i]);
    }
}