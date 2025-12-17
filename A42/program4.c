#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

// Insert node at last position
void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

// Display linked list
void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

// Return largest element
int Largest(PNODE Head)
{
    int Max = INT_MIN;

    while (Head != NULL)
    {
        if (Head->data > Max)
        {
            Max = Head->data;
        }
        Head = Head->next;
    }
    return Max;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head, 11);
    InsertLast(&head, 51);
    InsertLast(&head, 21);
    InsertLast(&head, 75);
    InsertLast(&head, 4);

    Display(head);

    iRet = Largest(head);
    printf("Largest element is : %d\n", iRet);

    return 0;
}
