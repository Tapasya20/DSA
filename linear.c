#include<stdio.h>
void main()
{
    int i,n,a[10],c=0,d;
    printf("enter the limit of array\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element to be searched\n");
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        if(a[i]==d)
        {
            printf("%d found\n",d);
            c=1;
            printf("element found at position %d",i);
        }
    }
    if(c==0)
    printf("element not found");
}