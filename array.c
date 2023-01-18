#include<stdio.h>
void main()
{
    int a[5],i,sum=0,max;
    printf("enter the elements of array");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    printf("%d\n",a[i]);
    for(i=0;i<5;i++)
    sum=sum+a[i];
    printf("sum=%d",sum);
    for(i=0;i<5;i++)
    {
        if(a[i]<a[i+1])
        max=a[i+1];
    }
    printf("\n max element is %d",max);
}