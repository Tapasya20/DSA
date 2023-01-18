#include<stdio.h>
#define size 10
int que[size];
int front = -1;
int rear = -1;
void enqueue(int val)
{
    printf("enqueue");
    if (rear == size -1)
    {
        printf("full");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear ++;
        que[rear] = val;
        printf("%d\n",que[rear]);
    }
}
void dequeue()
{
    printf("dequeue");
    if(front == -1)
    printf("empty");
    else
    printf("%d\n",que[front]);

    front ++;
}
void main()
{
    int i;
    for(i = 1; i<=size;i++)
    enqueue(i);
    for(i = 1; i<=size;i++)
    dequeue();

}