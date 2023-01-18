#include<stdio.h>
#include<stdlib.h>
#define size 10
struct que
{
    int queue[size];
    int rear;
    int front;
};
typedef struct que q1;
void create(q1 *s)
{
   s->front=-1;
   s->rear=-1;
   printf("%d\n",s);
}
void full(q1 *s)
{
    if(s->rear== size -1)
    {
        printf("queue is full");
    }
}
void empty(q1 *s)
{
    if(s->front==-1)
    printf("\nstack is empty");
}
void enqueue(int v, q1 *s)
{
    printf("enqueue function start\n");
    if(s->rear==size-1)
    {
        printf("full");
    }
    else
    {
        if(s->front==-1)
        s->front=0;
        s->rear ++;
        s->queue[s->rear]=v;


    }
    printf("%d\n",s->queue[s->rear]);
}
void dequeue(q1 *s)
{
    int v;
    printf("dequeue function start\n");
    if(s->front==-1)
    {
        printf("empty");
    }
    else
    {
        v = s->queue[s->front];
        s->front ++;
    }
    printf("%d\n",v);
}
void main()
{
    q1 s = (q1)malloc(sizeof(q1));
    create(s);
    enqueue(40,s);
    enqueue(60,s);
    enqueue(70,s);
    enqueue(90,s);
    enqueue(95,s);
    dequeue(s);
}