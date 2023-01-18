#include<stdio.h>
#define size 10
struct stack{
    int top1;
    int top2;
    int stack[size];
};
void create(struct stack *s){
    s->top1=-1;
    s->top2=size;
}
void push1(struct stack *s, int d)
{
    if((s->top1)>(s->top2-1))
    {
        s->top1++;
        s->stack[s->top1]=d;
        printf("%d\n",s->stack[s->top1]);
    }
    else
    printf("stack1 overflow");
}
void push2(struct stack *s,int d){
    if((s->top1)>(s->top2-1)){
        s->top2--;
        s->stack[s->top2]=d;
        printf("%d\n",s->stack[s->top2]);
    }
    else
    printf("stack2 overflow");
}
void pop1(struct stack *s){
    if(s->top1>=0)
    {
        int e=s->top1--;
        printf("element is poped");
    }
    else
    printf("underflow 1");
}
void pop2(struct stack *s){
    if(s->top2<=size)
    {
        int e=s->top2--;
        printf("element is poped");
    }
    else
    printf("underflow 2");
}
void main()
{
   // struct stack st s=(st*)malloc(sizeof(st));
   struct stack st,*s;
   create(s);
   printf("enter the elements\n");
   push1(s,90);
   push1(s,80);
   push1(s,70);
   push1(s,60);
   push2(s,50);
   push2(s,40);
   push2(s,30);
   push2(s,20);
}
