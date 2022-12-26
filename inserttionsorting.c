#include <stdio.h>
int main()
{
    int i, a[80], tem, j, n;
    printf("enter the value of the n");
    scanf("%d", &n);
    printf("ente rthe lement of the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)

    {
        tem = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > tem)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tem;
    }
    printf("the sorted array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
