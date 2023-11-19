#include<stdio.h>
void insertion_sort(int arr[], int n) {
    int i, key, j;
    for(i = 0; i < n; i++){
        key = arr[i];
        j = i - 1;
    
    while(j >= 0 && arr[j] > key) {
        arr[j+1] = arr[j];
        j = j - 1;
    }
    arr[j + 1] = key;
    }
}
int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements : \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    insertion_sort(arr, n);
    printf("Sorted Array : \n");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}