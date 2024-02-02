#include <stdio.h>

int main() {
    int age;
    double ticketPrice;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age < 0){
        printf("age cannot be less than 0\n");
        return 0;
    }

    switch(age){
        case 0 ... 4:
            ticketPrice = 0;
            break;
        case 5 ... 12:
            ticketPrice = 20;
            break;
        case 13 ... 59:
            ticketPrice = 50;
            break;
        default:
            ticketPrice = 50 - (50 * 0.2);
    }

    printf("The ticket price is: Rs.%.2lf\n", ticketPrice);

    return 0;
}
