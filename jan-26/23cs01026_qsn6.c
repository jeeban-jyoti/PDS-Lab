#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("Enter the number you want to check: ");
    scanf("%d", &num);

    if(num == 1){
        printf("1 is a Kaprekar number.\n");
        return 0;
    }

    long square = (long)(num * num);
    int order = 0;
    int temp = square;
    while(temp > 0){
        temp /= 10;
        order++;
    }

    for(int i = 1; i < order; i++){
        int div = pow(10, i);
        int first = square/div;
        int second = square%div;

        if(first+second == num){
            printf("%d is a Kaprekar number.\n", num);
            return 0;
        }
    }
    printf("%d is a not Kaprekar number.\n", num);
    return 0;
}