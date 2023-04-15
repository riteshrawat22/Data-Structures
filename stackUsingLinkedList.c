#include <stdio.h>
#include<stdlib.h>
#define max 10

int push(int[], int);
int pop(int[], int);
void display(int[], int);
void peek(int[], int);

int main()
{
    int s[max], top = -1;
    int choice;
    do
    {
        printf("Press \n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.PEEK \n 5.EXIT \n ");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            top = push(s, top);
            break;
        case 2:
            top = pop(s, top);
            break;
        case 3:
            display(s, top);
            break;
        case 4:
            peek(s, top);
            break;
        }
    }
    while (choice <= 4);
    return (0);
}
int push(int s[], int top)
{
    int value;
    if (top == max - 1)
    {
        printf("Stack is full \n");
    }
    else
    {
        printf("Enter the element to pushed :\n");
        scanf("%d", &value);
        top++;
        s[top] = value;
    }
    return top;
}
int pop(int s[], int top)
{
    int data;
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        data = s[top];
        printf("The popped element is : %d\n", data);
        top--;
    }
    return top;
}
void display(int s[], int top)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while (top >= 0)
        {
            printf("%d \n", s[top]);
            top--;
        }
    }
}
void peek(int s[], int top)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Element at the stack top is : %d\n", s[top]);
    }
}
