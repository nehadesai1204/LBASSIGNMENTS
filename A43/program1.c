#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

// Insert node at first position
void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

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

// Display perfect numbers from linked list
void DisplayPerfect(PNODE Head)
{
    int iNo = 0, iSum = 0, i = 0;

    printf("Perfect numbers are : ");

    while (Head != NULL)
    {
        iNo = Head->data;
        iSum = 0;

        if (iNo > 1)
        {
            for (i = 1; i <= iNo / 2; i++)
            {
                if (iNo % i == 0)
                {
                    iSum = iSum + i;
                }
            }

            if (iSum == iNo)
            {
                printf("%d ", iNo);
            }
        }
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
    PNODE head = NULL;

    // Input linked list
    InsertLast(&head, 11);
    InsertLast(&head, 28);
    InsertLast(&head, 17);
    InsertLast(&head, 41);
    InsertLast(&head, 6);
    InsertLast(&head, 89);

    Display(head);

    DisplayPerfect(head);

    return 0;
}
