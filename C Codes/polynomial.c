#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int coeff; // Coefficient
    int power; // Exponent
    struct Node *next;
} *NODE;

NODE createNode(int coeff, int power)
{
    NODE newNode = (NODE)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->power = power;
    newNode->next = NULL;
    return newNode;
}

NODE insertTerm(NODE head, int coeff, int power)
{
    NODE newNode = createNode(coeff, power);

    if (head == NULL || power > head->power)
    {
        newNode->next = head;
        return newNode;
    }

    NODE temp = head;
    while (temp->next != NULL && temp->next->power >= power)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

void displayPoly(NODE head)
{
    if (head == NULL)
    {
        printf("0\n");
        return;
    }

    NODE temp = head;
    while (temp != NULL)
    {
        printf("%dx^%d", temp->coeff, temp->power);
        if (temp->next != NULL)
            printf(" + ");
        temp = temp->next;
    }
    printf("\n");
}

// main

int main()
{
    NODE poly = NULL;

    // Insert terms like 5x^3 + 4x^2 + 2x^1 + 7x^0
    poly = insertTerm(poly, 5, 3);
    poly = insertTerm(poly, 4, 2);
    poly = insertTerm(poly, 2, 1);
    poly = insertTerm(poly, 7, 0);

    printf("The polynomial is: ");
    displayPoly(poly);

    return 0;
}
