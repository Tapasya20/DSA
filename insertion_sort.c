#include<stdio.h>
void sort(int a[], int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
   {
     temp=a[i];
     j=i-1;
     while(j>=0&&a[j]>temp)
     {
        a[j+1]=a[j];
     a[j]=temp;
     j--;
     }
     a[j+1]=temp;
   }
   printf("the sorted array is\n");
   for(i=0;i<n;i++)
   printf("%d",a[i]);
}
void main()
{
    int a[10],i,n;
    printf("enter the size if array\n");
    scanf("%d",&n);
    printf("enter the element of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
}