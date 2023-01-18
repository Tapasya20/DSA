#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],n1,n2,i,j,k=0,flag=0;
    printf("enter the size of array a and b:\n");
    scanf("%d%d",&n1,&n2);
    printf("enter the elements of array a:\n");
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("enter the elemts of array b:\n");
    for(j=0;j<n2;j++)
    scanf("%d",&b[j]);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
                flag++;
            }
        }
    }
   if(flag==0)
   printf("it is a null set");
   else
   {
     printf("the new array is:\n");
    for(i=0;i<k;i++)
    printf("%d ",c[i]);
   }
}