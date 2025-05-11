#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Function to create a new node
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to detect cycle using Floyd's Cycle Detection Algorithm
int hasCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1; // Cycle detected
    }
    return 0; // No cycle
}

int main()
{
    int n, val, cycle_start;
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Given List has cycle: No\n");
        return 0;
    }

    Node *head = NULL;
    Node *tail = NULL;
    Node *nodes[n]; // To keep track of all nodes by index

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        Node *newNode = createNode(val);
        nodes[i] = newNode;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    scanf("%d", &cycle_start); // 1-based index

    if (cycle_start > 0)
    {
        tail->next = nodes[cycle_start - 1]; // Create the cycle
    }

    if (hasCycle(head))
        printf("Given List has cycle: Yes\n");
    else
        printf("Given List has cycle: No\n");

    return 0;
}
