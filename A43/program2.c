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

// Display prime numbers from linked list
void DisplayPrime(PNODE Head)
{
    int iNo = 0, i = 0;
    int flag = 0;

    printf("Prime numbers are : ");

    while (Head != NULL)
    {
        iNo = Head->data;

        if (iNo > 1)
        {
            flag = 1;

            for (i = 2; i <= iNo / 2; i++)
            {
                if (iNo % i == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
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
    InsertLast(&head, 20);
    InsertLast(&head, 17);
    InsertLast(&head, 41);
    InsertLast(&head, 22);
    InsertLast(&head, 89);

    Display(head);

    DisplayPrime(head);

    return 0;
}
