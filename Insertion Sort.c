#include <stdio.h>
int main()
{
    int n;
    printf("Enter No of Array Elements:");
    scanf("%d",&n);
    int temp,i,j,arr[n];
    printf("Enter elements to be sorted:");
    for (i = 0;i <n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1;i <n;i++)
    {
        temp = arr[i];
        j = i - 1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
    printf("Sorted elements:\n");
    for (i = 0;i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}


