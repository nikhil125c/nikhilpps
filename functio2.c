#include <stdio.h>
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibo(n - 1) + fibo(n - 2));
    }
}
int main()
{
    int num, i, b;
    printf("enter the value of the num");
    scanf("%d", &num);
    for (i = 0; i < num; i++)

    {

        b = fibo(i);
        printf("%d", fibo(i));
    }
}