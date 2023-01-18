#include<stdio.h>
#include<stdlib.h>
struct create
{
    int data;
    struct create *prev;
    struct create *next;
};
void display(struct create *head)
{
    while(head!=NULL)
    {
    printf("%d\n",head->data);
    head=head->next;
    }
}
void main()
{
    struct create *head;
    struct create *n1=NULL;
    struct create *n2=NULL;
    struct create *n3=NULL;
    struct create *n4=NULL;
    n1=malloc(sizeof(struct create));
    n2=malloc(sizeof(struct create));
    n3=malloc(sizeof(struct create));
    n4=malloc(sizeof(struct create));
    n1->data=80;
    n2->data=16;
    n3->data=30;
    n4->data=90;
    n1->prev=NULL;
    n1->next=n2;
    n2->prev=n1;
    n2->next=n3;
    n3->prev=n2;
    n3->next=n4;
    n4->prev=n3;
    n4->next=NULL;
    head=n1;
    display(head);
    printf("insertion\n");
    struct create *n5=NULL;
    n5=malloc(sizeof(struct create));
    n5->data=87;
    head=n5;
    n5->prev=NULL;
    n5->next=n1;
    n1->prev=n5;
    display(head);
}