#include <stdio.h>
int main()
{
    int i, sum = 0, fact = 1;
    for (i = 1; i <= 5; i++)

    {
        fact = fact * i;

        sum = sum + fact;
    }

    printf("%d", sum);
}