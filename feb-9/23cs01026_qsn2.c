#include <stdio.h>

int main(){
    int dividend, divisor;
    printf("Dividend: ");
    scanf("%d", &dividend);
    printf("Divisor: ");
    scanf("%d", &divisor);

    int quotient = 0;
    if(divisor == 0){
        printf("Division by 0 is undefined.\n");
        return 0;
    }
    if(dividend == 0){
        printf("Quotient: 0\n");
        printf("Remainder: 0\n");
        return 0;
    }
    
    if(dividend > 0 && divisor > 0){
        while(dividend - divisor >= 0){
            quotient++;
            dividend -= divisor;
        }
    }
    else if(dividend < 0 && divisor < 0){
        while(dividend - divisor <= 0){
            quotient++;
            dividend -= divisor;
        }
    }
    else if(dividend < 0 && divisor > 0){
        while(dividend + divisor <= 0){
            quotient--;
            dividend += divisor;
        }
    }
    else{
        while(dividend + divisor >= 0){
            quotient--;
            dividend += divisor;
        }
    }
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", dividend);
    return 0;
}