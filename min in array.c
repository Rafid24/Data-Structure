#include<stdio.h>
int main()
{
    int n;
    printf("Enter Array Number:");
    scanf("%d",&n);
    int arr[n],i,min;
    printf("Enter Array Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i==0)
            min=arr[i];
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Minimun=%d",min);
}

