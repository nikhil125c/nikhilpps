#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {

        for (j = i; j <= (2 * i) - 1; j++)
        {
            printf("%c", 64 + j);
        }
        printf("\n");
    }
}
