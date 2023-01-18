#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head,*new,*temp;
void createlist(int n)
{
    int data,i;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("allocation not possible");
        exit(0);
    }
    printf("enter the data of node 1:\n");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++)
    {
        new=(struct node*)malloc(sizeof(struct node));
        if(new==NULL)
        {
            printf("Allocation not possible\n");
            exit(0);
        }
        scanf("%d",&data);
        new->data=data;
        new->next=NULL;
        temp->next=new;
        temp=temp->next;
    }
}
void traverselist()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n;
    printf("enter the total no. of nodes\n");
    scanf("%d",&n);
    createlist(n);
    printf("data in the list\n");
    traverselist();
    return 0;
}
