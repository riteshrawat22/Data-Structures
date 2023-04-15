//linked list implementation to insert node at the right side.
#include <stdio.h>
#include <stdlib.h>
typedef struct LinkedList
{
    int data;
    struct LinkedList *next;
} sl;
int main()
{
    sl *p = NULL, *left = NULL, *right = NULL;
    int value, choice;
    while (1)
    {
        p = (sl *)malloc(sizeof(sl));
        if (p != NULL)
        {
            printf("Enter the element to insert :\n");
            scanf("%d", &value);
            p->data = value;
            if (left == NULL && right == NULL)
            {
                left = right = p;
            }
            else
            {
                right->next = p;
                right = p;
            }
            printf("Do you want to continue\n Press 1(Yes) or 0(No) ? :\n");
            scanf("%d", &choice);
            if (choice == 0)
            {
                break;
            }
        }
        /*
          right->next = NULL;
            p = left;
            while (p != NULL)
            {
                printf("Elemet is : %d \n", p->data);      -->This can be done also as this line of code will
                                                              insert and print element simultaneously.
                p = p->next;
            }
        */
    }
    right->next = NULL;
    p = left;
    while (p != NULL)
    {
        printf("Elemet is : %d \n", p->data);
        p = p->next;
    }
    return (0);
}
