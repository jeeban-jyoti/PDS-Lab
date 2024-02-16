#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num & 1){
        printf("%d is an odd number.\n", num);
    }
    else{
        printf("%d is an even number.\n", num);
    }
    return 0;
}
/*5 6
5 = 101
6 = 110

bitwise and = 100 = 4*/