#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lp;
    struct node *rp;
};
struct node *n(int d)
{
    struct node *n1;
    n1=malloc(sizeof(struct node));
    n1->data=d;
    n1->lp=NULL;
    n1->rp=NULL;
    return(n1);
}
void preorder(struct node*root)
{
    if(root==NULL)
    return 0;
    else
    {
        printf("%d\n",root->data);
        preorder(root->lp);
        preorder(root->rp);
    }
}
void postorder(struct node*root)
{
    if(root==NULL)
     return 0;
    else
    {
        postorder(root->lp);
        postorder(root->rp);
        printf("%d\n",root->data);
    }
}
void inorder(struct node*root)
{
    if(root==NULL)
     return 0;
    else
    {
        inorder(root->lp);
        printf("%d\n",root->data);
        inorder(root->rp);
    }
}
void main()
{
    struct node*root=NULL;
    root=n(90);
    root->lp=n(95);
    root->rp=n(35);
    root->lp->lp=n(63);
    root->lp->rp=n(85);
    root->rp->lp=n(86);
    root->rp->rp=n(20);
    printf("preorder\n");
    preorder(root);
    printf("postorder\n");
    postorder(root);
    printf("inorder\n");
    inorder(root);
}