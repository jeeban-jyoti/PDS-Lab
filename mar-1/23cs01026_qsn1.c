#include <stdio.h>

int checkPrime(int num){
    if(num < 2)
        return 0;
    
    for(int i = 2; (i * i) <= num; i++){
        if(num % i == 0)
            return 0;
    }

    return 1;
}

int main(){
    int low, high;
    printf("Enter lower limit of range: ");
    scanf("%d", &low);
    printf("Enter upper limit of range: ");
    scanf("%d", &high);

    int first_check = 1;

    printf("Prime numbers between %d-%d are:\n", low, high);
    for(int i = low; i <= high; i++){
        if(checkPrime(i)){
            if(!first_check)
                printf(", ");
                
            printf("%d", i);
            first_check = 0;
        }
    }
    printf("\n");

    return 0;
}