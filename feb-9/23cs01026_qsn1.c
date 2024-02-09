#include <stdio.h>

int main() {
    int num;
    int digit_seen[10] = {0};
    int sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;
        
        if (digit_seen[digit] == 0) {
            sum += digit;
            digit_seen[digit] = 1;
        }

        num /= 10;
    }

    printf("Sum of unique digits: %d\n", sum);

    return 0;
}
