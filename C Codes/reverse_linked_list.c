// Type Content here...
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node *NODE;
NODE createNode(int val)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    return temp;
}
void traverse(NODE first)
{
    if (first == NULL)
    {
        printf("The linked list is empty\n");
    }
    NODE curr = first;
    while (curr != NULL)
    {
        printf("%d->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}
NODE reverse(NODE first)
{
    NODE prev = NULL;
    NODE curr = first;
    if (first == NULL || first->next == NULL)
        return first;
    while (curr != NULL)
    {
        NODE nextnode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextnode;
    }
    return prev;
}
void main()
{
    int n;
    scanf("%d", &n);
    NODE first = createNode(0);
    NODE tail = first;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        NODE tempnode = createNode(temp);
        tail->next = tempnode;
        tail = tail->next;
    }
    traverse(first->next);
    NODE final1 = reverse(first->next);
    traverse(final1);
}