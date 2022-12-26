#include <stdio.h>
int main()
{
    int a[100], i, n, num, last, mid, first;
    printf("how many element");
    scanf("%d", &n);
    printf("enter the value of then matrix");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the number to search");
    scanf("%d", num);
    first = 0;
    last = n - 1;
    mid = (first + last) / 2;
    while (first <= last)
    {
        if (a[mid] < num)
        {
            first = mid + 1;
        }
        else if (a[mid] == num)
        {
            printf("the number found at position %d", i + 1);
        }
        else
        {
            last = mid - 1;
            mid = (first + last) / 2;
        }
    }
}