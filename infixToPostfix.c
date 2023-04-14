#include <stdio.h>
#include <string.h>
#define max 10
void push(char [], char, int *);
char pop(char[], int *);
int  precedence(char);
int main()
{
    char infix[max], stack[max], postfix[max], choice;
    char ch;
    int top = -1, i = 0, j = 0;
    printf("Enter any infix expression :\n");
    gets(infix);
    push(stack, '(', &top);
    while (infix[i] != '\0')
    {
        choice = infix[i];
        if (choice == '(')
        {
            push(stack, choice, &top);
        }
        else if (choice == '-' || choice == '+' || choice == '*' || choice == '/' || choice == '%' || choice == '^')
        {
            while (precedence(choice) <= precedence(stack[top]))
            {
                ch = pop(stack, &top);
                postfix[j] = ch;
                j++;
            }
            push(stack, choice, &top);
        }
        else if (choice == ')')
        {
            while (ch == pop(stack, &top)!= '(')
            {
                postfix[j] = ch;
                j++;
            }
        }
        postfix[j] = choice;
        j++;
        i++;
    }
    postfix[j] = '/0';
    printf("The postfix expression is :\n", postfix);
    return (0);
}
int  precedence(char x)
{
    if (x == '^')
    {
        return (5);
    }
    else if (x == '/ ' || x == '% ' || x == ' *')
    {
        return (4);
    }
    else if (x == '+ ' || x == '-')
    {
        return (3);
    }
    else
    {
        return (2);
    }
}
void push(char stack[], char choice ,int *top)
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
char pop(char stack[], int *top)
{
    int data;
    if (*top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        data = stack[*top];
        printf("The popped character is : %c\n", data);
        (*top)--;
    }
    return (*top);
}