#include <stdio.h>

int main()
{
    int n;
    printf("Enter Array Size:");
    scanf("%d",&n);
    int arr[n];
    int i, key, found = 0;
    int loc=0;
    printf("Enter Array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter Key:");
    scanf("%d",&key);

    for (i = 0; i < n ; i++)
    {
        if (key == arr[i] )
        {
            found ++;
            break;
        }
    }
    if (found != 0)
        printf("Element is present in the array\n");
    else
        printf("Element is not present in the array\n");

    for (i = 0; i < n ; i++)
    {
        if (key == arr[i] )
        {
            loc=i;

        }
    }
    printf("Location = %d\n",loc);
    return 0;
}
