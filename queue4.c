#include<stdio.h>
#include<limits.h>
#define MAX 10
int s=-1;
int value[MAX];
int p[MAX];
int full()
{
    return s==MAX-1;
}
int empty()
{
   return s==-1;
}
void enqueue(int d, int p1)
{
    if(!full())
    {
        s++;
        value[s]=d;
        p[s]=p1;
    }
}
void display()
{
    int i;
    for(i=0;i<=s;i++)
    {
        printf("%d, %d\n",value[i], p[i]);
    }
}
int peek()
{
    int maxp=INT_MIN;
    int index=-1;
    int i;
    for(i=0;i<s;i++)
    {
    if(maxp==p[i] && index>-1 && value[index]<value[i])
    {
     maxp=p[i];
     index=i;
    }
    else if(maxp<p[i])
    {
     maxp=p[i];
     index=i;  
    }
}
return index;
}
void dequeue()
{
    int i;
    if(!empty())
    {
    int ele=peek();
     for (i = ele; i < s; i++) {
            value[i] = value[i + 1];
            p[i] = p[i + 1];
        }
        s--;
    }
}
void main()
{
    enqueue(12,5);
    enqueue(24,3);
    enqueue(33,1);
    printf("Before Dequeue : \n");
    display();
    dequeue();
    printf("After Dequeue : \n");
    display();
}