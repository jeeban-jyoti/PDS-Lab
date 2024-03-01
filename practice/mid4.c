#include <stdio.h>

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 1, 3, 2, 4, 5, 3, 2, 4, 6, 6, 4, 2 };
    int x = 0;

    for(int i = 0; i < (sizeof(arr)/sizeof(int)); i++){
        x = x ^ arr[i];
    }

    printf("%d\n", x);
    return 0;
}