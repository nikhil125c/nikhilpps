#include <stdio.h>
int main()
{
    int a[10], b[10], m, n, i, j;
    printf("enter the size of set a \n");
    scanf("%d", &m);
    printf("enter the size of set b \n ");
    scanf("%d", &n);
    printf("enter the element of set a \n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the elememt of set b\n");
    for (j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }
    printf("the cartesian product is \n");
    printf("{");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("(%d,%d),", a[i], b[j]);
        }
    }
    printf("} ");
    printf("\n Number of cartesian product is/n n(A*B)=");

    printf("%d", m * n);
}