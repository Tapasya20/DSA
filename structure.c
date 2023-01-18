#include<stdio.h>
struct sum
{
    int value;
}s;
void display(struct sum s)
{
    printf("%d\n",s.value);
}
int sum(struct sum s)
{
    static int sum=0;
    sum+=s.value;
    return sum;
}
void main()
{
    int i,b;
    for(i=1;i<3;i++)
    {
    scanf("%d",&s.value);
    display(s);
    b=sum(s);
    }

    printf("\n%d",b);
}