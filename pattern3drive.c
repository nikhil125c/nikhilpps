#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i <= 2; i++)
    {

        for (j = 0; j <= i; j++)
        {
            printf("%c", 65 + i);
        }
        printf("\n");
    }
}
