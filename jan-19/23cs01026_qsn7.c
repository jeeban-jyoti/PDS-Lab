#include <stdio.h>
#include <math.h>

int main() {
    double mealCost, tipPercent, taxPercent;

    printf("Enter the meal price: ");
    scanf("%lf", &mealCost);
    printf("Enter the tip percentage: ");
    scanf("%lf", &tipPercent);
    printf("Enter the tax percentage: ");
    scanf("%lf", &taxPercent);

    double tip = mealCost * (tipPercent / 100);
    double tax = mealCost * (taxPercent / 100);
    double total = mealCost + tip + tax;

    printf("The total cost of the meal is: %d\n", (int)round(total));

    return 0;
}
