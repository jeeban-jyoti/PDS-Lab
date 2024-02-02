#include <stdio.h>

int main() {
    int num1, num2;
    char operation;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch(operation){
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %.2lf\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;
        default:
            printf("Invalid operation. Please enter +, -, *, or /.\n");
    }

    return 0;
}
