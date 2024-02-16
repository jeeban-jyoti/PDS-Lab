#include <stdio.h>

int check_prime(int num){
    if(num < 1)
        return 0;
    else if(num == 1)
        return 1;
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int empty = 1;
    for(int i = 1; i <= n/2; i++){
        if(!check_prime(i)){
            if(!check_prime(n-i)){
                printf("%d, %d\n", i, (n-i));
                empty = 0;
            }
        }
    }
    if(empty){
        printf("There does not exist such pair.\n");
    }
    return 0;
}