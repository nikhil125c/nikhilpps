#include <stdio.h>
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return (n * fact(n - 1));
}
int main()
{
    int n, c;
    printf("enter the value of the n");
    scanf("%d", &n);
    c = fact(n);
    printf("the factorial of the number is %d", c);
}