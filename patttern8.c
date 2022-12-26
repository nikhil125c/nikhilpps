#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, n;
    char str[10];
    gets(str);
    n = strlen(str);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(".");
        }
        for (k = i - 1; k <= n; k++)
        {
            printf("%c", str[k]);
            // puts(str);
        }
        printf("\n");
    }
}
