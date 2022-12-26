#include <stdio.h>
int main()
{
    int i, k, j;
    for (i = 4; i >= 1; i--)

    {
        for (k = 1; k <= 4 - i; k++)
        {
            printf(" ");
        }
        for (j = 2 * i - 1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}