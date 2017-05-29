#include<stdio.h>
int main()
{
    int n;
    printf("Enter Array Size:");
    scanf("%d",&n);
    int a[n],i,j;
    printf("Enter Array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int tm;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                tm=a[j+1];
                a[j+1]=a[j];
                a[j]=tm;
            }
        }
    }
    printf("Sorted Array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

