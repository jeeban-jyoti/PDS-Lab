#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int n;
    printf("Size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: ", i);
        scanf("%d", (&arr[i]));
    }

    reverseArray(arr, 0, n - 1);

    printf("\nReversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
