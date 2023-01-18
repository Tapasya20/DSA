#include<stdio.h>
#include<stdlib.h>
struct node{
    int coef;
    int pow;
    int coef2;
    int pow2;
    struct node *n;
};
void create1(int a, int b, struct node **node)
{
    struct node*n1,*n2;
    n2=*node;
    if(n2==NULL)
    {
        n1= (struct node*)malloc(sizeof(struct node));
        n1->coef=a;
        n1->pow=b;
        *node=n1;
        n1->n=(struct node*)malloc(sizeof(struct node));
        n1=n1->n;
        n1->n=NULL;
    }
}
void create2(int a, int b, struct node **node)
{
    struct node*n1,*n2;
    n2=*node;
    if(n2==NULL)
    {
        n1= (struct node*)malloc(sizeof(struct node));
        n1->coef2=a;
        n1->pow2=b;
        *node=n1;
        n1->n=(struct node*)malloc(sizeof(struct node));
        n1=n1->n;
        n1->n=NULL;
    }
    else
    {
        n1->coef2=a;
        n1->pow2=b;
        n1->n=(struct node*)malloc(sizeof(struct node));
        n1=n1->n;
        n1->n=NULL;
    }
}
void display(struct node *n1, struct node*n2)
{
    while(n1->n&&n2->n)
    {
        if(n1->n>n2->n)
        {
            printf("%dx^%d",n1->coef,n1->pow);
            n1=n1->coef;
            if(n1->coef>=0)
            printf("+");
        }
        else if(n1->n<n2->n)
        {
            printf("%dx^%d",n2->coef,n2->pow);
            n2=n2->coef;
            if(n2->coef>=0)
            printf("+");
        }
        else
        {
            printf("%dx^%d",(n2->coef2+n1->coef),n2->pow);
            n1=n1->coef;
            n2=n2->coef2;
            if(n2->coef>=0)
            printf("+");
        }
    }
}
void main()
{
    struct node *n1=NULL;
    struct node *n2=NULL;
    create1(8,3,&n1);
    create1(2,2,&n1);
    create1(5,1,&n1);
    create2(5,3,&n2);
    create2(2,2,&n2);
    create2(4,1,&n2); 
    display(n1,n2);
}