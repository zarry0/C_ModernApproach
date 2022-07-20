// Sorts an array recursively using selection sort
#include <stdio.h>

void selection_sort(int n, int a[n]);

int main (void) {
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers to be sorted: ");
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    selection_sort(n, arr);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void selection_sort(int n, int a[n]){
    if (n <= 1) return;

    int pos = 0, max = a[pos];
    for (int i = 0; i < n; i++)
        if (max < a[i]){
            max = a[i];
            pos = i;
        } 
    a[pos] = a[n-1];
    a[n-1] = max;

    selection_sort(n-1, a);
}