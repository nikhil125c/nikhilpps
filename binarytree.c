#include <stdio.h>
typedef struct node

{
    int data;
    struct node *link;
    struct node *rlink;
};
struct node getnode(int value)
{
    struct node *p;
    p = (struct node *)malloc(size of(stuct node));
    p->data = value;
    p->l = NULL;
    p->link = NULL;
    return p;
}
pretraverse(*root)
{

    stuct node *root if (root != NULL)
    {
        printf("%d", root);
        pretraverse(root->p);
    }
}
void main()
{
    struct node(*n1, *n2, *n3, *n4)
        n1->getnode(10)
            n2->getnode(20)
                n3->getnode(30)
                    n4->getnode(40)
                        n1->l = n2;
    n1->r = n2;
}
