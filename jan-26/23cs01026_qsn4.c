#include <stdio.h>

int main(){
    float x1, y1, x2, y2, x3, y3;
    printf("enter coordinates of the first point (x1, y1): ");
    scanf("%f%f", &x1, &y1);
    printf("enter coordinates of the second point (x2, y2): ");
    scanf("%f%f", &x2, &y2);
    printf("enter coordinates of the third point (x3, y3): ");
    scanf("%f%f", &x3, &y3);

    if((y2-y1)/(x2-x1) == (y3-y2)/(x3-x2))
        printf("given points lie on the same line\n");
    else
        printf("given points do not lie on the same line\n");

    return 0;
}