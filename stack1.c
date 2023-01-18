#include <stdio.h>
#include <string.h>
#define MAX 10
char stack[MAX];
int top = -1;
void push(char);
char pop();
void main()
{
    char exp[MAX], temp;
    int i, flag = 1;
    printf("Enter an expression : ");
    gets(exp);
    for (i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(exp[i]);
        if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
             if (top == -1)
            {
                flag = 0;
                break;
            }
            else
            {
                temp = pop();
                if (exp[i] == ')' && (temp == '{' || temp == '['))
                    flag = 0;
                if (exp[i] == '}' && (temp == '(' || temp == '['))
                    flag = 0;
                if (exp[i] == ']' && (temp == '(' || temp == '{'))
                    flag = 0;
            }
        }
    }
    if (top >= 0)
        flag = 0;
    if (flag == 1)
        printf("\n Valid expression");
    else
        printf("\n Invalid expression");
}
void push(char item)
{
    if (top == MAX - 1)
    {
        printf("stack is full");
        return;
    }
    top = top + 1;
    stack[top] = item;
}

char pop()
{
    if (top == -1)
    {
        printf("stack empty");
        return;
    }
    char temp;
    temp = stack[top];
    top = top - 1;
    return temp;
}