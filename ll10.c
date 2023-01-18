#include<stdio.h>
#include<stdlib.h>
struct create
{
    int data;
    struct create *p;
};
void display(struct create*head)
{
    while(head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->p;
    }
}
void main()
{
    struct create *head;
    struct create *n1 =NULL;
    struct create *n2 = NULL;
    struct create *n3 = NULL;
    n1 = malloc(sizeof(struct create));
    n2 = malloc(sizeof(struct create));
    n3 = malloc(sizeof(struct create));
    n1-> data=4;
    n2-> data=8;
    n3-> data=12;
    n1-> p=n2;
    n2-> p=n3;
    n3-> p=NULL;
    head = n1;
    display(head);
    struct create *n4 =NULL;
    n4 = malloc(sizeof(struct create));
    n4-> data=15;
    n2->p=n4;
    n4->p=n3;
    printf("list\n");
    display(head);
    head = n2;
    printf("deleted list\n");
    display(head);
}