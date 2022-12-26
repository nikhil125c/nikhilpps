#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i <= 4; i++)
    {

        for (j = 4 - i; j <= 4; j++)
        {
            printf("%c", 65 + j);
        }
        printf("\n");
    }
}
