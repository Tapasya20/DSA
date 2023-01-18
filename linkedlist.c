#include<stdio.h>
#include<stdlib.h>
struct create
{
    int data;
    struct create *p;
    };
void first(struct create **head, int d)
{
    struct create *n0=NULL;
    n0=malloc(sizeof(struct create));
    n0->data=d;
    n0->p=*head;
    *head=n0;
}
void last_node(struct create **head, int d)
{
    struct create *n4=NULL;
    n4=malloc(sizeof(struct create));
    n4->data=d;
    n4->p=NULL;
    struct create *temp=*head;
    while(temp->p!=NULL)
    {
        temp=temp->p;
    }
    temp->p=n4;
}
void display(struct create *head)
{
    while(head!=NULL)
    {
    printf("(%d, %d)-> ",head->data,head->p);
    head=head->p;
    }
}
void main()
{
    struct create *head;
    struct create *n1=NULL;
    struct create *n2=NULL;
    struct create *n3=NULL;
    n1=malloc(sizeof(struct create));
    n2=malloc(sizeof(struct create));
    n3=malloc(sizeof(struct create));
    n1->data=4;
    n2->data=8;
    n3->data=5;
    n1->p=n2;
    n2->p=n3;
    n3->p=NULL;
    head=n1;
    first(&head,34);
    last_node(&head,324);
    display(head);
}