#include <stdio.h>

void bubbleSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already sorted, so we don't need to check them
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("Array before sorting: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
    
    bubbleSort(array, n);
    
    printf("Array after sorting: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
    
    return 0;
}