#include <stdio.h>
int main()
{
    int i, j, a[20], b[20], k;
    printf("eneter array A");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the value of B");
    for (j = 0; j < 3; j++)
    {
        scanf("%d", b[j]);
    }
    for (i = 0; i < 3; i++)
    {
        k = 0;
        for (j = 0; j < 3; j++)
        {

            if (a[i] == b[j])
            {
                k = k + 1;
                break;
            }

            if (k == 0)
            {
                printf("%d", a[i]);
            }
        }
    }
    getch();
    return 0;
}
