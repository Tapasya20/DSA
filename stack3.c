#include<stdio.h>
#define size 10
int stack[size];
int top1=-1;
int top2=size;
void push1(int d)
{
    if(top1<=top2)
    {
        top1++;
        stack[top1]=d;
        printf("%d\n",stack[top1]);
    }
    else
    printf("stack1 overflow");
}
void push2(int d)
{
    if(top1<=top2)
    {
        top2--;
        stack[top2]=d;
        printf("%d\n",stack[top2]);
    }
    else
    printf("stack2 overflow");
}
void main()
{
    printf("enter the elements\n");
    push1(90);
    push1(80);
    push1(70);
    push2(60);
    push2(50);
    push2(40);
}