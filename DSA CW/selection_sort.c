#include<stdio.h>
int main(){
    int n;
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Please Enter the Value of Elements: ");
    for (int x = 0; x < n; x++)
        scanf("%d", &arr[x]);
    int i,j,loc,swap;
    for(i=0; i<(n-1); i++){
        loc = i;
        for(j=i+1; j<n; j++){
            if(arr[loc] > arr[j])
            loc = j;
        }
        if(loc != i) {
            swap = arr[i];
            arr[i] = arr[loc];
            arr[loc] = swap;
        }
    }
    for(i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}