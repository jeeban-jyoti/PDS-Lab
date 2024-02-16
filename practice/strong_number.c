#include <stdio.h>

long factorial(int num){
    if(num == 0)
        return 1;
    else if(num == 1)
        return 1;
    return num * factorial(num-1);
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int sum = 0;
    int m = n;
    
    while(n > 10){
        sum += factorial(n % 10);
        n /= 10;
    }
    sum += factorial(n);
    
    if(sum == m)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}