#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *lp;
    struct node *rp;
};
struct node*n(int d)
{
    struct node *n1;
    n1=malloc(sizeof(struct node*));
    n1->data=d;
    n1->lp=NULL;
    n1->rp=NULL;
    return(n1);
}
void preorder(struct node*root)
{
    if(root==NULL)
    return ;
    else
    {
        printf("%d\n",root->data);
        preorder(root->lp);
        preorder(root->rp);
    }
}
void main()
{
    int i,m,b;
    scanf("%d",&m);
     struct node*root=NULL;
     root=n(90);
     for(i=1;i<=m;i++)
     {
        scanf("%d",&b);
        if(b<root->data)
        {
            root->lp=n(b);
            
        }
        else
        {
            root->rp=n(b);
            
        }
     }
     printf("preorder\n");
     preorder(root);
}