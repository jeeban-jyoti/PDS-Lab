#include <stdio.h>

int main(){
    int l, h;
    printf("Input lower limit: ");
    scanf("%d", &l);
    printf("Input upper limit: ");
    scanf("%d", &h);

    int empty = 1;
    printf("Perfect Numbers: ");
    for(int i = l+1; i <= h; i++){
        if(i < 0){
            continue;
        }
        int sum = 0;
        for(int j = 1; j * j <= i; j++){
            if(i % j == 0){
                sum += j;
                sum += (i/j);
            }
        }
        if(sum -i == i && i >= 6){
            empty = 0;
            printf("%d, ", (i));
        }
    }
    if(empty == 1)
        printf("Nil");
    printf("\n");
    return 0;
}