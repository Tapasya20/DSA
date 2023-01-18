#include<stdio.h>
#include<stdlib.h>
struct create
{
    int coeff;
    int power;
    struct create *next;
};
void display(struct create*head)
{
    while(head!=NULL)
    {
        printf("%dx^%d",head->coeff,head->power);
        head=head->next;
        if(head->coeff>=0)
        printf("+");
        
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
    n1->coeff=8;
    n1->power=3;
    n1->next=n2;
    n2->coeff=2;
    n2->power=2;
    n2->next=n3;
    n3->coeff=4;
    n3->power=1;
    n3->next=n4;
    n4->coeff=9;
    n4->power=0;
    n4->next=NULL;
    head=n1;
    display(head);
}