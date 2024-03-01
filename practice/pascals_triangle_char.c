#include<stdio.h>
int main() 
{ 
    int n;
    scanf("%d", &n);

    for (int line = 1; line <= n; line++) { 

        for (int space = 1; space <= n - line; space++) 
            printf(" "); 

        int coef = 1; 

        for (int i = 1; i <= line; i++) { 
            printf("%2c", 64 + coef); 
            coef = coef * (line - i) / i; 
        } 
        printf("\n"); 
    } 

    return 0;
}