#include<stdio.h>
void th(int n,char a,char b,char c)
{
    if(n==0)
    return 1;
    else
    {
        th(n-1,a,c,b);
        printf("%d disc is moving from %c to %c\n",n,a,b);
        th(n-1,c,b,a);
    }
}
void main()
{
    int n;
    char a,b,c;
    printf("enter the value of n");
    scanf("%d",&n);
    th(n,'a','b','c');
}