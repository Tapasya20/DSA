#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],n,m,i,j,ch,k;
    printf("enter the range of array 1 and array2");
    scanf("%d%d",&n,&m);
    printf("enter the elements of array 1");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        
    printf("enter the elements of array 2");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("enter 1. A-B,2.B-A");
    scanf("%d",&ch);
    i=0;j=0;
    switch(ch)
    {
        case 1: while(i<n&&j<m)
        {
                if(a[i]==b[j]){
                j++;
                i++;
                }
                else
                {
                c[k]=a[i];
                k++;
                i++;
                } 
        }
         printf("the new array is");
         for (i=0;i<k;i++)
         printf("%d",c[i]);
        break;
        case 2: while(i<n&&j<m)
        {
                if(b[j]==a[i])
                {
                   i++;
                   j++;
                }
                else
                {
                   c[k]=b[j];
                   k++;
                   j++;
                }

        }
        printf("the new array is");
        for (i=0;i<k;i++)
        printf("%d",c[i]);
        break;
    }
   
}