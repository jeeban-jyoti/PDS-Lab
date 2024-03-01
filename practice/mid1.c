#include <stdio.h>

int main(){
    int i, j, k, count = 0;
    for(i = 0; i < 10; i++){
        for(j = 0; j < i; j++){
            for(k = 0; k < 10; k++){
                printf("i = %d, j = %d, k = %d, c = %d\n", i, j, k, count);
                if(k != j)
                    break;
                else    
                    count++;
            }
            printf("\n");
        }
        printf("---------------\n");
    }
    printf("\n%d\n", count);
}