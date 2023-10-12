#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int position; 
    int element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the element: ");
    scanf("%d", &position);

    if (position < 0 || position > n) {
        printf("Invalid position. Insertion failed.\n");
    } else {
        printf("Enter the element to insert: ");
        scanf("%d", &element);

        for (int i = n; i > position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position] = element;
        n++; 
        printf("Updated array after insertion:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
