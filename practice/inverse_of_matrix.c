#include <stdio.h>

int main(){
    int n;
    printf("Enter size of matrix (n): ");
    scanf("%d", &n);

    float mat[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter element (%d, %d): ", i, j);
            scanf("%f", (&mat[i][j]));
        }
    }

    for(int i = 1; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k < n; k++){

            }
        }
    }
    return 0;
}