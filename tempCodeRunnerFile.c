#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack s)
{
    if (s.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack s;
    s.size = 10;
    s.top = -1;
    s.arr = (int *)malloc;
    s.arr[0] = 9;
    s.top++;
    if (isempty(s))

    {
        printf("the stack is empty");
    }
    else
    {
        printf("the stack is not empty");
    }
}