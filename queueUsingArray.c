#include <stdio.h>
#define max 10

int enq(int[], int);
int deq(int[], int, int);
void display(int[], int, int);
void peek(int[], int);

int main()
{
    int q[max], front = -1, rear = -1;
    int choice;
    do
    {
        printf("Press \n 1. ENQUEUE \n 2.DEQUEUE \n 3.DISPLAY \n 4.PEEK \n 5.EXIT \n ");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            rear = enq(q, rear);
            break;
        case 2:
            front = deq(q, front, rear);
            break;
        case 3:
            display(q, front, rear);
            break;
        case 4:
            peek(q, front);
            break;
        }
    } while (choice <= 4);
    return (0);
}
int enq(int q[], int rear)
{
    int value;
    if (rear == max - 1)
    {
        printf("Queue is full \n");
    }
    else
    {
        printf("Enter the element to enqueue :\n");
        scanf("%d", &value);
        rear++;
        q[rear] = value;
    }

    return rear;
}
int deq(int q[], int front, int rear)
{
    int data;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty \n");
    }
    else
    {
        data = q[front];
        printf("The dequeued element is : %d\n", data);
        if (front == rear)
            front = -1;
        else
            front++;
    }
    return front;
}
void display(int q[], int front, int rear)
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        while (front <= rear)
        {
            printf("The elememt is : %d\n", q[front]);
            front++;
        }
    }
}
void peek(int q[], int front)
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The element at front is %d\n", q[front]);
    }
}
