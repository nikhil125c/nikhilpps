#include <stdio.h>
#include <math.h>
int main()
{
    int x = 1, i, sum = 0, fact = 1;
    int ser = 1;
    for (i = 1; i <= 6; i++)
    {
        fact = fact * i;
        sum = sum + fact;
        ser = ser + pow(x, i) / sum;
    }
    printf("%d", ser);
}