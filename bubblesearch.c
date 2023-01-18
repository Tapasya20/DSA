#include<stdio.h>
void sort(int a[],int n)
{
    int i,j,temp=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the sorted array is\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}
int main()
{
    int a[10],i,n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
}
