#include <stdio.h>
#define max 10

int cenq(int[], int, int);
int cdeq(int[], int, int);
void display(int[], int, int);
void peek(int[], int);

int main()
{
    int cq[max], front = -1, rear = -1;
    int choice;
    do
    {
        printf("Press \n 1. ENQUEUE \n 2.DEQUEUE \n 3.DISPLAY \n 4.EXIT \n ");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            rear = cenq(cq, front, rear);
            break;
        case 2:
            front = cdeq(cq, front, rear);
            break;
        case 3:
            display(cq, front, rear);
            break;
        }
    } while (choice <= 4);
    return (0);
}
int cenq(int cq[], int front, int rear)
{
    int value;
    if (front == (rear + 1) % max)
    {
        printf("Queue is full \n");
    }
    else
    {
        printf("Enter the element to enqueue :\n");
        scanf("%d", &value);
        rear = (rear + 1) % max;
        cq[rear] = value;
    }
    return rear;
}
int cdeq(int q[], int front, int rear)
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
            front = (front + 1) % max;
    }
    return front;
}
void display(int cq[], int front, int rear)
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        do
        {
            printf("The element  is : %d\n", cq[front]);
            front = (front + 1) & max;
        } while (front != rear);
    }
}
