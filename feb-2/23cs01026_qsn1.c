#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    switch(num % 2){
        case 0:
            printf("%d is an even number.\n", num);
            break;
        case 1:
            printf("%d is an odd number.\n", num);
            break;
        case -1:
            printf("%d is an odd number.\n", num);
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
