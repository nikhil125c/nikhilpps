#include <stdio.h>
#define size 4
typedef struct
{
    int a[size];
    int rare;
    int front;

} queue;
void initial(queue *v)
{
    v->rare = -1;
    v->front = -1;
}

int enqueue(queue *v)
{
    if (v->front == 0 && v->rare == size - 1)
    {
        printf("queue is full\n");
    }
    else
    {
        int ele;
        printf("Enter the element in the Queue\n");
        scanf("%d", &ele);
        if (v->rare == -1 && v->front == -1)
        {
            v->rare = 0;
            v->front = 0;
        }
        else
        {
            v->rare++;
            v->a[v->rare] = ele;
        }
    }
}
int dequeue(queue *v)
{

    if (v->rare == -1 && v->front == -1)
    {
        printf("queue is empty\n");
        v->rare = 0;
        v->front = 0;
    }
    else
    {
        int temp = v->a[v->front];
        if (v->front == v->rare)
        {
            v->front = -1;
            v->rare = -1;
        }
        else
            v->front++;
        printf("%d is deleted", temp);
    }
}
int display(queue *v)
{
    int i;
    printf("the element of the queue is\n");
    for (i = v->front; i <= v->rare; i++)
    {
        printf("%d", v->a[i]);
    }
    printf("\n");
}
int main()
{
    queue s;
    initial(&s);
    int n;
    do
    {
        printf("Enter your choice\n1.Insert\n2.Delelte\n3.display\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            enqueue(&s);
            break;
        }

        case 2:
        {
            dequeue(&s);

            break;
        }
        case 3:
        {
            display(&s);
            break;
        }

        default:

            printf("Please input valid option\n");
        }
    } while (n != 2);

    return 0;
}