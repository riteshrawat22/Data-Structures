#include <stdio.h>
#define max 100
int linearsearch(int[], int, int);
int main()
{
    int arr[max], limit, i, key, flag = 0;
    printf("Enter the total number of elements in the array :\n");
    scanf("%d", &limit);
    printf("Enter the %d elements :\n", limit);
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key elememnt to search :\n");
    scanf("%d", &key);
    flag = linearsearch(arr, limit, key);
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
int linearsearch(int arr[], int limit, int key)
{
    int i;
    for (i = 0; i < limit; i++)
    {
        if (arr[i] == key)
        {
            return (1);
        }
    }
    return (0);
}
