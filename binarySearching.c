#include <stdio.h>
#define max 100
int binarysearch(int[], int, int, int);
int main()
{
    int arr[max], i, key, flag = 0, limit;
    printf("Enter the total number of elements in the array :\n");
    scanf("%d", &limit);
    printf("Enter the %d elements :\n", limit);
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key elememnt to search :\n");
    scanf("%d", &key);
    flag = binarysearch(arr, 0, limit - 1, key);
    if (flag == 1)
    {
        printf("Key Element found !\n");
    }
    else
    {
        printf("Key Element not found !\n");
    }
    return (0);
}

int binarysearch(int arr[], int lowerbound, int upperbound, int key)
{
    int mid = 0;
    while (lowerbound <= upperbound)
    {
        mid = (lowerbound + upperbound) / 2;
        if (arr[mid] == key)
        {
            return (1);
        }
        else if (arr[mid] > key)
        {
            upperbound = mid - 1;
        }
        else
        {
            lowerbound = mid + 1;
        }
    }
    return (0);
}