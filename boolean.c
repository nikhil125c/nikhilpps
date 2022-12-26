#include <stdio.h>
int main()
{
    int x, d, y;
    printf("AND GATE\n");
    for (x = 0; x <= 1; x = x + 1)
    {
        for (y = 0; y <= 1; y = y + 1)
        {
            printf("%d   %d   %d", x, x, x && y);
            printf("\n");
        }
    }

    printf("OR GATE\n");
    for (x = 0; x <= 1; x = x + 1)
    {
        for (y = 0; y <= 1; y = y + 1)
        {
            printf("%d  %d   %d", x, y, x || y);
            printf("\n");
        }
    }

    printf("NOT GATE\n");

    for (x = 0; x <= 1; x = x + 1)
    {
        printf("%d   %d", x, !x);
        printf("\n");
    }
}