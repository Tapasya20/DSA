#include<stdio.h>
void main()
{
    int a[5],i,j,c=1,v=-1,f[5];
    printf("enter the elements of array");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        c=1;
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                f[j]=v;
                c++;
            }
        }
        if(f[i]!=v)
        {
            f[i]=c;
        }
    }
    for(i=0;i<5;i++)
    {
        if(f[i]!=v)
        printf("the element is %d and its frequency is %d\n",a[i],f[i]);
    }
}