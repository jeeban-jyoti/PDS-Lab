#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if((num & 1) && (num <= 200 && num >= 100)){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}