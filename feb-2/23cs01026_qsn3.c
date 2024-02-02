#include <stdio.h>

int main() {
    int credit_score;
    float balance;

    printf("Enter your credit score: ");
    scanf("%d", &credit_score);

    if(credit_score < 0){
        printf("%d is not a valid credit score\n", credit_score);
        return 0;
    }

    printf("Enter your current balance: ");
    scanf("%f", &balance);

    float interest_rate;

    switch(credit_score){
        case 0 ... 599:
            interest_rate = 0.15;
            break;
        case 600 ... 750:
            interest_rate = 0.12;
            break;
        default:
            interest_rate = 0.10;
    }

    double interest = balance * interest_rate;
    printf("The calculated interest is: %.2f\n", interest);

    return 0;
}
