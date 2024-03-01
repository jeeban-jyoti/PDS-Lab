#include <stdio.h>

void checkGreaterThanAverage(int arr[], int n){
    float avg = 0;

    for(int i = 0; i < n; i++){
        avg += arr[i];
    }

    avg /= n;
    printf("%f", avg);
}

int main(){
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
    

    checkGreaterThanAverage(arr, n);

    return 0;
}