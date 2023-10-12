#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int position; 

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete the element (0 to %d): ", n - 1);
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("Invalid position. Deletion failed.\n");
    } else {
        for (int i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Updated array after deletion:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}