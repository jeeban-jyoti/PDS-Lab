#include <stdio.h>

int main(){
    int n;
    printf("num: ");
    scanf("%d", &n);

    if(n == 0){
        printf("%d\n", 0);
        return 0;
    }

    int i = 1;
    if(i == 1){
        printf("%d ", 1);
        i++;
    }

    int sum = 1, j = 0, l = j;
    while(i <= n){
        l = sum;
        sum += j;
        printf("%d ", sum);
        j = l;
        i++;
    }

    printf("\n");
    return 0;
}