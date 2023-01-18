#include<stdio.h>
#define size 5
int arr[size];
int front=-1;
int rear=-1;
void enqueue(int ele)
{
    if(front==0&&rear==size-1)
    printf("full");
    else
    {
        if(front==-1)
        front++;
        rear=(rear+1)%size;
        arr[rear]=ele;
        printf("%d\n",arr[rear]);
    }
}
void dequeue()
{
    if(front==0&&rear==size-1)
    printf("empty");
    else
    {
        front=(front+1)%size;
        printf("%d\n",arr[front]);
    }
}
void main()
{
    int ele;
    scanf("%d",&ele);
    enqueue(ele);
    dequeue();
}