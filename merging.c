#include <stdio.h>
void main()
{
    int n = 0, i = 0, j = 0, m = 0, a[10], b[10], c[20], k;
    printf("enter the limits of array a and b\n");
    scanf("%d%d", &n, &m);
    printf("enter the elements of array a\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter the elements of array b\n");
    for (j = 0; j < m; j++)
        scanf("%d", &b[j]);
    i = 0;
    j = 0;
    while (i < n && j < m)
    {
        if (a[i] > b[j])
        {
            c[k] = b[j];
            j++;
            k++;
        }
        else if(a[i]==b[j])
        {
            c[k]=a[i];
            i++;j++;k++;
        }
        else
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }
    while (i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    printf("the elemets of merged array are\n");
    for (i=0;i<k;i++)
        printf("%d\n", c[i]);
}