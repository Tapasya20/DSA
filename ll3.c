#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
    int data;
    struct node *next;
}*head,*new,*temp;
void create(int n)
{
    int d,i;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("allocation not possible\n");
        exit(0);
    }
    printf("Enter the Data\n");
    scanf("%d",&d);
        head->data=d;
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
            scanf("%d",&d);
            new->data=d;
            new->next=NULL;
            temp->next=new;
            temp=temp->next;
        }
}
bool isEmpty()
{
    return head==NULL;
}
void traverse()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("[%d, %d]\n",temp->data,temp->next);
        temp=temp->next;
    }
}
int length()
    {
        int l=0;
        struct node *current=head;;
        while(current!=NULL)
        {
            current=current->next;
            l++;
        }
        return l;
    }
int main()
{
    int n,l=0;
    printf("Enter the no. of nodes\n");
    scanf("%d",&n);
    create(n);
    printf("Traverse the list\n");
    traverse();
    l=length();
    printf("The lenght of the list is %d",l);
    return 0;

}