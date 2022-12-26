
#include <stdio.h>
#define size 10
typedef struct stackbyme
{
    int a[size];
    int top;

} stack_type;
void init(stack_type *v)
{
    v->top = -1;
}
void push(stack_type *v)
{
    int x;
    if (v->top == size - 1)
    {
        printf("stack is overflow\n");
    }
    else
    {

        printf(" Enter the element the element is\n");
        scanf("%d", &x);
        v->top = v->top + 1; // incremeting top by 1
        v->a[v->top] = x;
    }
}
void pop(stack_type *v)
{
    if (v->top == -1)
    {
        printf("inderflow\n");
    }
    else
    {
        int temp = v->a[v->top];
        v->top--;
        printf("the pooped element are %d\n", temp);
    }
}
void display(stack_type *v)
{
    int i;
    printf("the implementet array in stack is\n");
    for (i = 0; i <= v->top; i++)
    {
        printf("%d\n", v->a[i]);
    }
}
int main()
{
    stack_type s;
    init(&s);
    int n;
    do
    {

        printf("Enter your choice\n");
        printf("1.push\n2.pop\n3.display\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            push(&s);
            break;
        }
        case 2:
        {
            pop(&s);
            break;
        }
        case 3:
        {
            display(&s);
            break;
        }
        default:
            printf("please choose te correct option\n");
        }
    }

    while (n != 4);

    return 0;
}