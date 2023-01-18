#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct create
{
    int data;
    struct create*lp;
    struct create*rp;
};
struct create*n(int d)
{
    struct create *n1;
    n1=malloc(sizeof(struct create*));
    n1->data=d;
    n1->lp=NULL;
    n1->rp=NULL;
    return(n1);
}
void preorder(struct create*root)
{
    if(root!=NULL)
    {
        printf("%d\n",root->data);
        preorder(root->lp);
        preorder(root->rp);
    }
}
void postorder(struct create*root)
{
    if(root!=NULL)
    {
        postorder(root->lp);
        postorder(root->rp);
        printf("%d\n",root->data);
    }
}
void inorder(struct create*root)
{
    if(root!=NULL)
    {
        inorder(root->lp);
        printf("%d\n",root->data);
        inorder(root->rp);
    }
}
bool full(struct create*root)
{
    if(root==NULL)
    return true;
    if(root->lp==NULL && root->rp==NULL)
    return true;
    if(root->lp && root->rp)
    return full(root->lp) && full(root->rp);
}
bool complete(struct create*root)
{
    if(root==NULL)
    return false;
    if(root->lp!=NULL && root->rp!=NULL)
    return true;
    if(root->lp!=NULL && root->rp==NULL)
    return true;
    if(root->lp==NULL && root->rp!=NULL)
    return false;
    if(root->lp && root->rp)
    return complete(root->lp) && complete(root->rp);
}
void main()
{
    struct create*root=NULL;
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
    full(root);
    if(full(root))
    printf("full tree\n");
    else 
    printf("not\n");
    complete(root);
    if(complete(root))
    printf("complete tree\n");
    else
    printf("not\n");
}