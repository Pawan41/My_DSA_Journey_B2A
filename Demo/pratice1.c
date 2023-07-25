
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *nlink;
};
void create()
{
    int add;
    struct Node *ptr, *t,*head;
    head=NULL;
    while (add)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data you want to enter :");
        scanf("%d", &t->data);
        t->nlink=NULL;
        if (head == NULL)
            head =ptr= t;
        else
        {
            ptr->nlink = t;
            ptr = t;
        }

        printf("To add node press 1 ::");
        scanf("%d", &add);
    }
}
int main()
{
    create();
    return 0;
}