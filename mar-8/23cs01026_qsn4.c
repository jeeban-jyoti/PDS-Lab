#include <stdio.h>

int maxInt(int arr[], int i, int n){
    if(i == n-1)
        return arr[i];
    
    int a = maxInt(arr, i+1, n);
    if(arr[i] > a)
        return arr[i];
    else
        return a;
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

    int max = maxInt(arr, 0, n);

    printf("Maximum value: %d\n", max);
    return 0;
}