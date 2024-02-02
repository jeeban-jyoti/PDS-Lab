#include <stdio.h>

int main(){
    int a, b, c;
    printf("enter values of the sides of trianle: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a <= 0 || b <= 0 || c <= 0){
        printf("enter valid numbers as side of a triangle cannot be negative\n");
        return 0;
    }

    if(a+b>c && a+c>b && b+c>a)
        printf("given numbers can be the sides of a triangle.\n");
    else
        printf("given numbers cannot be the sides of a triangle.\n");
    return 0;
}