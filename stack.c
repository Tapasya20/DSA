#include<stdio.h>
#include<stdlib.h>
#define max 5
int top;
struct stack
{
    int e[max];
    int top;
}*s;
typedef struct stack s1;
void create(s1 *s)
{
    s->top =-1;
   printf("%d\n",s);
}
void full(s1 *s)
{
    if(s->top == max-1)
    {
      printf("stack is full\n"); 
    }
    else
    {
        printf("stack id empty\n");
    }
}
void empty(s1 *s)
{
    if(s->top==-1)
    {
        printf("stack is empty\n");
    }
}
void push( int value,s1 *s)
{
    printf("push fuction starts here\n");
    if(s->top==max-1)
    {
        printf("overflow\n");
    }
    else
    {  
        s->top = s->top +1;
        s->e[s->top]=value;

    }
    printf("%d\n",s->e[s->top]);
}
void pop(s1 *s)
{ 
    int v;
    printf("pop fucction sarts here \n");
    if(s->top ==-1)
    {
        printf("underflow \n");
    }
    else
    {
        v =s->e[s->top];
        s->top=s->top-1;
    }
     printf("%d\n",v);
}
void show(s1 *s)
{
    int i;
    printf("using show\n");
    for(i=0;i<max-1;i++)
        printf("%d\n",s->e[i]);
        printf("top os the stack is %d\n",s->e[s->top]);
}
void main()
{
     s = (struct stack*)malloc(sizeof(struct stack));
    create(s);
    push(40,s);
    push(60,s);
    push(70,s);
    push(90,s);
    push(95,s);
    pop(s);
    show(s);
}