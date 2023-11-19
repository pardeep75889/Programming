#include <stdio.h>

int main()
{
    int n, x, y, temp;
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Please Enter the Value of Elements: ");
    for (x = 0; x < n; x++)
        scanf("%d", &arr[x]);
    for (x = 0; x < n - 1; x++)
    {
        for (y = 0; y < n - x - 1; y++)
        {
            if (arr[y] > arr[y + 1])
            {
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }
    printf("Array after implementing bubble sort: ");
    for (x = 0; x < n; x++)
    {
        printf("%d  ", arr[x]);
    }
    return 0;
}