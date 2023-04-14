#include <stdio.h>
#include <string.h>
#define max 10
void push(int[], int, int *);
int pop(int[], int *);
int main()
{
    char postfix[max], choice, answer;
    int top=-1,i=0,stack[max];
    int p, q, x;
    printf("Enter any postfix expression :\n");
    gets(postfix);
    while (postfix[i] != '\0')
    {
        choice = postfix[i];
        if (choice >= 65 && choice <= 90 || choice >= 97 && choice <= 122)
        {
            printf("Enter value for character  %c respectively :\n", choice);
                scanf("%d", &x);
            push(stack, x, &top);
        }
        else
        {
            p = pop(stack, &top);
            q = pop(stack, &top);
            if (choice == '+')
            {
                answer = q + p;
                push(stack, answer, &top);
            }
            else if (choice == '-')
            {
                answer = q + p;
                 push(stack, answer, &top);
            }
            else if (choice == '%')
            {
                answer = q + p;
             push(stack, answer, &top);
            }
            else if (choice == '/')
            {
                answer = q + p;
                 push(stack, answer, &top);
            }
            else if (choice == '*')
            {
                answer = q + p;
                 push(stack, answer, &top);
            }
            else if (choice == '^')
            {
                answer = q + p;
                push(stack, answer, &top);
            }
            else
            {
                printf("Invalid Operand used. \n");
            }
        }
        return (0);
    }
}
    void push(int stack[], int  choice ,int *top)
{
    if (*top == max - 1)
    {
        printf("Stack is full \n");
    }
    else
    {
        (*top)++;
        stack[*top] = choice;
    }
}
int  pop(int  stack[], int *top)
{
    int data;
    if (*top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        data = stack[*top];
        printf("The popped character is : %d\n", data);
        (*top)--;
    }
    return (*top);
}