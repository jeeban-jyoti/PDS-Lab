#include <stdio.h>
#include <math.h>

int main() {
    int number, original_number, result = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("Incorrect input. Please enter a 3-digit number.\n");
        return 0;
    }

    original_number = number;

    while (original_number != 0) {
        result += pow(original_number % 10, 3);
        original_number /= 10;
    }

    if(result == number)
        printf("Yes, %d is an Armstrong number.\n", number);
    else
        printf("No, %d is not an Armstrong number.\n", number);

    return 0;
}
