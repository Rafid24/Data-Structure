#include<stdio.h>
int main()
{
    int n;
    printf("Enter Array Number:");
    scanf("%d",&n);
    int arr[n],i,max;
    printf("Enter Array Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i==0)
            max=arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Maximun=%d",max);
}
